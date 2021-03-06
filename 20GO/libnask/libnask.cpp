#include "libnask.hpp"

//
// ポインタSからポインタTまでの間のスペースを飛ばして
// 最初の"スペースではない"データまで移動
//
UCHAR* skipspace(UCHAR *s, UCHAR *t)
{
     while (s < t && *s != '\n' && *s <= ' ')
	  s++;
     return s;
}

//
// IMM(測値)を出力する、最大6バイト出力
//
UCHAR* putimm(int i, UCHAR *p)
{
     UCHAR c = 6;
     if (i >= 0) {
	  if (i <= 0xff)
	       c = 0x00;
	  else if (i <= 0xffff)
	       c = 0x02;
	  else if (i <= 0xffffff)
	       c = 0x04;
     } else {
	  if (i >= -0x100)
	       c = 0x01;
	  else if (i >= -0x10000)
	       c = 0x03;
	  else if (i >= -0x1000000)
	       c = 0x05;
     }
     p[0] = c;
     p[1] = i & 0xff;
     c >>= 1;
     LOG_DEBUG("c: %d \np[0]: 0x%02x \np[1]: 0x%02x \n", c, p[0], p[1]);

     p += 2;
     while (c) {
	  i >>= 8;
	  c--;
	  *p++ = i & 0xff;
	  LOG_DEBUG("p[%d]: 0x%02x", c, *p);
     }

     return p;
}

//
// 演算子の評価
//
UCHAR* libnask::put_expr(UCHAR *s, struct STR_TERM **pexpr)
{
     LOG_DEBUG("s: 0x%02x \n", s);

     struct STR_TERM *expr = *pexpr;
     int i, j;
     UCHAR c;

//skip_single_plus:
     j = expr->term_type;
     i = expr->value;
     expr++;
     switch (j) {
     case 0: {
	  // constant number
	  LOG_DEBUG("expr->term_type: constant number \n");
	  s = putimm(i, s);
	  break;
     }
     case 1: {
	  // operator
	  LOG_DEBUG("expr->term_type: operator \n");
          //if (i == 0)
          //	goto skip_single_plus; /* 単項 + */
	  *s++ = ll_ope_list[i];
	  s = libnask::put_expr(s, &expr);
	  if (i >= 4)
	       s = libnask::put_expr(s, &expr); /* 二項演算子 */
	  break;
     }
     case 2: {
	  // register
	  LOG_DEBUG("expr->term_type: register \n");
     	  s[0] = 0x00; /* const 0 */
     	  s[1] = 0x00;
     	  s += 2;
     	  break;
     }
     case 3: {
	  // label
	  LOG_DEBUG("expr->term_type: label \n");
     	  c = 0x0b;
     	  if (i <= 0xff)
     	       c = 0x08;
     	  else if (i <= 0xffff)
     	       c = 0x09;
     	  else if (i <= 0xffffff)
     	       c = 0x0a;
     	  s[0] = c;
     	  s[1] = i & 0xff;
     	  s += 2;
     	  c &= 0x03;
     	  while (c) {
     	       i >>= 8;
     	       c--;
     	       *s++ = i & 0xff;
     	  }
     	  break;
     }
     default: {
	  LOG_DEBUG("expr->term_type: ? \n");
	  break;
     }
     }

     *pexpr = expr;
     return s;
}

//
// dest1を返す(NULLはエラー)
//
UCHAR *nask(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1)
{
	LOG_DEBUG("nask assembly source ===\n%s\n===\n", src0);
	int i, j, k, prefix_def, tmret;

	// bufをunique_ptrで初期化しておき、bpはそのポインタとして使用する
	std::array<nask32bitInt, 16> buf = { 0 };
	nask32bitInt* bp = buf.data();

	UCHAR *src, c, *s, *dest00 = dest0;
	struct INST_TABLE *itp;
	struct STR_TERM *expr;
	static int tbl_o16o32[4] = { 0, 0x10000000 /* O16(暗黙) */, 0, 0x20000000 /* O32(暗黙) */ };
	std::unique_ptr<STR_SECTION[]> sectable(new STR_SECTION[MAX_SECTIONS * sizeof (struct STR_SECTION)]);
	struct STR_SECTION* section;
	nextlabelid = nask_L_LABEL0;

	std::unique_ptr<STR_STATUS> status(new STR_STATUS());
	std::unique_ptr<STR_TERM> expression(new STR_TERM());
	std::unique_ptr<STR_TERM> mem_expr(new STR_TERM());
	status->expression = expression.get();
	status->mem_expr = mem_expr.get();

	std::unique_ptr<STR_DECODE> decode(new STR_DECODE());
	std::unique_ptr<STR_IFDEFBUF> ifdef(new STR_IFDEFBUF());
	std::unique_ptr<UCHAR> bp0(new UCHAR());
	ifdef->bp0 = bp0.get();
	ifdef->bp1 = ifdef->bp0 + 256;

	std::unique_ptr<UCHAR> labelbuf(new UCHAR[nask_LABELBUFSIZ]);
	std::unique_ptr<UCHAR> labelbuf0(new UCHAR[nask_LABELBUFSIZ]);
	std::array<UCHAR, nask_maxlabels> labelflags;
	for (i = 0; i < nask_maxlabels; i++)
		labelflags[i] = 0;
	for (i = 0; i < MAX_SECTIONS; i++) {
		sectable[i].align0 = -1;
		sectable[i].align1 = 1;
		sectable[i].dollar_label2 = 0xffffffff;
	}
	decode->sectable = section = sectable.get();
	section->name[0] = '.';
	section->name[1] = '.';
	section->name[2] = '\0';
	section->p = dest0;

	status->src1 = src1;
	status->support = status->expr_status.support = 1; /* 1:8086 */
	status->bits = 16;
	status->optimize = 0;
	status->format = 0; /* BIN */
	status->option = 0; /* ほぼNASM互換 */
	status->expr_status.option = 0;
	status->file_len = 0;

	if (dest0 + 5 > dest1)
		dest0 = NULL;
	if (dest0 == NULL)
		goto overrun;

	dest0[0] = REM_3B;
	dest0[1] = 0; /* start section */
	dest0[2] = 0;
	dest0[3] = 0x68; /* 68-00 Intel-endian */
	dest0[4] = 0x00;
//	dest0[5] = 0x58; /* ORG */
//	dest0[6] = 0x00; /* 0 */
//	dest0[7] = 0x00;
	dest0 += 5;

	status->expr_status.dollar_label2 = 0xffffffff;
	while (src0 < src1) {
		LOG_DEBUG("processing assembly source: because of 'src0 < src1' \n");
		if (status->expr_status.dollar_label2 == 0xffffffff) {
			status->expr_status.dollar_label2 = nextlabelid++;
			status->expr_status.dollar_label1 = status->expr_status.dollar_label2;
		}
		status->expr_status.dollar_label0 = status->expr_status.dollar_label1;
		status->expr_status.dollar_label1 = 0xffffffff;
		LOG_DEBUG("buffered pointer bp: %s \n", dump_ptr("bp ", bp).c_str());
		ifdef->vb[8] = 0; /* for TIMES */
		src = decoder(status.get(), src0, decode.get());
		/* ラインスタート出力 */
		/* f7, src - src0, src0 */
		if (dest0 + 9 + 6 /* $の分 */ > dest1)
			dest0 = NULL;
		if (dest0 == NULL)
			goto overrun;

		dest0[0] = 0xf7; /* line start */
		put4b(src - src0, &dest0[1]);
		do {
			int temp = *src0;
			put4b(temp, &dest0[5]);
		} while(0);
		dest0 += 9;
		ifdef->bp = ifdef->bp0;
	//	if (decode->dollar != 0 && status->expr_status.dollar_label0 == 0xffffffff)
	//		status->expr_status.dollar_label0 = nextlabelid++;
		if ((i = status->expr_status.dollar_label0) != 0xffffffff) {
			if (labelflags[i] == 0) {
				dest0[0] = 0x0e;
				labelflags[i] = 0x01;
				dest0 = putimm(i, &dest0[1]);
			}
		}
		if (decode->label) {
			/* ラベル定義 */
			bp->byte[0] = 0x0e; /* プログラムカウンタをラベル定義するコマンド */
 			if (decode->instr != NULL && decode->instr->param[0] == OPE_EQU)
				bp->byte[0] = 0x2d; /* EQU */
			s = decode->label;
			do {
				c = *s;
				if (c <= ' ')
					break;
				if (c == ':')
					break;
				if (c == ';')
					break;
				if (c == ',')
					break;
			} while (++s < src1);
			i = label2id(s - decode->label, decode->label, 0);
			if (labelflags[i]) {
				(*bp++).integer = 0xe7;
				bp->byte[1] = 0xe7;
				c = 0; /* mod nnn r/m なし */
				goto outbp;
			}
			labelflags[i] = 0x01;
			c = bp->byte[0];
			bp = ucharToNask32bitIntPtr(putimm(i, &bp->byte[1]));
			if (c == 0x0e) {
				// FIXME
				//if ((dest0 = flush_bp(bp - buf, buf, dest0, dest1, ifdef)) == NULL)
				// 	goto overrun;
				//bp = buf;
			}
			if (*decode->label != '.') {
				if (!(decode->instr != NULL && decode->instr->param[0] == OPE_EQU)) {
					i = s - decode->label;
					locallabelbuf = locallabelbuf0;
					s = decode->label;
					while (i) {
						i--;
						*locallabelbuf++ = *s++;
					}
				}
			}
		}
times_skip:
		if (decode->error) {
err:
			/* エラー出力 */
			buf[0].integer = decode->error | 0xe0;
			// FIXME
			//bp = buf + 1;
			c = 0; /* mod nnn r/m なし */
			goto outbp;
		}
		c = 0; /* mod nnn r/m なし */
		prefix_def = status->bits; /* デフォルト状態 */

		LOG_DEBUG("itp-param: start\n");
		if ((itp = decode->instr) != 0) {
		     // FIXME: もう少し簡潔に書けるはず
			switch (itp->param[0]) {

			case NO_PARAM:
				/* プリフィックス */
				LOG_DEBUG("itp-param: NO_PARAM\n");
				j = itp->param[1];
				if (j & OPE16)
					decode->prefix |= 0x10000000; /* O16(暗黙) */
				if (j & OPE32)
					decode->prefix |= 0x20000000; /* O32(暗黙) */
				if (j & DEF_DS)
					prefix_def |= 0x01; /* DS */
				for (i = 0; i < (j & 0x0f); i++) {
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = itp->param[2 + i];
					bp += 2;
				}
			//	c = 0; /* mod nnn r/m なし */
				break;

			case OPE_M:
				LOG_DEBUG("itp-param: OPE_M\n");
			ope_m:
				if ((i = decode->gparam[0]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4; /* データタイプエラー */
				decode->flag = 0;
				if ((i & 0x10) == 0) {
					decode->flag = 1;
					if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				decode->gp_mem = i;
				decode->gp_reg = itp->param[1] << (9 - 4);
				i &= 0x0f;
				goto ope_mr_check0;

			case OPE_MR:
				LOG_DEBUG("itp-param: OPE_MR\n");
				if ((j = decode->gparam[0]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4;
				decode->flag = 0;
				if ((j & 0x10) == 0) {
					decode->flag = 1;
					if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				if (decode->gparam[1] & 0x1f0) /* regではない || rangeがついたらエラー || use $もエラー */
					goto err4;
				if (decode->gvalue[1] >= 24) /* regだがreg8/reg16/reg32ではない */
					goto err4;
				decode->gp_reg = decode->gparam[1];
				if ((j & 0x0f) == 0x0f && (itp->param[1] & 0x80) != 0) {
					/* memのデータサイズが不定 && 第二オペランドにsame0指定あり */
					j = (j & ~0x0f) | (decode->gparam[1] & 0x0f);
				}
				decode->gp_mem = decode->gparam[0] = j;
				goto ope_mr2;

			case OPE_RM:
				LOG_DEBUG("itp-param: NO_RM\n");
				if (decode->gparam[0] & 0x1f0) /* regではない || rangeがついたらエラー || use $もエラー */
					goto err4;
				if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
					goto err4;
				decode->gp_reg = decode->gparam[0];
				if ((j = decode->gparam[1]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4;
				decode->flag = 0;
				if ((j & 0x10) == 0) {
					decode->flag = 1;
					if (decode->gvalue[1] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				if ((j & 0x0f) == 0x0f && (itp->param[1] & 0x80) != 0) {
					/* memのデータサイズが不定 && 第二オペランドにsame0指定あり */
					j = (j & ~0x0f) | (decode->gparam[0] & 0x0f);
				}
				decode->gp_mem = decode->gparam[1] = j;

		ope_mr2:
				/* オペランドサイズチェック */
				k = itp->param[1] >> 4;
				i = decode->gparam[0] & 0x0f;
				j = decode->gparam[1] & 0x0f;
				if (k == 0)
					goto ope_mr_check0;
				if (k & 8) {
					if (i == j)
						goto ope_mr_check0;
				}
				if (j > 4) {
			err3:
					decode->error = 3; /* data size error */
					goto err;
				}
			//	if (j == 3)
			//		goto err3;
				if ((k & j) == 0)
					goto err3;

		ope_mr_check0:
				k = itp->param[1] & 0x0f;
				if (k == 0)
					goto ope_mr_mem;
				if (k & 8) {
					if (i == 0xf)
						goto ope_mr_mem;
				}
				if (i > 4)
					goto err3;
			//	if (i == 3)
			//		goto err3;
				if ((k & i) == 0)
					goto err3;
		ope_mr_mem:
				j = decode->flag & 1;
				if (itp->param[2] & 0x40) { /* no-reg */
					if (j != 0) {
			err4:
						decode->error = 4; /* data type error */
						goto err;
					}
				}
				if (itp->param[2] & (UCHAR) 0x80) { /* no-mem */
					if (j == 0)
						goto err4;
				}
			//	if (j == 0) {
			//		tmret = testmem0(status, decode->gp_mem, &decode->prefix);
			//		if (tmret == 0)
			//			goto err5; /* addressing error */
			//		prefix_def |= tmret & 0x03;
			//	}
				j = itp->param[2] & 0x07;
				for (i = 0; i < j; i++) {
					LOG_DEBUG("bp->byte[0]: 0x%02x, bp->byte[1]: 0x%02x\n",
						  SHORT_DB1, itp->param[3 + i]);
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = itp->param[3 + i];
					bp += 2;
				}
				if ((itp->param[2] & 0x30) != 0x20) {
					/* データサイズを確定 */
					i = decode->gparam[0];
					if (itp->param[2] & 0x08)
						i = decode->gparam[1];
					i &= 0x0f;
					if ((itp->param[2] & 0x20) == 0) {
						decode->prefix |= (tbl_o16o32 - 1)[i];
					//	if (i == 2)
					//		decode->prefix |= 0x10000000; /* O16(暗黙) */
					//	if (i == 4)
					//		decode->prefix |= 0x20000000; /* O32(暗黙) */
					}
					if (itp->param[2] & 0x10) {
						if (i != 1)
							bp->byte[-1] |= 0x01;
					}
				}
				if (status->optimize >= 1) {
					if (itp->param[3] == 0x8d) /* LEA */
						decode->prefix &= ~0x07e0; /* bit5-10 */
				}
				bp->byte[0] = 0x78; /* mod nnn r/m */
				bp->byte[1] = 0x79; /* sib */
				bp->byte[2] = 0x7a; /* disp */
				bp += 3;
	setc:
				c = 3 ^ decode->flag; /* mod nnn r/m あり */
				break;

			case OPE_SHIFT: /* mem/reg, imm8|CL */
				if ((j = decode->gparam[0]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4;
				decode->gp_mem = j;
				decode->gp_reg = itp->param[1] << 9; /* TTT */
				decode->flag = 0; /* mem */
				if ((j & 0x10) == 0) {
					/* reg */
					decode->flag = 1;
					if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				/* データサイズを確定 */
				i = decode->gparam[0] & 0x0f;
				if (i == 0)
					goto err3;
				if (i > 4)
					goto err3;
				decode->prefix |= (tbl_o16o32 - 1)[i];
			//	if (i == 2)
			//		decode->prefix |= 0x10000000; /* O16(暗黙) */
			//	if (i == 4)
			//		decode->prefix |= 0x20000000; /* O32(暗黙) */
				j = 0;
				if (i != 1)
					j++; /* j = 1; */
				if (decode->gparam[1] == 0x2201) { /* CL */
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = 0xd2 | j;
					bp->byte[2] = 0x78; /* mod nnn r/m */
					bp->byte[3] = 0x79; /* sib */
					bp->byte[4] = 0x7a; /* disp */
				} else {
					static int mcode[] = {
						0x0154, SHORT_DB1, 0xc0, 0x98, 0, /* default */
						0x01,   SHORT_DB1, 0xd0, SHORT_DB0, 0 /* if == 1 */
					};
					mcode[2] = 0xc0 | j;
					mcode[7] = 0xd0 | j;
					if ((decode->gparam[1] & 0xf0) != 0x20) /* immではない || rangeがついていた */
						goto err4; /* data type error */
					if ((decode->gparam[1] & 0x0f) == 0x0f) {
						if (microcode94(ifdef, status->expression, mcode))
							goto err2;
					} else if ((decode->gparam[1] & 0x0f) == 0x01) {
						defnumconst(ifdef, 0xc0 | j, 0x74, 0x01 /* UCHAR, const */);
						if (defnumexpr(ifdef, status->expression, 0x75 & 0x07, 0x98 & 0x07))
							goto err2;
					} else
						goto err3; /* WORDやDWORDが指定された */
					bp->byte[0] = 0x7c; /* 1100000w || 1101000w */
					bp->byte[1] = 0x78; /* mod nnn r/m */
					bp->byte[2] = 0x79; /* sib */
					bp->byte[3] = 0x7a; /* disp */
					bp++;
					//bp->byte[4] = 0x7d; /* imm8 || none */
					bp->byte[0] = 0x7d; /* imm8 || none */
				}
				bp += 5;
			//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
			//	break;
				goto setc;

			case OPE_RET: /* RET, RETF, RETN */
				LOG_DEBUG("itp-param: OPE_RET\n");
				bp->byte[0] = SHORT_DB1; /* 0x31 */
			//	c = 0; /* mod nnn r/m なし */
				if (decode->flag == 0) {
					/* オペランドなし */
				//	bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = itp->param[1] | 0x01;
					bp += 2;
					break;
				}
				if (decode->flag > 1)
					goto err2; /* パラメータエラー */
				if ((decode->gparam[0] & 0xf0) != 0x20)
					goto err2; /* immではない || rangeがついていた */
				if ((decode->gparam[0] & 0x0f) == 2)
					goto OPE_RET_notopt; /* WORD指定あり */
				if ((decode->gparam[0] & 0x0f) != 0x0f)
					goto err3; /* BYTEやDWORDが指定された */
				if (status->optimize == 0) {
					/* 最適化しない */
		OPE_RET_notopt:
					if (defnumexpr(ifdef, status->expression, 0x75 & 0x07, 0x9a & 0x07))
						goto err2;
				//	bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = itp->param[1];
					bp += 2;
				} else {
					static int mcode[] = {
						0x0154, SHORT_DB1, 0, 0x9a, 0, /* default */
						0x00,   SHORT_DB1, 0, SHORT_DB0, 0 /* if == 0 */
					};
					mcode[2] = itp->param[1];
					mcode[7] = itp->param[1] | 0x01;
					/* 最適化する */
					if (microcode94(ifdef, status->expression, mcode))
						goto err2;
					(*bp++).integer = 0x7c; /* 自動選択されたオペコード */
				}
				(*bp++).integer = 0x7d; /* imm16 || none */
				break;

			case OPE_AAMD: /* AAM, AAD */
				LOG_DEBUG("itp-param: OPE_AAMD\n");
				if (decode->flag == 0) {
					defnumconst(ifdef, itp->param[2], 0x74, 0x01 /* UCHAR, const */);
				} else if (decode->flag == 1) {
					if ((decode->gparam[0] & 0xf0) != 0x20)
						goto err2; /* immではない || rangeがついていた */
					if ((decode->gparam[0] & 0x0f) != 0x01 && (decode->gparam[0] & 0x0f) != 0x0f)
						goto err3; /* WORDやDWORDがついていた */
					if (defnumexpr(ifdef, status->expression, 0x74 & 0x07, 0x98 & 0x07))
						goto err2;
				} else
					goto err2; /* パラメータエラー */
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = itp->param[1];
				bp->byte[2] = 0x7c; /* オペランド(デフォルト:itp->param[2]) */
				bp += 3;
			//	c = 0; /* mod nnn r/m なし */
				break;

			case OPE_INT: /* INT */
				LOG_DEBUG("itp-param: OPE_INT\n");
				if ((decode->gparam[0] & 0xf0) != 0x20)
					goto err2; /* immではない || rangeがついていた */
				if ((decode->gparam[0] & 0x0f) == 1)
					goto OPE_INT_notopt; /* BYTE指定あり */
				if ((decode->gparam[0] & 0x0f) != 0x0f)
					goto err3; /* WORDやDWORDがついていた */
				if (status->optimize == 0) {
		OPE_INT_notopt:
					/* 最適化しない */
					if (defnumexpr(ifdef, status->expression, 0x75 & 0x07, 0x98 & 0x07))
						goto err2;
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = 0xcd;
					bp += 2;
				} else {
					static int mcode[] = {
						0x0154, SHORT_DB1, 0xcd, 0x98, 0, /* default */
						0x03,   SHORT_DB1, 0xcc, SHORT_DB0, 0 /* if == 3 */
					};
					/* 最適化する */
					if (microcode94(ifdef, status->expression, mcode))
						goto err2;
					(*bp++).integer = 0x7c; /* 自動選択されたオペコード */
				}
				(*bp++).integer = 0x7d; /* imm8 || none */
			//	c = 0; /* mod nnn r/m なし */
				break;

			case OPE_PUSH: /* PUSH, POP, INC, DEC */
				LOG_DEBUG("itp-param: OPE_PUSH\n");
				if (decode->gparam[0] & 0xc0)
					goto err2; /* rangeがついていた */
			//	c = 0; /* mod nnn r/m なし */
				decode->gp_mem = decode->gparam[0];
				decode->gp_reg = (itp->param[1] & 0x07) << 9;
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				switch (decode->gparam[0] & 0x30) {
				case 0x00: /* reg */
					if (decode->gvalue[0] < 16) {
						/* reg16/reg32 */
						decode->prefix |= (tbl_o16o32 - 1)[decode->gparam[0] & 0x0f];
					//	i = 0x10000000; /* O16(暗黙) */
					//	if (decode->gvalue[0] < 8) {
					//	//	i = 0x20000000; /* O32(暗黙) */
					//		i <<= 1;
					//	}
					//	decode->prefix |= i;
						bp->byte[1] = itp->param[2] | (decode->gvalue[0] & 0x07);
						bp += 2;
						goto outbp;
					}
					if (decode->gvalue[0] < 24) {
						/* reg8 */
						if (itp->param[1] & 0x08)
							goto err3; /* PUSH, POP */
						bp->byte[1] = itp->param[3];
						c = 2; /* mod nnn r/m あり */
			ope_push_mem:
						bp->byte[2] = 0x78;
						bp->byte[3] = 0x79;
						bp->byte[4] = 0x7a;
						bp += 5;
						goto outbp;
					}
					if ((itp->param[1] & 0x08) == 0)
						goto err2; /* INC, DEC */
					if (decode->gvalue[0] < 28) {
						/* ES, CS, SS, DS */
						/* NASKは"POP CS"をエラーにしない(8086のため) */
						bp->byte[1] = itp->param[4] | (decode->gvalue[0] & 0x03) << 3;
						bp += 2;
						goto outbp;
					}
					if (decode->gvalue[0] < 30) {
						/* FS, GS */
						bp->byte[1] = 0x0f;
						bp->byte[2] = SHORT_DB1; /* 0x31 */
						bp->byte[3] = itp->param[5] | (decode->gvalue[0] & 0x03) << 3;
						bp += 4;
						goto outbp;
					}
					goto err2;
				case 0x10: /* mem */
				//	tmret = testmem0(status, decode->gp_mem, &decode->prefix);
				//	if (tmret == 0)
				//		goto err5; /* addressing error */
				//	prefix_def |= tmret & 0x03;
					c = decode->gparam[0] & 0x0f;
					bp->byte[1] = 0;
					if (itp->param[1] & 0x08) {
						/* PUSH, POP */
						if (c == 0x01)
							goto err3;
						if (c == 0x0f)
							c = 1;
					} else {
						/* INC, DEC */
						if (c == 0x0f)
							goto err3;
						if (c != 1)
							bp->byte[1] = 1;
					}
					bp->byte[1] |= itp->param[3];
					decode->prefix |= (tbl_o16o32 - 1)[c];
					c = 3; /* mod nnn r/m あり */
					goto ope_push_mem;
				case 0x20: /* imm */
					if ((itp->param[1] & 0x10) == 0)
						goto err2;
					/* PUSH */
					{
						static int mcode[] = {
							0x54,	0x01 /* UCHAR, const */, 0x68 /* 16bit/32bit */,
									0x01 /* UCHAR, const */, 0x6a /* 8bit */
						};
						c = decode->gparam[0] & 0x0f;
						mcode[0] = 0x54; /* word/byte mode */
						if (c <= 4)
							decode->prefix |= (tbl_o16o32 - 1)[c];
						if (c == 4 || c == 0x0f && (prefix_def & 32) != 0)
							mcode[0] = 0x54 | 8 /* D-bit */;
						if ((decode->error = microcode90(ifdef, status->expression, mcode, c)) != 0)
							goto err;
						bp->byte[0] = 0x7d;
						bp->byte[1] = 0x7c;
						bp += 2;
						c = 0; /* mod nnn r/m なし */
						goto outbp;
					}
				}
				goto err2;

			case OPE_MOV: /* MOV */
				LOG_DEBUG("itp-param: OPE_MOV\n");
				if (decode->gparam[0] & 0xc0)
					goto err4; /* rangeがついている, data type error */
				if (decode->gparam[1] & 0xc0)
					goto err4; /* rangeがついている, data type error */
				if ((decode->gparam[1] & 0x30) == 0x20) {
					/* imm */
					static char typecode[4] = { 0x9e & 0x07, 0x9b & 0x07, 0, 0x9d & 0x07 };
					c = decode->gparam[0] & decode->gparam[1] & 0x0f;
					if (c == 0)
						goto err3;
					if (c == 0x0f)
						goto err3;
					decode->prefix |= (tbl_o16o32 - 1)[c];
					if (defnumexpr(ifdef, status->expression, 0x74 & 0x07, typecode[c - 1]))
						goto err2; /* parameter error */
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					if ((j = decode->gparam[0] & 0x30) == 0x00) {
						if (decode->gvalue[0] >= 24)
							goto err4; /* data type error */
						bp->byte[1] = 0xb0 | (decode->gvalue[0] & 0x07);
						bp->byte[2] = 0x7c; /* imm */
						if (c != 1)
							bp->byte[1] |= 0x08;
						bp += 3;
						c = 0; /* mod nnn r/m なし */
						goto outbp;
					}
					if (j != 0x10)
						goto err2;
					/* mem,imm */
					decode->gp_mem = decode->gparam[0];
				//	tmret = testmem0(status, decode->gp_mem = decode->gparam[0], &decode->prefix);
				//	if (tmret == 0)
				//		goto err5; /* addressing error */
				//	prefix_def |= tmret & 0x03;
				//	decode->flag = 0;
					bp->byte[1] = 0xc6;
					decode->gp_reg = 0x00 << 9;
					bp->byte[2] = 0x78;
					bp->byte[3] = 0x79;
					bp->byte[4] = 0x7a;
					bp->byte[5] = 0x7c; /* imm */
					if (c != 1)
						bp->byte[1] |= 0x01;
					bp += 6;
					c = 3; /* mod nnn r/m あり */
					goto outbp;
				}
				i = 0; /* direction-bit */
				if ((decode->gparam[1] & 0x30) == 0x10)
					goto mov_swap; /* memory */
				if ((decode->gparam[0] & 0x30) == 0x00 && decode->gvalue[0] >= 24) {
		mov_swap:
					i++;
				}
				tmret = 0;
				decode->flag = 1;
				if (((decode->gp_mem = decode->gparam[i]) & 0x30) == 0x10) {
					/* memory */
	     				tmret = testmem0(status.get(), decode->gp_mem, &decode->prefix);
					if (tmret == 0)
						goto err5; /* addressing error */
				//	prefix_def |= tmret & 0x03;
					decode->flag = 0;
				} else if ((decode->gp_mem & 0x30) != 0x00)
					goto err4; /* immが来てはいけない */
				else if ((decode->gp_mem >> 9) >= 24)
					goto err4; /* reg8/reg16/reg32以外が来てはいけない */
				j = decode->gp_reg = decode->gparam[i ^ 1];
				c = decode->gp_mem & 0x0f;
				if ((j & 0x30) != 0x00)
					goto err4; /* regではない, data type error */
				if (24 <= (j >> 9) && (j >> 9) < 30 && decode->flag != 0) {
					if (c == 1)
						goto err3; /* data size error */
				} else if (c != 0x0f && (j & 0x0f) != c)
					goto err3; /* data size error */
				decode->gparam[i] = (decode->gparam[i] & ~0x0f) | (j & 0x0f);
				if (j == 0x0004 /* EAX */ || j == 0x1002 /* AX */ || j == 0x2001 /* AL */) {
					if (tmret & 0x08) { /* disp-only */
						decode->prefix |= (tbl_o16o32 - 1)[j & 0x0f];
						c = 0xa0 | (i ^ 1) << 1;
						if (j != 0x2001 /* AL */)
							c |= 0x01;
						bp->byte[0] = SHORT_DB1; /* 0x31 */
						bp->byte[1] = c;
						bp->byte[2] = 0x7a; /* disp */
						bp += 3;
					//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
					//	goto outbp;
						goto setc;
					}
				}
				if ((j = decode->gp_reg >> 9) < 24) { /* mem/reg,reg */
					itp->param[2] = 0x11; /* w0 */
					itp->param[3] = 0x88 | i << 1;
					goto ope_mr_mem;
				}
				if (j < 30) { /* mem/reg,sreg */
					if (i == 0 && decode->flag != 0) {
						/* (i == 0)かつregなら、O16/O32あり */
						decode->prefix |= (tbl_o16o32 - 1)[c];
					}
					itp->param[2] = 0x21; /* no-w no-o16/o32 */
					itp->param[3] = 0x8c | i << 1;
					goto ope_mr_mem;
				}
				if (j < 40)
					goto err2; /* そんなレジスタは知らないので、パラメータエラー */
				if (j < 64) {
					c = (j - 40) >> 3;
					if (c == 2)
						c = 4;
					c |= 0x20; /* 20, 21, 24 */
					itp->param[2] = 0xa2; /* reg-only no-w no-o16/o32 no-mem */
					itp->param[3] = 0x0f;
					itp->param[4] = c | i << 1;
					goto ope_mr_mem;
				}
	err2:
				decode->error = 2; /* パラメータエラー */
				goto err;

			case OPE_ADD: /* ADD */
				LOG_DEBUG("itp-param: OPE_ADD\n");
				itp->param[3] &= 0x38;
				if (decode->gparam[0] & 0xc0)
					goto err4; /* rangeがついている, data type error */
				if (decode->gparam[1] & 0xc0)
					goto err4; /* rangeがついている, data type error */
				if ((decode->gparam[1] & 0x30) == 0x20) {
					/* imm */
					if ((c = decode->gparam[0] & 0x0f) == 0x0f)
						goto err3; /* data size error */
					if (c > 4)
						goto err3; /* data size error */
					if ((decode->gparam[1] & 0x0f) != 0x0f) {
						if (c < (decode->gparam[1] & 0x0f))
							goto err3; /* data size error */
					}
					decode->prefix |= (tbl_o16o32 - 1)[c];
					if ((j = decode->gparam[0]) & 0x20) /* regでもmemでもないならエラー */
						goto err4;
					decode->flag = 0;
					if ((j & 0x10) == 0) {
						decode->flag = 1;
						if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
							goto err4;
						if ((decode->gvalue[0] & 0x07) == 0) {
							/* EAX, AX, AL */
							static int mcode[] = {
								0x5c,	0x01 /* UCHAR, const */, 0x05, 0x00 /* null */,         0x00 /* 32bit */,
										0x01 /* UCHAR, const */, 0x83, 0x01 /* UCHAR, const */, 0xc0 /* 8bit */
							};
							if (c <= 2) {
								/* AL, AXなので話は簡単 */
								bp->byte[0] = SHORT_DB1;
								bp->byte[1] = itp->param[3] | 0x04;
								if (c == 2)
									bp->byte[1] |= 0x01;
								bp->byte[2] = 0x7c;
								bp += 3;
							//	c == 1 >> 9e(6);
							//	c == 2 >> 9b(3);
							//	9 - c * 3
								if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 9 - c * 3))
									goto err2; /* パラメータエラー */
								c = 0; /* mod nnn r/m なし */
								goto outbp;
							}
							/* EAX */
							mcode[2] = itp->param[3] | 0x05;
							mcode[8] = itp->param[3] | 0xc0;

							bp->byte[0] = 0x7d;
							bp->byte[1] = 0x7e;
							bp->byte[2] = 0x7c; /* imm */
							bp += 3;

							if (microcode91(ifdef, status->expression, mcode, decode->gparam[1] & 0x0f))
								goto err2; /* パラメータエラー */
							c = 0; /* mod nnn r/m なし */
							goto outbp;
						}
					}
					decode->gp_mem = decode->gparam[0];
					decode->gp_reg = itp->param[3] << (9 - 3);
					if (c == 1) {
						/* 1バイトなので話は簡単 */
						bp->byte[0] = SHORT_DB1;
						bp->byte[1] = 0x80;
						bp += 2;
						if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x9e & 0x07))
							goto err2; /* パラメータエラー */
					} else {
						static int mcode[] = {
							0x54,	0x01 /* UCHAR, const */, 0x81 /* 16bit/32bit */,
									0x01 /* UCHAR, const */, 0x83 /* 8bit */
						};
						mcode[0] = 0x54; /* 16bit */
						if (c == 4)
							mcode[0] = 0x5c; /* 32bit */
						(*bp++).integer = 0x7d;
						if (microcode90(ifdef, status->expression, mcode, decode->gparam[1] & 0x0f))
							goto err2; /* パラメータエラー */
					}
					bp->byte[0] = 0x78;
					bp->byte[1] = 0x79;
					bp->byte[2] = 0x7a;
					bp->byte[3] = 0x7c;
					bp += 4;
				//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
				//	goto outbp;
					goto setc;
				}
				i = 0; /* direction-bit */
				if ((decode->gparam[1] & 0x30) == 0x10)
					i++;
				if ((j = decode->gparam[i]) & 0x20) /* regでもmemでもないならエラー */
					goto err4;
				decode->flag = 0;
				if ((j & 0x10) == 0) {
					decode->flag = 1;
					if (decode->gvalue[i] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				if (decode->gparam[i ^ 1] & 0x30) /* regではないならエラー */
					goto err4;
				if (decode->gvalue[i ^ 1] >= 24) /* regだがreg8/reg16/reg32ではない */
					goto err4;
				decode->gp_reg = decode->gparam[i ^ 1];
				if ((j & 0x0f) == 0x0f /* && (itp->param[1] & 0x80) != 0 */ ) {
					/* memのデータサイズが不定 && 第二オペランドにsame0指定あり */
					j = (j & ~0x0f) | (decode->gp_reg & 0x0f);
				}
				decode->gp_mem = decode->gparam[i] = j;
				itp->param[3] = (itp->param[3] & ~0x02) | i << 1;
				goto ope_mr2;

			case OPE_XCHG: /* XCHG */
				LOG_DEBUG("itp-param: OPE_XCHG\n");
				/* メモリを第1オペランドへ。EAXを第2オペランドへ */
				/* そして、reg16/reg32, eAXなら特別形式 */
				/* それ以外はMR型 */
				i = 0;
				if ((decode->gparam[1] & 0x30) == 0x10)
					goto xchg_swap; /* memory */
				if (decode->gparam[0] == 0x0004 /* EAX */ || decode->gparam[0] == 0x1002 /* AX */) {
		xchg_swap:
					i++;
				}
				if ((j = decode->gparam[i]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4;
				decode->flag = 0;
				if ((j & 0x10) == 0) {
					decode->flag = 1;
					if (decode->gvalue[i] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				if (decode->gparam[i ^ 1] & 0x1f0) /* regではない || rangeがついたらエラー || use $もエラー */
					goto err4;
				if (decode->gvalue[i ^ 1] >= 24) /* regだがreg8/reg16/reg32ではない */
					goto err4;
				decode->gp_reg = decode->gparam[i ^ 1];
				if ((j & 0x0f) == 0x0f /* && (itp->param[1] & 0x80) != 0 */) {
					/* memのデータサイズが不定 && 第二オペランドにsame0指定あり */
					j = (j & ~0x0f) | (decode->gp_reg & 0x0f);
				}
				decode->gp_mem = decode->gparam[i] = j;
				if ((decode->gp_reg & 0x0f) != (decode->gp_mem & 0x0f))
					goto err3; /* data size error */
				if (decode->gp_reg == 0x0004 /* EAX */ ||  decode->gp_reg == 0x1002 /* AX */) {
					if (decode->flag) {
						bp->byte[0] = SHORT_DB1; /* 0x31 */
						bp->byte[1] = 0x90 | ((decode->gp_mem >> 9) & 0x07);
						bp += 2;
						decode->prefix |= (tbl_o16o32 - 1)[decode->gp_reg & 0x0f];
					//	c = 0; /* mod nnn r/m なし */
						goto outbp;
					}
				}
				goto ope_mr2;

			case OPE_INOUT: /* IN, OUT */
				LOG_DEBUG("itp-param: OPE_INOUT\n");
				j = 0;
				if ((c = itp->param[1]) == 0xe6 /* OUT */)
					j++; /* j = 1; */
				i = 0x10000000; /* O16(暗黙) */
				if (decode->gparam[j] == 0x0004 || decode->gparam[j] == 0x1002) {
					/* EAX か AX */
					decode->prefix |= (tbl_o16o32 - 1)[decode->gparam[j] & 0x0f];
					c++;
				} else if (decode->gparam[j] != 0x2001)
					goto err2; /* パラメータエラー */
				j = getparam0(decode->prm_p[j ^ 0x01], status.get());
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				if (j == 0x1402) { /* DX */
					bp->byte[1] = c | 0x08;
					bp += 2;
				} else {
					bp->byte[1] = c;
					bp->byte[2] = 0x7c;
					bp += 3;
					c = j & 0x0f;
					if (c != 0xf && c != 0x01)
						goto err3; /* data size error */
					if (j & 0xc0)
						goto err2; /* パラメータエラー(range検出) */
					if ((j & 0x30) != 0x20)
						goto err2; /* パラメータエラー(reg/mem検出) */
					if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x98 & 0x07))
						goto err2; /* パラメータエラー */
				}
				c = 0; /* mod nnn r/m なし */
				goto outbp;

			case OPE_IMUL:
				LOG_DEBUG("itp-param: OPE_IMUL\n");
				/* mem/reg			1111011w   mod-101-r/m */
				/* reg,mem/reg		00001111   10101111   mod-reg-r/m */
				/* reg,mem/reg,imm	011010s1   mod-reg-r/m   imm */
				/* reg,imm >> reg,reg,immに読み替え */
				if (decode->flag == 0)
					goto err2; /* parameter error */
				if (decode->flag > 3)
					goto err2; /* parameter error */
				if (decode->flag == 1)
					goto ope_m;
				if (decode->gparam[0] & 0xf1) /* 偶数サイズのregのみ */
					goto err4; /* data type error */
				if (decode->gvalue[0] >= 24)
					goto err4; /* data type error */
				decode->gp_reg = decode->gparam[0];
				if (decode->flag == 2) {
					if ((decode->gparam[1] & 0x20) == 0) {
						/* mem/reg */
						bp->byte[0] = SHORT_DB1; /* 0x31 */
						bp->byte[1] = 0x0f;
						bp->byte[2] = SHORT_DB1; /* 0x31 */
						bp->byte[3] = 0xaf;
						bp->byte[4] = 0x78; /* mod nnn r/m */
						bp->byte[5] = 0x79; /* sib */
						bp->byte[6] = 0x7a; /* disp */
						bp += 7;
		imul2:
						if (decode->gparam[1] & 0xe0) /* rangeがついていた || imm */
							goto err4; /* data type error */
						decode->gp_mem = decode->gparam[1];
						decode->flag = 0; /* mem */
						if ((decode->gp_mem & 0x10) == 0) {
							/* reg */
							decode->flag = 1;
							if (decode->gvalue[1] >= 24) /* regだがreg8/reg16/reg32ではない */
								goto err4;
						}
						if ((j = decode->gp_mem & decode->gp_reg & 0x0f) == 0)
							goto err3; /* data size error */
						decode->prefix |= (tbl_o16o32 - 1)[j];
					//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
					//	goto outbp;
						goto setc;
					}
					/* imm */
					decode->gparam[2] = decode->gparam[1];
					decode->gparam[1] = decode->gparam[0];
					decode->gvalue[1] = decode->gvalue[0];
				//	decode->flag = 3;
				}
				{
					/* reg,mem/reg,imm型 */
					static int mcode[] = {
						0x54,	0x01 /* UCHAR, const */, 0x69 /* 16bit/32bit */,
								0x01 /* UCHAR, const */, 0x6b /* 8bit */
					};
					if ((decode->gparam[2] & 0xf0) != 0x20) /* not imm */
						goto err4; /* data type error */
					mcode[0] &= 0x54;
					if (decode->gp_reg & 4)
						mcode[0] |= 0x5c;
					if (microcode90(ifdef, status->expression, mcode, decode->gparam[2] & 0x0f))
						goto err2; /* パラメータエラー */
					bp->byte[0] = 0x7d; /* 011010s1 */
					bp->byte[1] = 0x78; /* mod nnn r/m */
					bp->byte[2] = 0x79; /* sib */
					bp->byte[3] = 0x7a; /* disp */
					bp->byte[4] = 0x7c; /* imm */
					bp += 5;
					goto imul2;
				}

			case OPE_TEST: /* mem/reg, mem/reg|imm8 */
				decode->gp_mem = decode->gparam[0];
				decode->gp_reg = decode->gparam[1];
				if ((decode->gp_reg & 0x30) == 0x10) {
					decode->gp_mem = decode->gparam[1];
					decode->gp_reg = decode->gparam[0];
				}
				if ((j = decode->gp_mem) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4; /* data type error */
				decode->flag = 0; /* mem */
				if ((j & 0x10) == 0) {
					/* reg */
					decode->flag = 1;
					if ((j >> 9) >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				j &= 0x0f;
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				// FIXME
				//s = bp;
				if ((i = decode->gp_reg & 0xf0) == 0x00) {
					/* mem/reg,reg */
					j &= decode->gp_reg;
					if ((decode->gp_reg >> 9) >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4; /* data type error */
					bp->byte[1] = 0x84;
					bp->byte[2] = 0x78; /* mod nnn r/m */
					bp->byte[3] = 0x79; /* sib */
					bp->byte[4] = 0x7a; /* disp */
					bp += 5;
				} else {
					static UCHAR table[] = {
						0x9e /* dummy */ & 0x07, 0x9e /* byte */ & 0x07, 0x9b /* word */ & 0x07,
						0x9b /* dummy */ & 0x07, 0x9d /* dword */ & 0x07
					};
					if (i != 0x20) /* immではないか、rangeがついていた */
						goto err4; /* data type error */
					if ((decode->gp_mem & 0x0ef0) == 0) {
						/* EAX, AX, AL */
						bp->byte[1] = 0xa8;
						bp += 2;
					} else {
						if (j > 4)
							goto err3; /* data size error */
						bp->byte[1] = 0xf6;
						decode->gp_reg = 0 << 9;
						bp->byte[2] = 0x78; /* mod nnn r/m */
						bp->byte[3] = 0x79; /* sib */
						bp->byte[4] = 0x7a; /* disp */
						bp += 5;
					}
					(*bp++).integer = 0x7c;
					if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, table[j]))
						goto err2; /* パラメータエラー */
				}
				if (j == 0)
					goto err3; /* data size error */
				if (j != 1)
					s[1] |= 0x01;
				decode->prefix |= (tbl_o16o32 - 1)[j];
			//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
			//	goto outbp;
				goto setc;

			case OPE_MOVZX:
				LOG_DEBUG("itp-param: OPE_MOVZX\n");
				if (decode->gparam[0] & 0xf9) /* regでない || rangeがついたらエラー || reg8 */
					goto err4; /* data type error */
				if (decode->gvalue[0] >= 24)
					goto err4; /* data type error */
				if (decode->gparam[1] & 0xe4) /* regでもmemでもない || rangeがついたらエラー || dwordかサイズ不定 */
					goto err4; /* data type error */
				decode->flag = 0; /* mem */
				if ((decode->gparam[1] & 0x10) == 0) {
					/* reg */
					decode->flag = 1;
					if (decode->gvalue[1] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				decode->gp_reg = decode->gparam[0];
				decode->gp_mem = decode->gparam[1];
				decode->prefix |= (tbl_o16o32 - 1)[decode->gparam[0] & 0x0f];
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = 0x0f;
				bp->byte[2] = SHORT_DB1; /* 0x31 */
				bp->byte[3] = itp->param[1] ^ (decode->gparam[1] & 0x01);
				bp->byte[4] = 0x78; /* mod nnn r/m */
				bp->byte[5] = 0x79; /* sib */
				bp->byte[6] = 0x7a; /* disp */
				bp += 7;
				goto setc;

			case OPE_SHLD: /* mem/reg, reg, imm8|CL */
				LOG_DEBUG("itp-param: OPE_SHLD\n");
				if ((j = decode->gparam[0]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4; /* data type error */
				decode->gp_mem = j;
				decode->gp_reg = decode->gparam[1];
				if ((decode->gparam[1] & 0xf0) != 0x00) /* regではない || rangeがついた */
					goto err4; /* data type error */
				decode->flag = 0; /* mem */
				if ((j & 0x10) == 0) {
					/* reg */
					decode->flag = 1;
					if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				/* データサイズを確定 */
				i = decode->gparam[1] & 0x0f;
				if (i <= 1)
					goto err3; /* data size error */
				if (i > 4)
					goto err3; /* data size error */
				if ((decode->gparam[0] & i) == 0)
					goto err3; /* data size error */
				decode->prefix |= (tbl_o16o32 - 1)[i];
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = 0x0f;
				bp->byte[2] = SHORT_DB1; /* 0x31 */
				bp->byte[3] = itp->param[1];
				bp->byte[4] = 0x78; /* mod nnn r/m */
				bp->byte[5] = 0x79; /* sib */
				bp->byte[6] = 0x7a; /* disp */
				if (decode->gparam[2] == 0x2201) { /* CL */
					bp->byte[3] |= 0x01;
					bp += 7;
				} else {
					if ((decode->gparam[2] & 0xf0) != 0x20) /* immではない || rangeがついていた */
						goto err4; /* data type error */
					bp->byte[7] = 0x7c; /* imm8 */
					if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x98 & 0x07 /* UCHAR */))
						goto err2; /* パラメータエラー */
					bp += 8;
				}
			//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
			//	goto outbp;
				goto setc;

			case OPE_LOOP:
				LOG_DEBUG("itp-param: OPE_LOOP\n");
				if (itp->param[2]) {
					if (decode->flag != 1)
						goto err2; /* parameter error */
					decode->prefix |= (tbl_o16o32 - 1)[itp->param[2] >> 3];
				} else {
					if (decode->flag == 2) {
						i = decode->gparam[1];
						if (i == 0x0204 /* ECX */ || i == 0x1202 /* CX */)
							decode->prefix |= (tbl_o16o32 - 1)[i & 0x07];
						else
							goto err4; /* data type error */
					} else if (decode->flag != 1)
						goto err2;
				}
				if ((decode->gparam[0] & 0x30) != 0x20) /* immではない */
					goto err4;
				c = decode->gparam[0] & 0xc0;
				if (c == 0x40) /* NEAR */
					goto err4;
				if (c == 0x80) /* FAR */
					goto err4;
				c = decode->gparam[0] & 0x0f;
				if (c == 4)
					goto err4;
				if (c == 2)
					goto err4;
				getparam0(decode->prm_p[0], status.get());
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = itp->param[1];
				rel_expr(status->expression, &status->expr_status);
				bp->byte[2] = 0x7c;
				bp += 3;
				if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x99 & 0x07 /* SCHAR */))
					goto err2; /* パラメータエラー */
				c = 0; /* mod nnn r/m なし */
				goto outbp;

			case OPE_JCC:
				LOG_DEBUG("itp-param: OPE_JCC\n");
				if ((decode->gparam[0] & 0x30) != 0x20) /* immではない */
					goto err4;
				i = 0x7;
				c = decode->gparam[0] & 0xc0;
				if (c == 0x80) {
					/* NEAR */
					i &= 2 + 4;
				}
				if (c == 0xc0)
					goto err4; /* FAR */
				if (c == 0x40) {
					/* SHORT */
					i &= 1;
				}
				i &= decode->gparam[0];
				if (i >= 6) {
					/* DWORDかWORDか分からないとき */
					if ((prefix_def & 32) == 0)
						i &= ~4;
					if ((prefix_def & 16) == 0)
						i &= ~2;
				}
				if (i) {
					static int mcode[] = {
						0x00,	0x01 /* UCHAR, const */, 0x0f, 0x01 /* UCHAR, const */, 0x00 /* 16/32bit */,
								0x01 /* UCHAR, const */, 0x00, 0x00 /* null */,         0x00 /* 8bit */
					};
					c = 2;
					mcode[0] = 0x54; /* word/byte mode */
					if (i & 4) {
						c = 4;
						mcode[0] = 0x5c; /* dword/byte mode */
					}
					if (i == 1)
						c = 1;
					decode->prefix |= (tbl_o16o32 - 1)[c];
					c = 0x0f;
					if ((i & (i - 1)) == 0)
						c = i;
					mcode[4] = itp->param[1] | 0x80;
					mcode[6] = itp->param[1] | 0x70;
					rel_expr(status->expression, &status->expr_status);
					if ((decode->error = microcode91(ifdef, status->expression, mcode, c)) != 0)
						goto err;
					bp->byte[0] = 0x7d;
					bp->byte[1] = 0x7e;
					bp->byte[2] = 0x7c;
					bp += 3;
					c = 0; /* mod nnn r/m なし */
					goto outbp;
				}
				goto err3; /* data size error */

			case OPE_BT: /* mem/reg, imm8|reg */
				LOG_DEBUG("itp-param: OPE_BT\n");
				/* 0x0f 0xba mod-TTT-r/m imm8 */
				/* 0x0f 10-TTT-011 mod-reg-r/m */
				/* NASMやMASMではmem,immのときにアドレス調整をしないのでそれに合わせた */
				if ((j = decode->gparam[0]) & 0xe0) /* regでもmemでもない || rangeがついたらエラー */
					goto err4;
				decode->gp_mem = j;
				decode->gp_reg = decode->gparam[1];
				decode->flag = 0; /* mem */
				if ((j & 0x10) == 0) {
					/* reg */
					decode->flag = 1;
					if (decode->gvalue[0] >= 24) /* regだがreg8/reg16/reg32ではない */
						goto err4;
				}
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = 0x0f;
				bp->byte[2] = SHORT_DB1; /* 0x31 */
				bp->byte[4] = 0x78; /* mod nnn r/m */
				bp->byte[5] = 0x79; /* sib */
				bp->byte[6] = 0x7a; /* disp */
				if ((i = decode->gparam[1] & 0xf0) == 0) {
					/* reg */
					if (decode->gvalue[1] >= 24)
						goto err4; /* data type error */
					bp->byte[3] = itp->param[1] | 0x83;
					j &= decode->gparam[1];
					bp += 7;
				} else {
					/* imm8 */
					if (i != 0x20) /* immではない || rangeがついていた */
						goto err4; /* data type error */
					decode->gp_reg = itp->param[1] << (9 - 3);
					bp->byte[3] = 0xba;
					bp->byte[7] = 0x7c; /* imm8 */
					bp += 8;
					if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x98 & 0x07 /* UCHAR */))
						goto err2; /* パラメータエラー */
				}
				/* データサイズを確定 */
				j &= 0x0f;
				if (j <= 1)
					goto err3; /* data size error */
				if (j == 0x0f)
					j &= 0x01; /* その時のBITSに合わせる */
				if (j > 4)
					goto err3; /* data size error */
				decode->prefix |= (tbl_o16o32 - 1)[j];
			//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
			//	goto outbp;
				goto setc;

			case OPE_ENTER: /* imm16, imm8 */
				LOG_DEBUG("itp-param: OPE_ENTER\n");
				/* 11001000  imm16  imm8 */
				if ((decode->gparam[0] & 0xf0) != 0x20)
					goto err4; /* data type error */
				if ((decode->gparam[1] & 0xf0) != 0x20)
					goto err4; /* data type error */
				if ((decode->gparam[0] & 0x02) != 0x02)
					goto err3; /* data size error */
				if ((decode->gparam[1] & 0x01) != 0x01)
					goto err3; /* data size error */
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = 0xc8;
				bp->byte[2] = 0x7c;
				bp->byte[3] = 0x7d;
				bp += 4;
				if (defnumexpr(ifdef, status->expression, 0x7d & 0x07, 0x98 & 0x07 /* UCHAR */))
					goto err2; /* パラメータエラー */
				getparam0(decode->prm_p[0], status.get());
				if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x9a & 0x07 /* USHORT */))
					goto err2; /* パラメータエラー */
			//	c = 0; /* mod nnn r/m なし */
				goto outbp;

			case OPE_ALIGN: /* ALIGN, ALIGNB */
				LOG_DEBUG("itp-param: OPE_ALIGN\n");
				if ((decode->gparam[0] & 0x02f0) != 0x0020)
					goto err2; /* 定数式ではないならエラー */
				ifdef->vb[8] = 0x84;
				/* ALIGN x は次のように変換する。TIMES (x-(($-$$)%x))%x DB y */
				/* mod(sub(x, mod(sub($, $$), x)), x)  ->  mod sub x mod sub $ $$ x x */
				expr = status->expression;
				expr[0].term_type = 1; /* operator */
				expr[0].value = 8; /* unsigned mod */
				expr[1].term_type = 1; /* operator */
				expr[1].value = 5; /* signed/unsinged sub */
				expr[2].term_type = 0; /* constant */
				expr[2].value = decode->gvalue[0];
				expr[3].term_type = 1; /* operator */
				expr[3].value = 8; /* unsigned mod */
				expr[4].term_type = 1; /* operator */
				expr[4].value = 5; /* signed/unsinged sub */
				expr[5].term_type = 3; /* label */
				expr[5].value = status->expr_status.dollar_label0;
				expr[6].term_type = 3; /* label */
				expr[6].value = status->expr_status.dollar_label2;
				expr[7].term_type = 0; /* constant */
				expr[7].value = decode->gvalue[0];
				expr[8].term_type = 0; /* constant */
				expr[8].value = decode->gvalue[0];
				ifdef->dat[8] = libnask::put_expr(ifdef->expr[8], &expr) - ifdef->expr[8];
				bp->byte[0] = 0x59; /* TIMES microcode */
				bp->byte[1] = 0x06; /* len [正定数(4バイト)] */
				put4b(1, &bp->byte[2]); /* len = 1 */
				bp->byte[6] = SHORT_DB1; /* 0x31 */
				bp->byte[7] = itp->param[1];
				bp += 8;
				i = decode->gvalue[0];
				c = 0;
				while (i) {
					c++;
					i >>= 1;
				}
				if (section->align1 < c)
					section->align1 = c;
				c = 0;
				goto outbp;

			case OPE_FPU:
				LOG_DEBUG("itp-param: OPE_FPU\n");
				if (decode->flag == 0)
					goto err2; /* パラメータエラー */
				if (decode->flag == 1) {
					if (decode->gparam[0] & 0xe0)
						goto err4; /* data type error */
					decode->gp_mem = decode->gparam[0];
					if (decode->gparam[0] & 0x10) {
						/* メモリ */
						static unsigned char sizelist[16] = {
							0xff, 0xff, 0, 0xff, 1, 0xff, 0xff, 0xff,
							2, 0xff, 3, 0xff, 0xff, 0xff, 0xff, 0xfe
						};
					//	tmret = testmem0(status, decode->gp_mem, &decode->prefix);
					//	if (tmret == 0)
					//		goto err5; /* addressing error */
					//	prefix_def |= tmret & 0x03;
						c = sizelist[decode->gp_mem & 0x0f];
						if (c == 0xff)
							goto err3; /* data size error */
						if (c == 0xfe) {
							if ((itp->param[1] & 0x04) == 0)
								goto err3; /* data size error */
							c = itp->param[1] & 0x03;
						}
					} else {
						/* レジスタ */
						if ((i = decode->gvalue[0] & ~0x07) == 72)
							c = 4;
						else if (i == 64)
							c = 5;
						else
							goto err2; /* パラメータエラー */
					}
				}
				if (decode->flag == 2) {
					if (itp->param[1] & 0x08)
						goto err2; /* パラメータエラー */
					for (i = 0; i < 2; i++) {
						if (decode->gparam[i] & 0xf0)
							goto err4; /* data type error */
						if ((decode->gvalue[i] & ~0x07) != 72)
							goto err4; /* data type error */
					}
					if (decode->gvalue[0] == 72 /* ST0 */) {
						decode->gp_mem = decode->gparam[1];
						c = 4;
					} else if (decode->gvalue[1] == 72 /* ST0 */) {
						decode->gp_mem = decode->gparam[0];
						c = 5;
					} else
						goto err2; /* パラメータエラー */
				}
				if (decode->flag > 2)
					goto err2; /* パラメータエラー */
				decode->flag = 0;
				if (c >= 4)
					decode->flag = 1;
				if (((c = itp->param[2 + c]) & 0x80) == 0)
					goto err4; /* data type error */
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = (c & 0x07) | 0xd8;
				decode->gp_reg = (int) c << (9 - 3);
				bp->byte[2] = 0x78;
				bp->byte[3] = 0x79;
				bp->byte[4] = 0x7a;
				bp += 5;
			//	c = 3 ^ decode->flag; /* mod nnn r/m あり */
			//	goto outbp;
				goto setc;

			case OPE_FPUP:
				LOG_DEBUG("itp-param: OPE_FPUP\n");
				if (decode->flag == 2 && decode->gparam[1] == 0x900a /* ST0 */)
					decode->flag = 1;
				if (decode->flag != 1)
					goto err2; /* paramter error */
				if (decode->gparam[0] & 0xf0)
					goto err4; /* data type error */
				if ((decode->gvalue[0] & ~0x07) != 72)
					goto err4; /* data type error */
				decode->gp_mem = decode->gparam[0];
				decode->gp_reg = (int) itp->param[1] << (9 - 3);
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = (itp->param[1] & 0x07) | 0xd8;
				bp->byte[2] = 0x78;
				bp += 3;
				c = 2; /* mod nnn r/m あり(reg) */
				goto outbp;

			case OPE_FSTSW:
				LOG_DEBUG("itp-param: OPE_FSTSW\n");
				if (decode->gparam[0] != 0x1002 /* AX */)
					goto ope_m;
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = itp->param[5];
				bp->byte[2] = SHORT_DB1; /* 0x31 */
				bp->byte[3] = itp->param[6];
				bp += 4;
				if (itp->param[2] & 0x02) {
					bp->byte[0] = SHORT_DB1;
					bp->byte[1] = itp->param[7];
					bp += 2;
				}
				goto outbp;

			case OPE_ORG:
				LOG_DEBUG("itp-param: OPE_ORG\n");
				if ((decode->gparam[0] & 0xf0) != 0x20)
					goto err4; /* data type error */
				//FIXME
				//if ((dest0 = flush_bp(bp - buf, buf, dest0, dest1, ifdef)) == NULL)
				// 	goto overrun;
				if (dest0 + EXPR_MAXSIZ + 1 > dest1)
					dest0 = NULL;
				if (dest0 == NULL)
					goto overrun;
				*dest0++ = 0x58;
				if (status->expr_status.dollar_label1 /* ..$ */ == 0xffffffff)
					status->expr_status.dollar_label1 = nextlabelid++;
				status->expr_status.dollar_label2 = status->expr_status.dollar_label1;
				goto equ_put_expr;

			case OPE_FXCH:
				LOG_DEBUG("itp-param: OPE_FXCH\n");
				if (decode->flag == 0) {
					decode->gparam[0] = 0x920a /* ST1 */;
					decode->flag = 1;
				}
				if (decode->flag == 2) {
					if (decode->gparam[1] == 0x900a /* ST0 */)
						goto fxch1;
					if (decode->gparam[0] != 0x900a /* ST0 */)
						goto err2; /* パラメータエラー */
					decode->gparam[0] = decode->gparam[1];
			fxch1:
					decode->flag = 1;
				}
				if (decode->flag != 1)
					goto err2; /* パラメータエラー */
				if ((decode->gparam[0] & ~0x0e00) != 0x900a)
					goto err4; /* data type error */
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = 0xd9;
				bp->byte[2] = SHORT_DB1; /* 0x31 */
				bp->byte[3] = 0xc8 + ((decode->gparam[0] >> 9) & 0x07);
				bp += 4;
			//	c = 0; /* mod nnn r/m なし */
				goto outbp;

			case OPE_RESB:
			{
				LOG_DEBUG("itp-param: OPE_RESB\n");
				LOG_DEBUG("buffered pointer bp: %s \n", dump_ptr("bp ", bp).c_str());
				if ((decode->gparam[0] & 0xff) != 0x2f)
					goto err4; /* data type error */
				if (ifdef->vb[8]) {
					if (itp->param[1] != 1)
						goto err6; /* TIMES error */
					/* 面倒なのでその他のチェックはサボっている */
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = 0x00;
					bp += 2;
					goto outbp;
				}
				// "i"にRESBの対象となるバイト数を設定
				if ((i = itp->param[1]) > 7) {
					LOG_DEBUG("ERROR RESB: 0x%02x \n", itp->param[1]);
					goto err4; /* data type error */
				} else {
					LOG_DEBUG("RESB: 0x%02x \n", itp->param[1]);
				}

				bp->byte[0] = 0x59; /* TIMES microcode */
				bp->byte[1] = 0x06; /* len [正定数(4バイト)] */
				LOG_DEBUG("buffered pointer bp: %s \n", dump_ptr("bp ", bp).c_str());
				put4b(i, bp, 2);    /* len */
				(bp+1)->byte[2] = 0x30 | itp->param[1];
				LOG_DEBUG("buffered pointer bp: %s \n", dump_ptr("bp ", bp).c_str());

				bp += 7; // 7Byte埋めたので7Byte進める
				LOG_DEBUG("RESB: try to reserve %d byte\n", i);

				do { // "i"の数値分"0x00"で埋める
					(*bp++).integer = 0x00;
				} while (--i);
				ifdef->vb[8] = 0x84;
				expr = status->expression;
				if ((decode->gparam[0] & 0x200) == 0) {
					expr->term_type = 0; /* constant */
					expr->value = decode->gvalue[0];
				}

				// ifdef->dat[8] は flush_bp の中で評価される
				ifdef->dat[8] = libnask::put_expr(ifdef->expr[8], &expr) - ifdef->expr[8];
				goto outbp;
			}

			case OPE_EQU:
				LOG_DEBUG("itp-param: OPE_EQU\n");
				if (decode->label == NULL)
					goto err2; /* パラメータエラー */
				if ((decode->gparam[0] & 0xf0) != 0x20)
					goto err4; /* data type error */
				// FIXME
				//if ((dest0 = flush_bp(bp - buf, buf, dest0, dest1, ifdef)) == NULL)
				// 	goto overrun;
				if (dest0 + EXPR_MAXSIZ > dest1)
					dest0 = NULL;
				if (dest0 == NULL)
					goto overrun;
		equ_put_expr:
				expr = status->expression;
				if ((decode->gparam[0] & 0x200) == 0) {
					expr->term_type = 0; /* constant */
					expr->value = decode->gvalue[0];
				}
				dest0 = libnask::put_expr(dest0, &expr);
				goto skip_equ;

			case OPE_JMP:
				LOG_DEBUG("itp-param: OPE_JMP\n");
				/* JMP:  (r/m) near:FF /4, far:FF /5, (imm) near:E9, far:EA, short:EB */
				/* CALL: (r/m) near:FF /2, far:FF /3, (imm) near:E8, far:9A */
				/* itp->param[1] : r/m-near */
				/* itp->param[2] : imm-near */
				/* itp->param[3] : imm-far */
				/* itp->param[4] : imm-short */
				s = decode->param;
				if (!(s < status->src1 && *s != '\n' && *s != ';'))
					goto err2;
				j = getparam(&s, status->src1, &i, status->expression,
					status->mem_expr, &status->ofsexpr, &status->expr_status);
				c = 0;
				if (s < status->src1)
					c = *s++;
				if ((j & 0x20) == 0) {
					/* reg/mem */
					if (c != 0 && c != '\n' && c != ';')
						goto err2; /* 後続検出 */
					decode->gp_mem = j;
					decode->gp_reg = itp->param[1] << (9 - 3);
					c = j & 0x06;
					if (c == 0)
						goto err3; /* data size error */
					if (c == 6)
						c = 1;
					decode->prefix |= (tbl_o16o32 - 1)[c];
					c = j & 0xc0;
					if (c == 0x40)
						goto err4; /* data type error */
					if (c == 0xc0)
						decode->gp_reg |= 1 << 9; /* far */
					decode->flag = 0; /* mem */
					if ((j & 0x10) == 0) {
						/* reg */
						decode->flag = 1;
						if (i >= 24) /* regだがreg8/reg16/reg32ではない */
							goto err4;
					}
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = 0xff;
					bp->byte[2] = 0x78;
					bp->byte[3] = 0x79;
					bp->byte[4] = 0x7a;
					bp += 5;
					goto setc;
					/* "CALL/JMP FAR reg16/reg32"というのもできるが、動作は保証しない */
				}
				/* imm */
				if (c != ':' && c != ',') {
					if (c != 0 && c != '\n' && c != ';')
						goto err2; /* 後続検出 */
					c = j & 0xc0;
					if (c == 0xc0 /* far */)
						goto err4; /* data type error */
					if (c == 0x40)
						c = 0x01; /* short */
					else if (c == 0x80)
						c = 0x06; /* near */
					else
						c = 0x07;
					c &= j;
					if (c >= 0x06) {
						/* DWORDかWORDか分からないとき */
						if ((prefix_def & 32) == 0)
							c &= ~4;
						if ((prefix_def & 16) == 0)
							c &= ~2;
					}
					if (c == 0)
						goto err4; /* data type error */
					if (c & 0x06)
						decode->prefix |= (tbl_o16o32 - 1)[c & 0x06];
					rel_expr(status->expression, &status->expr_status);
					if (itp->param[4]) {
						/* JMP SHORT/NEAR */
						static int mcode[] = {
							0x54,	0x01 /* UCHAR, const */, 0xe9 /* 16bit/32bit */,
									0x01 /* UCHAR, const */, 0xeb /* 8bit */
						};
						mcode[0] &= 0x54;
						if (c & 4)
							mcode[0] |= 0x5c;
						if (c & (c - 1))
							c = 0x0f; /* cが2のべきでない場合 */
						if (microcode90(ifdef, status->expression, mcode, c))
							goto err2; /* パラメータエラー */
						bp->byte[0] = 0x7d; /* e9/eb */
						bp->byte[1] = 0x7c; /* imm */
						bp += 2;
						c = 0; /* mod nnn r/m なし */
						goto outbp;
					}
					/* CALL NEAR */
					if ((c &= ~1) == 0)
						goto err4; /* data type error */
					if (defnumexpr(ifdef, status->expression, 0x7c & 0x07,
						(0x99 & 0x07) + c /* non-over SHORT/INT */))
						goto err2; /* パラメータエラー */
					bp->byte[0] = SHORT_DB1; /* 0x31 */
					bp->byte[1] = 0xe8;
					bp->byte[2] = 0x7c;
					bp += 3;
					c = 0; /* mod nnn r/m なし */
					goto outbp;
				}
				/* far */
				c = j & 0xc0;
				if (c == 0x40) /* short */
					goto err4;
				if (c == 0x80) /* near */
					goto err4;
				c = j & 0x06;
				if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, 0x9b & 0x07 /* non-over SHORT */))
					goto err2; /* パラメータエラー */
			//	s = skipspace(s, status->src1);
				j = getparam(&s, status->src1, &i, status->expression,
					status->mem_expr, &status->ofsexpr, &status->expr_status);
				if ((j & 0x30) != 0x20)
					goto err4;
				if (s < status->src1 && *s != '\n' && *s != ';')
					goto err2; /* 後続あり */
				c &= j;
				if (c >= 0x06) {
					/* DWORDかWORDか分からないとき */
					if ((prefix_def & 32) == 0)
						c &= ~4;
					if ((prefix_def & 16) == 0)
						c &= ~2;
				}
				if (c == 0)
					goto err3; /* data size error */
				decode->prefix |= (tbl_o16o32 - 1)[c];
				if (defnumexpr(ifdef, status->expression, 0x7d & 0x07,
					(0x99 & 0x07) + c /* non-over SHORT/INT */))
					goto err2; /* パラメータエラー */
				bp->byte[0] = SHORT_DB1; /* 0x31 */
				bp->byte[1] = itp->param[3];
				bp->byte[2] = 0x7d;
				bp->byte[3] = 0x7c;
				bp += 4;
				c = 0; /* mod nnn r/m なし */
				goto outbp;

			case OPE_GLOBAL: /* GLOBAL, EXTERN */
				LOG_DEBUG("itp-param: OPE_GLOBAL\n");
				s = decode->param;
				if (!(s < status->src1 && *s != '\n' && *s != ';'))
					goto err2;
				dest0 = putprefix(dest0, dest1, decode->prefix, prefix_def, status->optimize);
					/* アドレス出力マークも出力 */
					/* 必要ならエラーも出力する */
				// FIXME
				//if ((dest0 = flush_bp(bp - buf, buf, dest0, dest1, ifdef)) == NULL)
				// 	goto overrun;
				for (;;) {
					/* ラベルを抽出 */
					s = skipspace(s, status->src1);
					//bp = s; FIXME
					if (s >= status->src1)
						goto err2;
					if (*s == ',')
						goto err2;
					if (*s == ';')
						goto err2;
					if (*s == '\n')
						goto err2;
					do {
						s++;
						if (s >= status->src1)
							break;
						if (*s == ',')
							break;
						if (*s == ';')
							break;
					} while (*s > ' ');
					// FIXME
					//i = s - bp;
					//j = label2id(i, bp, itp->param[1] == 2);
					/* ローカルラベルも使えるが、.から始まる名前のままGLOBALになるので注意 */
					/* もし複数回GLOBAL/EXTERNする危険性を回避したければ、フラグを作ってチェックせよ */
					if (dest0 + 15 > dest1) {
						dest0 = NULL;
						goto overrun;
					}
					dest0[0] = REM_8B; /* 0xf6 */
					dest0[1] = itp->param[1];
					dest0[2] = i & 0xff;
					dest0[3] = (i >> 8) & 0xff;
					put4b(bp->integer, &dest0[4]);
					if (itp->param[1] == 1) { /* GLOBAL */
						dest0[8] = 0x0f;
						dest0[9] = 3;
						//bp = &dest0[10]; FIXME
						put4b(j, &dest0[11]);
						bp->integer = 0x07;
						dest0 += 11;
						do {
							*bp++;
							dest0++;
						} while (j >>= 8);
					} else { /* EXTERN */
						dest0[8] = 0x2c; /* 直前のREM_8Bに対応するEXTERN情報 */
						dest0[9] = 0x02; /* 2バイトimm */
						dest0[10] = j & 0xff;
						dest0[11] = (j >> 8) & 0xff;
						if (j < nask_L_LABEL0)
							dest0 += 12;
					}
					s = skipspace(s, status->src1);
					if (s >= status->src1)
						goto skip_equ;
					if (*s != ',')
						break;
					s++;
				}
				if (*s != '\n' && *s != ';')
					goto err2;
				goto skip_equ;

			case OPE_TIMES: /* virtual byte 0x80を使う */
				LOG_DEBUG("itp-param: OPE_TIMES\n");
				if (ifdef->vb[8]) {
		err6:
					decode->error = 6; /* TIMES error */
					goto err;
				}
				s = decode->param;
				if (!(s < status->src1 && *s != '\n' && *s != ';'))
					goto err2;
				j = getparam(&s, status->src1, &i, status->expression,
					status->mem_expr, &status->ofsexpr, &status->expr_status);
			//	if (j == 0)
			//		goto err2;
				if ((j & 0xf0) != 0x20)
					goto err2;
				ifdef->vb[8] = 0x84;
				expr = status->expression;
				if ((j & 0x0200) == 0) {
					/* 定数式 */
					expr->term_type = 0; /* constant */
					expr->value = i;
				}
				ifdef->dat[8] = libnask::put_expr(ifdef->expr[8], &expr) - ifdef->expr[8];
				bp->byte[0] = 0x59; /* TIMES microcode */
				bp->byte[1] = 0x06; /* len [正定数(4バイト)] */
				put4b(1, &bp->byte[2]); /* len = 1 */
				bp += 6;
				// FIXME
				//src = decoder(status, s, decode);
				if (decode->label)
					goto err6;
				goto times_skip;

			case OPE_DB:
				LOG_DEBUG("itp-param: OPE_DB\n");
				s = decode->param;
				if (!(s < status->src1 && *s != '\n' && *s != ';'))
					goto err2;
				if (itp->param[2] == 0)
					goto err4;
				dest0 = putprefix(dest0, dest1, decode->prefix, prefix_def, status->optimize);
					/* アドレス出力マークも出力 */
					/* 必要ならエラーも出力する */
				// FIXME
				if ((dest0 = flush_bp(bp - buf.data(), buf.data(), dest0, dest1, ifdef)) == NULL)
				 	goto overrun;
				for (;;) {
					s = skipspace(s, status->src1);
					if (s < status->src1) {
						c = *s;
						LOG_DEBUG("[OPE_DB] c: 0x%02x \n", c);
						if (c != 0x22 && c != 0x27)
							goto ope_db_expr;
						bp = ucharToNask32bitIntPtr(s);
						do {
							bp++;
							if (bp >= ucharToNask32bitIntPtr(status->src1))
								goto ope_db_expr;
							if ((*bp).integer == '\n')
								goto ope_db_expr;
						} while ((*bp).integer != c);
						//bp = skipspace(bp + 1, ucharToNask32bitIntPtr(status->src1));
						if (bp < ucharToNask32bitIntPtr(status->src1)) {
							if ((*bp).integer != ',' && (*bp).integer != '\n' && (*bp).integer != ';')
								goto ope_db_expr;
						}
						/* 文字列検出 */
						s++;
						k = 0;
						for (;;) {
							if (*s == c)
								break;
							if (dest0 + 5 > dest1)
								dest0 = NULL;
							if (dest0 == NULL)
								goto overrun;
							if (k == 0) {
								*dest0++ = 0x30 | itp->param[1];
							}
							k++;
							*dest0++ = *s++;
							if (k == itp->param[1])
								k = 0;
						}
						if (k) {
							do {
								*dest0++ = 0x00;
							} while (++k < itp->param[1]);
						}
						bp = ucharToNask32bitIntPtr(s);
						goto ope_db_skip;
					}
			ope_db_expr:
					j = getparam(&s, status->src1, &i, status->expression,
						status->mem_expr, &status->ofsexpr, &status->expr_status);
					if ((j & 0xf0) != 0x20)
						goto err2;
					if (defnumexpr(ifdef, status->expression, 0x7c & 0x07, itp->param[2] & 0x07))
						goto err2; /* パラメータエラー */
					/* 直接出力 */
					k = ifdef->dat[0x7c & 0x07];
					// FIXME
					//bp = ifdef->expr[0x7c & 0x07];
					c = ifdef->vb[0x7c & 0x07];
					if ((c & 0x80) == 0 /* const */) {
						if (dest0 + c + 1 > dest1)
							dest0 = NULL;
						if (dest0 == NULL)
							goto overrun;
						*dest0++ = (c &= 0x1f) | 0x30;
						do {
							*dest0++ = k & 0xff;
							LOG_DEBUG("*dest0: 0x%02x \n", *dest0);
							k >>= 8;
						} while (--c);
					} else {
						/* expr */
						if (dest0 + k + 2 > dest1)
							dest0 = NULL;
						if (dest0 == NULL)
							goto overrun;
						dest0[0] = (c & 0x1f) + 0x37; /* 38〜3b */
						dest0[1] = (c >> 5) & 0x03;
						dest0 += 2;
						do {
							*dest0++ = (*bp++).integer;
							LOG_DEBUG("*dest0: 0x%02x \n", *dest0);
						} while (--k);
					}
			ope_db_skip:
					if (s >= status->src1)
						goto skip_equ; /* break; */
					c = *s;
					if (c == '\n')
						goto skip_equ; /* break; */
					if (c == ';')
						goto skip_equ; /* break; */
					if (c != ',')
						goto err2;
					s = skipspace(s + 1, status->src1);
				}
			//	goto skip_equ;

			case OPE_END:
				src = src1;
			//	c = 0; /* mod nnn r/m なし */
				goto outbp;

			case 0xe7: /* SECTION */
				goto flush_ifdefbuf;
			}
		}
outbp:
		LOG_DEBUG("outbp: try to output buffered pointer \n");
		if (c & 0x01) { /* mod nnn r/m あり */

		 	// FIXME
		     	//tmret = testmem0(status, decode->gp_mem, &decode->prefix);
			if (tmret == 0) {
		err5:
				decode->error = 5; /* addressing error */
				goto err;
			}
			prefix_def |= tmret & 0x03;
		}
		dest0 = putprefix(dest0, dest1, decode->prefix, prefix_def, status->optimize);
			/* アドレス出力マークも出力 */
			/* 必要ならエラーも出力する */

		// FIXME
		// if (c) { /* mod nnn r/m あり */
		// 	putmodrm(ifdef, tmret, decode->gp_mem, status, decode->gp_reg >> 9);
		// }

flush_ifdefbuf:
		/* ifdefbufを出力 */
		i = ifdef->bp - ifdef->bp0;
		if (dest0 + i > dest1)
			dest0 = NULL;
		if (dest0 == NULL)
			goto overrun;
		for (j = 0; j < i; j++)
			dest0[j] = ifdef->bp0[j];
		dest0 += i;

		if ((dest0 = flush_bp(bp - buf.data(), buf.data(), dest0, dest1, ifdef)) == NULL)
		 	goto overrun;

		if (itp != NULL && itp->param[0] == 0xe7) {
			/* section */
			if (dest0 + 14 > dest1)
				dest0 = NULL;
			if (dest0 == NULL)
				goto overrun;
			dest0[0] = REM_3B; /* 0xf1 */
			dest0[1] = 0; /* change_section */
			dest0[2] = itp->param[1];
			dest0 += 3;
			section->total_len += dest0 - section->p;
			section->dollar_label0 = status->expr_status.dollar_label0;
			section->dollar_label1 = status->expr_status.dollar_label1;
			section->dollar_label2 = status->expr_status.dollar_label2;
			section = &sectable[itp->param[1]];
			section->p = dest0;
			status->expr_status.dollar_label0 = section->dollar_label0;
			status->expr_status.dollar_label1 = section->dollar_label1;
			status->expr_status.dollar_label2 = section->dollar_label2;
			if (section->total_len == 0) {
				dest0[0] = REM_3B;
				dest0[1] = 1; /* start section */
				dest0[2] = itp->param[1];
				dest0 += 3;
				if (status->expr_status.dollar_label1 /* ..$ */ == 0xffffffff)
					status->expr_status.dollar_label1 = nextlabelid++;
				status->expr_status.dollar_label2 = status->expr_status.dollar_label1;
				if (status->format == 0) { /* BIN */
	org0:
					dest0[0] = 0x58; /* ORG */
					dest0[1] = 0; /* const 0 (ORG 0) */
					dest0[2] = 0;
					dest0 += 3;
				} else { /* WCOFF */
					c = 0;
					if (section->name[0] != '.')
						goto org0;
					if (section->name[1] == 't')
						c = 1; /* .text */
					if (section->name[1] == 'd')
						c = 2; /* .data */
					if (section->name[1] == 'b')
						c = 3; /* .bss */
					if (c == 0)
						goto org0;
					dest0[0] = 0x2c; /* define extern label */
					dest0[1] = 0x02;
					dest0[2] = c;
					dest0[3] = 0;
					dest0[4] = 0x58; /* ORG */
					dest0[5] = 0x08;
					dest0[6] = c;
					dest0 += 7;
				}
			}
		}
skip_equ:
		src0 = src;
	//	if (dest0 == NULL)
	//		goto overrun;
	}
skip_end:
	if (dest0 + (6 + 3) * MAX_SECTIONS + 9 > dest1)
		dest0 = NULL;
	if (dest0 == NULL)
		goto overrun;

	/* ラインターミネーター出力 */
	/* f7, 0, 0 */
	dest0[0] = 0xf7; /* line start */
	put4b(0, &dest0[1]);
	put4b(0, &dest0[5]);
	dest0 += 9;

//	section->dollar_label0 = status->expr_status.dollar_label0;
	section->dollar_label1 = status->expr_status.dollar_label1;
//	section->dollar_label2 = status->expr_status.dollar_label2;

	for (i = 0; i < MAX_SECTIONS; i++) {
		if (sectable[i].name[0] == '\0')
			break;
		if ((j = sectable[i].dollar_label1) != 0xffffffff) {
			if (labelflags[j] == 0) {
				dest0[0] = REM_3B; /* 0xf1 */
				dest0[1] = 0; /* change_section */
				dest0[2] = i;
				dest0 += 3;
				section->total_len += dest0 - section->p;
				section = &sectable[i];
				section->p = dest0;
				dest0[0] = 0x0e;
				labelflags[j] = 0x01;
				dest0 = putimm(j, &dest0[1]);
			}
		}
	}
	section->total_len += dest0 - section->p;

	// FIXME
	//src = malloc(i = dest0 - dest00);
	for (j = 0; j < i; j++)
		src[j] = dest00[j];
	sectable[0].p0 = sectable[0].p = dest00;
	for (j = 1; j < MAX_SECTIONS; j++)
		sectable[j].p0 = sectable[j].p = sectable[j - 1].p0 + sectable[j - 1].total_len;
	src1 = src + i;
	section = &sectable[0];
	s = section->p;
	do {
		c = *src;
		if (c == REM_3B && src[1] == 0) {
			s[0] = REM_3B;
			s[1] = 0;
			s[2] = src[2];
			s += 3;
			section->p = s;
			section = &sectable[src[2]];
			s = section->p;
			src += 3;
			continue;
		}
		// FIXME
		bp = ucharToNask32bitIntPtr(LL_skipcode(src));
		do {
			*s++ = *src++;
		} while (ucharToNask32bitIntPtr(src) < bp);
	} while (src < src1);

	for (j = 0; j < MAX_SECTIONS; j++) {
		if (sectable[j].name[0] == '\0')
			break;
		c = sectable[j].align0;
		if (c == 0xff)
			c = sectable[j].align1;
		if (dest0 + 8 > dest1) {
			goto overrun;
		}
		dest0[0] = REM_4B;
		dest0[1] = 0; /* set section align */
		dest0[2] = j; /* section */
		dest0[3] = c;
		c = 0;
		if (sectable[j].name[0] == '.') {
			if (sectable[j].name[1] == 't')
				c = 1; /* .text */
			if (sectable[j].name[1] == 'd')
				c = 2; /* .data */
			if (sectable[j].name[1] == 'b')
				c = 3; /* .bss */
			if (sectable[j].name[1] == 'a')
				c = 0x70; /* .absolute */
		}
		dest0[4] = REM_4B;
		dest0[5] = 1; /* set section flags */
		dest0[6] = j; /* section */
		dest0[7] = c;
		dest0 += 8;
	}
	if (dest0 + 11 > dest1) {
		goto overrun;
	}
	if (status->file_len > 18 * 255 - 1)
		status->file_len = 18 * 255 - 1;
	dest0[0] = REM_3B;
	dest0[1] = 2; /* set format */
	dest0[2] = status->format;
	dest0[3] = REM_8B;
	dest0[4] = 0; /* file */
	dest0[5] = status->file_len;
	dest0[6] = 0;
	//put4b((int) status->file_p, &dest0[7]); FIXME
	dest0 += 11;

overrun:

	LOG_DEBUG("dest0: %s\n", *dest0);
	return dest0;
}

UCHAR *flush_bp(int len, nask32bitInt* buf, UCHAR* dest0, UCHAR *dest1, std::unique_ptr<STR_IFDEFBUF>& ifdef)
{
     int j, k, l;
     UCHAR *s, c;
     if (dest0 + len > dest1)
	  dest0 = NULL;
     if (dest0 == NULL)
	  goto fin;
     for (j = 0; j < len; ) {
	  for (l = 0; l < 4; l++) { // buf内部のUCHARを探索
	       c = buf[j++].byte[l];
	       if (c == 0x2d || c == 0x0e) {
		    /* label define */
		    LOG_DEBUG("label define \n");
		    dest0[0] = c;
		    dest0[1] = c = buf[j].integer;
		    dest0[2] = buf[j + 1].integer;
		    j += 2;
		    dest0 += 3;
		    while (c) {
			 c -= 2;
			 *dest0++ = buf[j++].integer;
		    }
		    continue;
	       }
	       if (0x31 <= c && c <= 0x37) {
		    LOG_DEBUG("0x31 <= c && c <= 0x37 \n");
		    *dest0++ = c;
		    c -= 0x30;
		    do {
			 *dest0++ = buf[j++].integer;
		    } while (--c);
		    continue;
	       }
	       if (c == 0x59) {
		    /* TIMES microcode */
		    dest0[0] = 0x59;
		    s = ifdef->expr[8];
		    k = ifdef->dat[8];
		    LOG_DEBUG("TIMES microcode!      \n"
			      "ifdef->expr[8]: 0x%02x\n"
			      "ifdef->dat[8] : %d\n",
			      s, k);

		    if (dest0 + len + k + 4 > dest1)
			 dest0 = NULL;
		    if (dest0 == NULL)
			 goto fin;

		    put4b(-1, dest0 + 1); /* 長さ不定 */
		    LOG_DEBUG("dest0 %s \n", dump_ptr("dest0", dest0, 5).c_str());
		    dest0 += 5; // 5Byte埋めたので5Byte進める

		    c = 5; /* len出力 */
		    int current = j++;
		    LOG_DEBUG("buf[%d].byte[%d]: 0x%02x \n", current,   0, buf[current  ].byte[0]);
		    LOG_DEBUG("buf[%d].byte[%d]: 0x%02x \n", current,   1, buf[current  ].byte[1]);
		    LOG_DEBUG("buf[%d].byte[%d]: 0x%02x \n", current,   2, buf[current  ].byte[2]);
		    LOG_DEBUG("buf[%d].byte[%d]: 0x%02x \n", current,   3, buf[current  ].byte[3]);
		    LOG_DEBUG("buf[%d].byte[%d]: 0x%02x \n", current+1, 0, buf[current+1].byte[0]);

		    // また5Byte埋める
		    *dest0++ = buf[current  ].byte[0];
		    *dest0++ = buf[current  ].byte[1];
		    *dest0++ = buf[current  ].byte[2];
		    *dest0++ = buf[current  ].byte[3];
		    *dest0++ = buf[current+1].byte[0];
		    // 入ったか確認
		    LOG_DEBUG("dest0 %s \n", dump_ptr("dest0", dest0 - 5, 5).c_str());

		    do {
			 *dest0++ = *s++;
		    } while (--k);
		    continue;
	       }
	       if (0x78 <= c && c <= 0x7f) {
		    LOG_DEBUG("0x78 <= c && c <= 0x7f \n");
		    c &= 0x07;
		    k = ifdef->dat[c];
		    s = ifdef->expr[c];
		    if (ifdef->vb[c] == 0x7f) {
			 *dest0++ = c | 0x78;
			 continue;
		    }
		    c = ifdef->vb[c];
		    if ((c & 0x1f) == 0x00)
			 continue;
		    if ((c & 0x80) == 0 /* const */) {
			 if (dest0 + len + (c & 0x1f) > dest1)
			      dest0 = NULL;
			 if (dest0 == NULL)
			      goto fin;
			 *dest0++ = (c &= 0x1f) | 0x30;
			 do {
			      *dest0++ = k & 0xff;
			      k >>= 8;
			 } while (--c);
			 continue;
		    }
		    /* expr */
		    if (dest0 + len + k > dest1)
			 dest0 = NULL;
		    if (dest0 == NULL)
			 goto fin;
		    dest0[0] = (c & 0x1f) + 0x37; /* 38〜3b */
		    dest0[1] = (c >> 5) & 0x03;
		    dest0 += 2;
		    do {
			 *dest0++ = *s++;
		    } while (--k);
		    continue;
	       }
	       if (0xe0 <= c && c <= 0xef) {
		    LOG_DEBUG("1byte remark \n");
		    /* 1バイトリマーク */
		    *dest0++ = c;
		    continue;
	       }
#if (DEBUG)
	       /* error */
	       fprintf(stderr, "flush_bp:%02X\n", c);
	       break;
#endif
	  }
     }
fin:
     return dest0;
}

//
// アライン情報検索処理
//
UCHAR check_alignments(std::array<STR_OUTPUT_SECTION, MAX_SECTIONS>& sectable,
		  UCHAR *src1, UCHAR *srcp, UCHAR *file_p, int file_len,
		  int g_symbols, int e_symbols, UCHAR file_aux)
{
	// See: データ型のアラインメントとは何か，なぜ必要なのか？
	//      http://www5d.biglobe.ne.jp/~noocyte/Programming/Alignment.html
	//
	// ここからはfunction naskで処理したalignmentのデータを処理していく
	// Quoted from: http://d.hatena.ne.jp/suu-g/20080510/1210408956
	//
	// "データを配置するとなると、今度はデータ境界を気にしなければならなくなる。
	// charなら1byteごとにアクセスできるから問題になることはなかなかないけど、
	// 32bit longは4byteごとでのアクセス以外では処理できず、Bus Error(SIGBUS)が発生する。
	// そのような問題を避けるために、データを配置する位置をデータ境界に揃える必要が出てくる。
	// それを行ってくれるのが .align ディレクティブだ。"
	//
	// naskはどうやら"各セクションのアラインをソース中のALIGN文から自動設定。"するらしい。
	// See: http://community.osdev.info/index.php?GO%2Fnask
	int secno = 0;
	UCHAR format = 0;

	do {
		LOG_DEBUG("srcp: 0x%02x \n", *srcp);
		if (srcp[0] == REM_4B) {
			LOG_DEBUG("srcp[0] matched REM_4B \n");
			LOG_DEBUG("srcp[1]: %d \n", srcp[1]);
			if (srcp[1] == 0) {
				LOG_DEBUG("srcp[1]: %s \n", "set section align");
				sectable[srcp[2]].align = srcp[3]; /* set section align */
			} else if (srcp[1] == 1) {
				LOG_DEBUG("srcp[1]: %s \n", "set section flags");
				sectable[srcp[2]].flags = srcp[3]; /* set section flags */
			} else {
				LOG_DEBUG("srcp[1]: %s a compiled align setting is not correct\n");
			}
		}
		if (srcp[0] == REM_3B) {
			LOG_DEBUG("srcp[0] matched REM_3B \n");
			if (srcp[1] == 1) {
				LOG_DEBUG("srcp[2]: %s \n", "start section");
				secno = srcp[2]; /* start section */
			} else if (srcp[1] == 2) {
				LOG_DEBUG("srcp[2]: %s \n", "set format");
				format = srcp[2]; /* set format */
			} else {
				LOG_DEBUG("srcp[2]: %s a compiled align setting is not correct\n");
			}
		}
		if (srcp[0] == REM_8B) {
			LOG_DEBUG("srcp[0] matched REM_8B \n");
			if (srcp[1] == 0) { /* file */
				LOG_DEBUG("srcp[1]: %s \n", "file");
				file_len = srcp[2];
				file_p = (UCHAR *) get4b(&srcp[4]);
				file_aux = (file_len + (1 + 17)) / 18;
			} else if (srcp[1] == 1) {
				LOG_DEBUG("srcp[1]: %s \n", "GLOBAL");
				g_symbols++; /* GLOBAL */
			} else if (srcp[1] == 2) { /* EXTERN */
				LOG_DEBUG("srcp[1]: %s \n", "EXTERN");
				e_symbols++;
				/* 番号とCOFFシンボル番号との対応表を作る...必要はない */
				/* EXTERNシンボルは、ラベル番号から定数を引くだけでCOFFシンボル番号になる */
			} else {
				LOG_DEBUG("srcp[2]: %s a compiled align setting is not correct\n");
			}
		}
		if (0x2e <= srcp[0] && srcp[0] <= 0x2f) {
			/* need relocation */
			LOG_DEBUG("0x2e <= srcp[0] <= 0x2f, need relocation \n");
			sectable[secno].relocs++;
		}
		srcp = LL_skipcode(srcp);
	} while (srcp < src1);

	return format;
}

//
// outputで例外発生時の処理
//
UCHAR *output_error(UCHAR *list0, UCHAR *list1, UCHAR *dest)
{
	list1[1] = 1; /* over */
	if (list0) {
		*list0 = '\0';
		list1[1] = 0; /* enough */
	}
	return dest;
}

//
// dest1を返すNULLならエラー
// listがあふれても続行
//
UCHAR *output(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, UCHAR *list0, UCHAR *list1, int nask_errors)
{
	int len, linecount = 0, srcl, i, addr, file_len, g_symbols = 0, e_symbols = 0;

	UCHAR *srcp, *file_p, *string0, *dest = dest0;

	std::array<STR_OUTPUT_SECTION, MAX_SECTIONS> sectable;
	STR_OUTPUT_SECTION sectables;
	sectables.relocs = 0;
	sectables.flags = 0;  /* invalid */
	std::fill(std::begin(sectable), std::end(sectable), sectables);

	std::array<UCHAR, 1024> lbuf0;
	UCHAR *lbuf = lbuf0.data();
	std::array<UCHAR, 32> ebuf0;
	UCHAR *ebuf = ebuf0.data(); /* エラーバッファ */

	UCHAR c, status, adrflag, cc, file_aux;
	// 0:最初, 1:アドレス出力前, 2:アドレス出力後(バイト列出力中), 3:バイト列出力中&ソース出力済み
	srcp = src0;

	// アライン情報検索
	const UCHAR format = check_alignments(sectable, src1, srcp, file_p, file_len, g_symbols, e_symbols, file_aux);

	/* バイナリー出力 */
	if (format == 1) { /* WCOFF */
		LOG_DEBUG("srcp[0]: 0x%02x \n", srcp[0]);
		if (dest + sizeof (libnask::header) > dest1) {
			dest = NULL;
			output_error(list0, list1, dest);
		}
		for (i = 0; i < sizeof (libnask::header); i++)
			dest[i] = libnask::header[i];
		dest += sizeof (libnask::header);
	}
	srcp = src0;
	int secno = 0; // 再代入されてる
	do {
		c = *srcp;
		if (SHORT_DB1 <= c && c <= SHORT_DB4) {
			srcp++;
			c -= SHORT_DB0;
			if (dest + 8 > dest1) {
				dest = NULL;
				output_error(list0, list1, dest);
			}
			if (format == 0 /* BIN <-- これ正しいの？ */)
				goto dest_out_skip;
			if (format == 1 && 1 <= sectable[secno].flags && sectable[secno].flags <= 2) {
dest_out_skip:
				do {
					// ここで *srcp の中身がlist0に書き込まれる
					// 多分大抵の場合それがバイナリで.imgファイルに入る
					*dest++ = *srcp++;
				} while (--c);
				continue;
			}
			srcp += c; /* bss or absolute */
			continue;
		}
		if (c == REM_3B && srcp[1] == 1) {
			/* start section */
			if (format == 1) { /* WCOFF */
				if (1 <= sectable[secno].flags && sectable[secno].flags <= 3)
					put4b(dest - sectable[secno].d0, &dest0[sectable[secno].flags * 40 - 4]);
			}
			sectable[secno = srcp[2]].p = srcp;
			sectable[secno].d0 = dest;
			if (format == 0) { /* BIN */
				if (sectable[secno].align > 0) {
					i = 1 << (sectable[secno].align);

					// FIXME: it should be used nask32bitInt
					//while (((int) dest) & (i - 1)) {
					// 	if (dest >= dest1) {
					// 		dest = NULL;
					// 		output_error(list0, list1, dest);
					// 	}
					// 	*dest++ = '\0';
					//}
				}
			}
			if (format == 1) { /* WCOFF */
				if (1 <= sectable[secno].flags && sectable[secno].flags <= 3) {
					put4b(dest - dest0, &dest0[sectable[secno].flags * 40]);
					dest0[sectable[secno].flags * 40 + 18] = sectable[secno].align << 4;
				}
			}
		}
		srcp = LL_skipcode(srcp);
	} while (srcp < src1);
	if (format == 1) { /* WCOFF */
		/* 最後のセクションのサイズ書き込み */
		if (1 <= sectable[secno].flags && sectable[secno].flags <= 3)
			put4b(dest - sectable[secno].d0, &dest0[sectable[secno].flags * 40 - 4]);

		/* relocation tables (allocate only) */
		/* relocation情報を持つセクションは2つしかない */
		for (i = 0; i < MAX_SECTIONS; i++) {
			if (1 <= sectable[i].flags && sectable[i].flags <= 2) {
				sectable[i].reloc_p = dest;
				put4b(dest - dest0, &dest0[sectable[i].flags * 40 + 4]); /* reloctab */
				dest0[sectable[i].flags * 40 + 12] = sectable[i].relocs & 0xff;
				dest0[sectable[i].flags * 40 + 13] = (sectable[i].relocs >> 8) & 0xff;
				dest += sectable[i].relocs * 10;
			}
		}
		if (dest > dest1) {
			dest = NULL;
			output_error(list0, list1, dest);
		}

		/* symbol table */
		put4b(dest - dest0, &dest0[0x08]);
		put4b(i = file_aux + 7 + e_symbols + g_symbols, &dest0[0x0c]);
		if (dest + i * 18 > dest1) {
			dest = NULL;
			output_error(list0, list1, dest);
		}
		for (i = 0; i < sizeof (libnask::common_symbols0); i++)
			dest[i] = libnask::common_symbols0[i];
		dest[17] = file_aux;
		for (i = 0; i < 18; i++)
			dest[file_aux * 18 + i] = '\0';
		for (i = 0; i < file_len; i++)
			dest[18 + i] = file_p[i];
		dest += file_aux * 18 + 18;
		for (i = 0; i < sizeof (libnask::common_symbols1); i++)
			dest[i] = libnask::common_symbols1[i];
		put4b(get4b(&dest0[0x24]), &dest[0x12]);
		put4b(get4b(&dest0[0x34]), &dest[0x16]);
		put4b(get4b(&dest0[0x4c]), &dest[0x36]);
		put4b(get4b(&dest0[0x5c]), &dest[0x3a]);
		put4b(get4b(&dest0[0x74]), &dest[0x5a]);
		file_p = dest + sizeof (libnask::common_symbols1);
		dest = file_p + (e_symbols + g_symbols) * 18;
		string0 = dest;
		dest += 4;
		/* 以下のループでリロケーションとシンボルテーブルをうめる */
		srcp = src0;
		secno = 0;
		addr = 0;
		g_symbols = e_symbols * 18;
		do {
			c = *srcp;
			if (SHORT_DB1 <= c && c <= SHORT_DB4) {
				srcp++;
				c -= SHORT_DB0;
				srcp += c;
				addr += c;
				continue;
			}
			if (c == REM_3B && srcp[1] == 1) {
				/* start section */
				secno = srcp[2];
				addr = 0;
			}
			if (srcp[0] == REM_8B) {
				if (1 <= srcp[1] && srcp[1] <= 2) {
					len = srcp[2] | srcp[3] << 8;
					lbuf = (UCHAR *) get4b(&srcp[4]);
					ebuf = file_p + ((srcp[10] | srcp[11] << 8) - E_LABEL0) * 18; /* EXTERN */
					if (srcp[1] == 1) { /* GLOBAL */
						ebuf = file_p + g_symbols;
						g_symbols += 18;
					}
					for (i = 0; i < 18; i++)
						ebuf[i] = '\0';
					ebuf[16] = 2; /* GLOBAL or EXTERN */
					if (len <= 8) {
						for (i = 0; i < len; i++)
							ebuf[i] = lbuf[i];
					} else {
						put4b(dest - string0, &ebuf[4]);
						if (dest + len + 1 > dest1) {
							dest = NULL;
							output_error(list0, list1, dest);
						}
						do {
							*dest++ = *lbuf++;
						} while (--len);
						*dest++ = '\0';
					}
					if (srcp[1] == 1) { /* GLOBAL */
						ebuf[ 8] = srcp[12];
						ebuf[ 9] = srcp[13];
						ebuf[10] = srcp[14];
						ebuf[11] = srcp[15];
						ebuf[12] = srcp[10];
						ebuf[13] = srcp[11];
					}
				}
			}
			/* リロケーション */
			if (0x2e <= srcp[0] && srcp[0] <= 0x2f &&
				1 <= sectable[secno].flags && sectable[secno].flags <= 2) {
				/* 0x2e : 絶対補正要求, 0x2f : 相対補正要求 */
				put4b(addr, sectable[secno].reloc_p);
				i = srcp[2] | srcp[3] << 8;
				/* .text == file_aux + 1 */
				/* .data == file_aux + 3 */
				/* .bss	 == file_aux + 5 */
				/* ext0 == file_aux + 7 */
				if (i >= E_LABEL0)
					i += 7 - E_LABEL0;
				else
					i = i * 2 - 1;
				put4b(i + file_aux, sectable[secno].reloc_p + 4);
				sectable[secno].reloc_p[8] = 0x06; /* absolute */
				sectable[secno].reloc_p[9] = 0;
				if (srcp[0] == 0x2f) {
					sectable[secno].reloc_p[8] = 0x14; /* relative */
					i = get4b(&dest0[sectable[secno].flags * 40]) + addr;
					#if (DEBUG)
						if (i < 0 || i + 4 > dest - lbuf) {
							fprintf(stderr, "output:relative relocation error(1)! i = 0x%08X\n", i);
							goto skip_relative_relocation;
						}
					#endif
					put4b(get4b(&dest0[i]) + addr + 4, &dest0[i]);
				}
skip_relative_relocation:
				sectable[secno].reloc_p += 10;
			}
			srcp = LL_skipcode(srcp);
		} while (srcp < src1);
		put4b(dest - string0, string0);
	}

	/* リスト出力 */
	status = 0;
	secno = 0;
	addr = 0;
	ebuf = ebuf0.data();
	for (;;) {
		lbuf = lbuf0.data();
		c = *src0;
		if (c == REM_3B && src0[1] == 0) {
			sectable[secno].p = src0;
			sectable[secno].addr = addr;
			secno = src0[2];
			src0 = sectable[secno].p;
			addr = sectable[secno].addr;
		}

		if (c == 0xf7) {	/* switchで書いたら、lcc-win32が死んでしまった */
			/* line start */
			if (status == 1) {
				len = -9;
				status = 2;
			}
			if (status == 2) {
				/* (MAX_LISTLEN - len)個のスペースを出力 */
				if (list0 + (MAX_LISTLEN - len + srcl) >= list1) {
					*list0 = '\0';
					list0 = NULL;
				}
				if (list0) {
					do {
						*list0++ = ' ';
						len++;
					} while (len < MAX_LISTLEN);
					// FIXME
					//while (srcl--)
					// 	*list0++ = *srcp++;
				}
			}
			if (status == 3)
				*lbuf++ = '\n';
			if ((len = ebuf - ebuf0.data()) != 0) {
				/* エラー出力 */
				nask_errors += len;

				// FIXME: error message types are not match
				//for (i = 0; i < len; i++) {
				// 	ebuf = reinterpret_cast<UCHAR*>(ERRMSG[ebuf0[i] - 0xe1]);
				// 	while ((*lbuf++ = *ebuf++) != '\n');
				//}
				ebuf = ebuf0.data();
			}
			srcl = get4b(&src0[1]);
			srcp = (UCHAR *) get4b(&src0[5]);
			if (srcl) {
				setdec(++linecount, 6, &lbuf[0]);
				lbuf[6] = ' ';
				lbuf += 7;
			}
			len = 0;
			src0 += 9;
			status = 1;
			adrflag = 0;
		} else if (c == 0x5a) {
			/* ORG */
			addr = get4b(&src0[1]);
			src0 += 5;
		} else if (c == 0x68) {
			src0 += 2; /* 読み飛ばす */
		} else if (c == REM_ADDR) {
			status = 2;
			sethex0(addr, 8, &lbuf[0]);
			lbuf[8] = ' ';
			lbuf += 9;
			src0++;
			adrflag = 1;
		} else if (SHORT_DB1 <= c && c <= SHORT_DB4) {
			if (status == 1) {
				for (i = 0; i < 9; i++)
					*lbuf++ = ' ';
				status = 2;
			}
			if (len + 1 + (c - 0x30) * 2 > MAX_LISTLEN) {
			//	if (status == 1) {
			//		len = -9;
			//		status = 2;
			//	}
				if (status == 2) {
					/* (MAX_LISTLEN - len)個のスペースを出力 */
					if (list0 + (MAX_LISTLEN - len + srcl) >= list1) {
						*list0 = '\0';
						list0 = NULL;
					}
					if (list0) {
						do {
							*list0++ = ' ';
							len++;
						} while (len < MAX_LISTLEN);
						while (srcl--)
							*list0++ = *srcp++;
					}
				} else
					*lbuf++ = '\n';
				for (i = 0; i < 7 + 9; i++)
					lbuf[i] = ' ';
				if (adrflag)
					sethex0(addr, 8, &lbuf[7]);
				lbuf += 9 + 7;
				status = 3;
				len = 0;
			}
			src0++;
			for (i = c - SHORT_DB1 /* 0x31 */; i >= 0; i--) {
				sethex0(src0[i], 2, &lbuf[0]);
				lbuf += 2;
				len += 2;
				addr++;
			}
			src0 += c - SHORT_DB0; /* - 0x30 */
			*lbuf++ = ' ';
			len++;
		} else if (0x2e <= c && c <= 0x2f && 1 <= sectable[secno].flags && sectable[secno].flags <= 2) { /* reloc data */
			if (status == 1) {
				for (i = 0; i < 9; i++)
					*lbuf++ = ' ';
				status = 2;
			}
			if (len + 11 > MAX_LISTLEN) {
			//	if (status == 1) {
			//		len = -9;
			//		status = 2;
			//	}
				if (status == 2) {
					/* (MAX_LISTLEN - len)個のスペースを出力 */
					if (list0 + (MAX_LISTLEN - len + srcl) >= list1) {
						*list0 = '\0';
						list0 = NULL;
					}
					if (list0) {
						do {
							*list0++ = ' ';
							len++;
						} while (len < MAX_LISTLEN);
						while (srcl--)
							*list0++ = *srcp++;
					}
				} else
					*lbuf++ = '\n';
				for (i = 0; i < 7 + 9; i++)
					lbuf[i] = ' ';
				if (adrflag)
					sethex0(addr, 8, &lbuf[7]);
				lbuf += 9 + 7;
				status = 3;
				len = 0;
			}
			src0 += 9;
			i = get4b(&dest0[sectable[secno].flags * 40]) + addr;
			lbuf[0] = '[';
			sethex0(get4b(&dest0[i]), 8, &lbuf[1]);
			lbuf[9] = ']';
			lbuf[10] = ' ';
			lbuf += 11;
			len += 11;
			addr += 4;
		} else if (c == 0x0c) {
			/* EQU (1) */
			/* 必ず status == 1 */
			lbuf[0] = ' ';
			lbuf[1] = '=';
			lbuf[2] = ' ';
			sethex0(get4b(&src0[1]), 8, &lbuf[3]);
			lbuf[11] = ' ';
			len = -9 + 12;
			lbuf += 12;
			src0 += 5;
			status = 2;
		} else if (c == 0x0d) {
			/* EQU (2) */
			/* 必ず status == 1 */
			lbuf[0] = ' ';
			lbuf[1] = '=';
			lbuf[2] = ' ';
			lbuf[3] = '[';
			sethex0(get4b(&src0[1]), 8, &lbuf[4]);
			lbuf[12] = ']';
			lbuf[13] = ' ';
			len = -9 + 14;
			lbuf += 14;
			src0 += 5;
			status = 2;
		} else if (0xe1 <= c && c <= 0xec) {
			/* エラーコード */
			*ebuf++ = c;
			src0++;
		} else if (c == 0x30 /* SHORT_DB0 */) {
			src0++; /* 読み飛ばす */
		} else if (0xf0 <= c && c <= 0xf7) {
			src0 += c - (0xf0 - 2);
		} else if (c == 0x2c) {
			src0 += 4;
		} else {
			#if (DEBUG)
				fprintf(stderr, "output:%02X\n", c);
			#endif
			src0++;
		}
		i = lbuf - lbuf0.data();
		if (list0 + i >= list1) {
			*list0 = '\0';
			list0 = NULL;
		}
		if (list0) {
			lbuf = lbuf0.data();
			while (i--)
				*list0++ = *lbuf++;
		}
		if (c == 0xf7) {
			cc = 0;
			for (i = -8; i < 0; i++)
				cc |= src0[i];
			if (cc == 0)
				break;
		}
	}

	// finally, finished !
	return dest;
}

UCHAR *putprefix(UCHAR *dest0, UCHAR *dest1, int prefix, int bits, int opt)
{
	/* prefix:
		bit 0:REP/REPZ
		bit 1:REPNZ
		bit 2:LOCK
		bit 3:ADRSIZ
		bit 4:OPRSIZ
		bit 5:ES
		bit 6:CS
		bit 7:SS
		bit 8:DS
		bit 9:FS
		bit10:GS
		bit16:A16(明示)
		bit17:A32(明示)
		bit20:O16(明示)
		bit21:O32(明示)
		bit24:A16(暗黙)
		bit25:A32(暗黙)
		bit28:O16(暗黙)
		bit29:O32(暗黙)
	*/
	/* bitsは16か32。bit0はDS, bit1はSS */
	/*
		まず暗黙のプリフィックスをbitsを使って抹消
		opt >= 1なら、SSかDSも抹消
		もし明示プリフィックスがあったら、対応する種類の暗黙プリフィックスはキャンセル
		明示プリフィックスが無ければ、暗黙を明示へコピー
		明示を使って、ADRSIZ, OPRSIZを反転
		アドレス出力マークを出力
		下位から参照して、プリフィックス列を出力(bit0-10)
	*/
	UCHAR buf[3 * 16 + 1], *bp;
	static UCHAR code[11] = {
		0xf3 /* bit 0:REP/REPZ */,
		0xf2 /* bit 1:REPNZ */,
		0xf0 /* bit 2:LOCK */,
		0x67 /* bit 3:ADRSIZ */,
		0x66 /* bit 4:OPRSIZ */,
		0x26 /* bit 5:ES */,
		0x2e /* bit 6:CS */,
		0x36 /* bit 7:SS */,
		0x3e /* bit 8:DS */,
		0x64 /* bit 9:FS */,
		0x65 /* bit10:GS */
	};
	int i, j;
	if (opt >= 1) {
		if (bits & 1)
			prefix &= ~0x00000100; /* DS */
		if (bits & 2)
			prefix &= ~0x00000080; /* SS */
	}
	if ((prefix & 0x00030000) == 0) /* A16(明示), A32(明示) */
		prefix |= (prefix & 0x03000000) >> 8;
	if ((prefix & 0x00300000) == 0) /* O16(明示), O32(明示) */
		prefix |= (prefix & 0x30000000) >> 8;
	if (bits & 16)
		prefix &= ~0x00110000; /* A16(明示), O16(明示) */
	if (bits & 32)
		prefix &= ~0x00220000; /* A32(明示), O32(明示) */
	if (prefix & 0x00030000) /* A16(明示), A32(明示) */
		prefix ^= 0x00000008; /* ADRSIZ */
	if (prefix & 0x00300000) /* O16(明示), O32(明示) */
		prefix ^= 0x00000010; /* OPRSIZ */
	buf[0] = REM_ADDR; /* 0xe0 */
	bp = &buf[1];
	for (i = 0; i < 11; i++) {
		if (prefix & (1 << i)) {
			bp[0] = SHORT_DB1; /* 0x31 */
			bp[1] = code[i];
			bp += 2;
		}
	}
	i = bp - buf;
	if (dest0 + i > dest1)
		dest0 = NULL;
	if (dest0) {
		for (j = 0; j < i; j++)
			dest0[j] = buf[j];
		dest0 += i;
	}
	return dest0;
}

static struct INST_TABLE instruction[] = {
	{ "AAA",		SUP_8086,	NO_PARAM, 1, 0x37 },
	{ "AAD",		SUP_8086,	OPE_AAMD, 0xd5, 10 },
	{ "AAS",		SUP_8086,	NO_PARAM, 1, 0x3f },
	{ "AAM",		SUP_8086,	OPE_AAMD, 0xd4, 10 },
	{ "ADC",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x02 << 3 },
	{ "ADD",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x00 << 3 },
	{ "AND",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x04 << 3 },
	{ "ALIGN",		SUP_8086,	OPE_ALIGN, 0x90 },
	{ "ALIGNB",		SUP_8086,	OPE_ALIGN, 0x00 },
	{ "ARPL",		SUP_80286P,	OPE_MR, 0xa2, 0x21, 0x63 }, /* w,ws no-w no-o16/o32 */
	{ "BOUND",		SUP_80186,	OPE_RM, 0x86, 0x01, 0x62 }, /* dw,s no-w */
	{ "BSF",		SUP_i386,	OPE_RM, 0x86, 0x02, 0x0f, 0xbc }, /* dw,s no-w */
	{ "BSR",		SUP_i386,	OPE_RM, 0x86, 0x02, 0x0f, 0xbd }, /* dw,s no-w */
	{ "BSWAP",		SUP_i486,	OPE_M, 0x14, 0xa1, 0x0f }, /* d no-w no-o16/o32 no-mem */
	{ "BT",			SUP_i386,	OPE_BT, 0x04 << 3 },
	{ "BTC",		SUP_i386,	OPE_BT, 0x07 << 3 },
	{ "BTR",		SUP_i386,	OPE_BT, 0x06 << 3 },
	{ "BTS",		SUP_i386,	OPE_BT, 0x05 << 3 },
	{ "CALL",		SUP_8086,	OPE_JMP, 0x02 << 3, 0xe8, 0x9a, 0x00 },
	{ "CBW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0x98 },
	{ "CDQ",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x99 },
	{ "CLC",		SUP_8086,	NO_PARAM, 1, 0xf8 },
	{ "CLD",		SUP_8086,	NO_PARAM, 1, 0xfc },
	{ "CLI",		SUP_8086,	NO_PARAM, 1, 0xfa },
	{ "CLTS",		SUP_80286P,	NO_PARAM, 2, 0x0f, 0x06 },
	{ "CMC",		SUP_8086,	NO_PARAM, 1, 0xf5 },
	{ "CMP",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x07 << 3 },
	{ "CMPSB",		SUP_8086,	NO_PARAM, 1 | DEF_DS, 0xa6 },
	{ "CMPSD",		SUP_i386,	NO_PARAM, 1 | OPE32 | DEF_DS, 0xa7 },
	{ "CMPSW",		SUP_8086,	NO_PARAM, 1 | OPE16 | DEF_DS, 0xa7 },
	{ "CMPXCHG",		SUP_i486,	OPE_MR, 0x87, 0x12, 0x0f, 0xb0 }, /* bwd,s w0 */
	{ "CS",			SUP_8086,	PREFIX,	0x06 },
	{ "CWD",		SUP_8086,	NO_PARAM, 1 | OPE16, 0x99 },
	{ "CWDE",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x98 },
	{ "DAA",		SUP_8086,	NO_PARAM, 1, 0x27 },
	{ "DAS",		SUP_8086,	NO_PARAM, 1, 0x2f },
	{ "DB",			SUP_8086,	OPE_DB, 1, 0x9e },
	{ "DD",			SUP_8086,	OPE_DB,	4, 0x9d },
	{ "DEC",		SUP_8086,	OPE_PUSH, 0x01, 0x48, 0xfe },
	{ "DIV",		SUP_8086,	OPE_M, 0x67, 0x11, 0xf6 }, /* bwd w0 */
	{ "DQ",			SUP_8086,	OPE_DB, 8 },
	{ "DS",			SUP_8086,	PREFIX, 0x08 },
	{ "DT",			SUP_8086,	OPE_DB, 10 },
	{ "DW",			SUP_8086,	OPE_DB, 2, 0x9b },
	{ "END",		SUP_8086,	OPE_END },
	{ "ENTER",		SUP_80186,	OPE_ENTER },
	{ "EQU",		SUP_8086,	OPE_EQU },
	{ "ES",			SUP_8086,	PREFIX, 0x05 },
	{ "EXTERN",		SUP_8086,	OPE_GLOBAL, 2 },
	{ "F2XM1",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf0 },
	{ "FABS",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xE1 },
	{ "FADD",		SUP_8086,	OPE_FPU, 0, 0, 0x80 /* D8 /0 */, 0x84 /* DC /0 */, 0, 0x80 /* D8 /0 */, 0x84 /* DC /0 */ },
	{ "FADDP",		SUP_8086,	OPE_FPUP, 0x06 /* DE /0 */ },
	{ "FBLD",		SUP_8086,	OPE_FPU, 0x07 /* mem10 */, 0, 0, 0, 0xa7 /* DF /4 */ },
	{ "FBSTP",		SUP_8086,	OPE_FPU, 0x07 /* mem10 */, 0, 0, 0, 0xb7 /* DF /6 */ },
	{ "FCHS",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xe0 },
	{ "FCLEX",		SUP_8086,	NO_PARAM, 3, 0x9b, 0xdb, 0xe2 },
	{ "FCOM",		SUP_8086,	OPE_FPU, 0, 0, 0x90 /* D8 /2 */, 0x94 /* DC /2 */, 0, 0x90 /* D8 /2 */, 0 },
	{ "FCOMP",		SUP_8086,	OPE_FPU, 0, 0, 0x98 /* D8 /3 */, 0x9c /* DC /3 */, 0, 0x98 /* D8 /3 */, 0 },
	{ "FCOMPP",		SUP_8086,	NO_PARAM, 2, 0xde, 0xd9 },
	{ "FCOS",		SUP_i386,	NO_PARAM, 2, 0xd9, 0xff },
	{ "FDECSTP",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf6 },
	{ "FDISI",		SUP_8086,	NO_PARAM, 3, 0x9b, 0xdb, 0xe1 },
	{ "FDIV",		SUP_8086,	OPE_FPU, 0, 0, 0xb0 /* D8 /6 */, 0xb4 /* DC /6 */, 0, 0xb0 /* D8 /6 */, 0xbc /* DC /7 */ },
	{ "FDIVP",		SUP_8086,	OPE_FPUP, 0x3e /* DE /7 */ },
	{ "FDIVR",		SUP_8086,	OPE_FPU, 0, 0, 0xb8 /* D8 /7 */, 0xbc /* DC /7 */, 0, 0xb8 /* D8 /7 */, 0xb4 /* DC /6 */ },
	{ "FDIVRP",		SUP_8086,	OPE_FPUP, 0x36 /* DE /6 */ },
	{ "FENI",		SUP_8086,	NO_PARAM, 3, 0x9b, 0xdb, 0xe0 },
	{ "FFREE",		SUP_8086,	OPE_FPU, 0x08, 0, 0, 0, 0, 0x85 /* DD /0 */ },
	{ "FIADD",		SUP_8086,	OPE_FPU, 0, 0x86 /* DE /0 */, 0x82 /* DA /0 */ },
	{ "FICOM",		SUP_8086,	OPE_FPU, 0, 0x96 /* DE /2 */, 0x92 /* DA /2 */ },
	{ "FICOMP",		SUP_8086,	OPE_FPU, 0, 0x9e /* DE /3 */, 0x9a /* DA /3 */ },
	{ "FIDIV",		SUP_8086,	OPE_FPU, 0, 0xb6 /* DE /6 */, 0xb2 /* DA /6 */ },
	{ "FIDIVR",		SUP_8086,	OPE_FPU, 0, 0xbe /* DE /7 */, 0xba /* DA /7 */ },
	{ "FILD",		SUP_8086,	OPE_FPU, 0, 0x87 /* DF /0 */, 0x83 /* DB /0 */, 0xaf /* DF /5 */ },
	{ "FIMUL",		SUP_8086,	OPE_FPU, 0, 0x8e /* DE /1 */, 0x8a /* DA /1 */ },
	{ "FINCSTP",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf7 },
	{ "FINIT",		SUP_8086,	NO_PARAM, 3, 0x9b, 0xdb, 0xe3 },
	{ "FIST",		SUP_8086,	OPE_FPU, 0, 0x97 /* DF /2 */, 0x93 /* DB /2 */ },
	{ "FISTP",		SUP_8086,	OPE_FPU, 0, 0x9f /* DF /3 */, 0x9b /* DB /3 */, 0xbf /* DF /7 */ },
	{ "FISUB",		SUP_8086,	OPE_FPU, 0, 0xa6 /* DE /4 */, 0xa2 /* DA /4 */ },
	{ "FISUBR",		SUP_8086,	OPE_FPU, 0, 0xae /* DE /5 */, 0xaa /* DA /5 */ },
	{ "FLD",		SUP_8086,	OPE_FPU, 0x08, 0, 0x81 /* D9 /0 */, 0x85 /* DD /0 */, 0xab /* DB /5 */, 0x81 /* D9 /0 */ },
	{ "FLD1",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xe8 },
	{ "FLDCW",		SUP_8086,	OPE_FPU, 0x04 /* mem2 */, 0xa9 /* D9 /5 */ },
	{ "FLDENV",		SUP_8086,	OPE_M, 0x48, 0x61, 0xd9 }, /* s no-w no-o16/o32 no-reg */
	{ "FLDL2E",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xea },
	{ "FLDL2T",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xe9 },
	{ "FLDLG2",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xec },
	{ "FLDLN2",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xed },
	{ "FLDPI",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xeb },
	{ "FLDZ",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xee },
	{ "FMUL",		SUP_8086,	OPE_FPU, 0, 0, 0x88 /* D8 /1 */, 0x8c /* DC /1 */, 0, 0x88 /* D8 /1 */, 0x8c /* DC /1 */ },
	{ "FMULP",		SUP_8086,	OPE_FPUP, 0x0e /* DE /1 */ },
	{ "FNCLEX",		SUP_8086,	NO_PARAM, 2, 0xdb, 0xe2 },
	{ "FNDISI",		SUP_8086,	NO_PARAM, 2, 0xdb, 0xe1 },
	{ "FNENI",		SUP_8086,	NO_PARAM, 2, 0xdb, 0xe0 },
	{ "FNINIT",		SUP_8086,	NO_PARAM, 2, 0xdb, 0xe3 },
	{ "FNOP",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xd0 },
	{ "FNSAVE",		SUP_8086,	OPE_M, 0x68, 0x61, 0xdd }, /* s no-w no-o16/o32 no-reg */
	{ "FNSTCW",		SUP_8086,	OPE_M, 0x7a, 0x61, 0xd9 }, /* ws no-w no-o16/o32 no-reg */
	{ "FNSTENV",		SUP_8086,	OPE_M, 0x68, 0x61, 0xd9 }, /* s no-w no-o16/o32 no-reg */
	{ "FNSTSW",		SUP_8086,	OPE_FSTSW, 0x0a, 0x61, 0xdd, 0, 0xdf, 0xe0 }, /* ws no-w no-o16/o32 no-reg */
	{ "FPATAN",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf3 },
	{ "FPTAN",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf2 },
	{ "FPREM",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf8 },
	{ "FPREM1",		SUP_i386,	NO_PARAM, 2, 0xd9, 0xf5 },
	{ "FRNDINT",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xfc },
	{ "FRSTOR",		SUP_8086,	OPE_M, 0x48, 0x61, 0xdd }, /* s no-w no-o16/o32 no-reg */
	{ "FS",			SUP_i386,	PREFIX, 0x09 },
	{ "FSAVE",		SUP_8086,	OPE_M, 0x68, 0x62, 0x9b, 0xdd }, /* s no-w no-o16/o32 no-reg */
	{ "FSCALE",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xfd },
	{ "FSETPM",		SUP_80286P,	NO_PARAM, 2, 0xdb, 0xe4 },
	{ "FSIN",		SUP_i386,	NO_PARAM, 2, 0xd9, 0xfe },
	{ "FSINCOS",		SUP_i386,	NO_PARAM, 2, 0xd9, 0xfb },
	{ "FSQRT",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xfa },
	{ "FST",		SUP_8086,	OPE_FPU, 8, 0, 0x91 /* D9 /2 */, 0x95 /* DD /2 */, 0, 0x95 /* DD /2 */ },
	{ "FSTCW",		SUP_8086,	OPE_M, 0x7a, 0x62, 0x9b, 0xd9 }, /* ws no-w no-o16/o32 no-reg */
	{ "FSTENV",		SUP_8086,	OPE_M, 0x68, 0x62, 0x9b, 0xd9 }, /* s no-w no-o16/o32 no-reg */
	{ "FSTP",		SUP_8086,	OPE_FPU, 8, 0, 0x99 /* D9 /3 */, 0x9d /* DD /3 */, 0xbb /* DB /7 */, 0x9d /* DD /3 */ },
	{ "FSTSW",		SUP_8086,	OPE_FSTSW, 0x0a, 0x62, 0x9b, 0xdd, 0x9b, 0xdf, 0xe0 }, /* ws no-w no-o16/o32 no-reg */
	{ "FSUB",		SUP_8086,	OPE_FPU, 0, 0, 0xa0 /* D8 /4 */, 0xa4 /* DC /4 */, 0, 0xa0 /* D8 /4 */, 0xac /* DC /5 */ },
	{ "FSUBP",		SUP_8086,	OPE_FPUP, 0x2e /* DE /5 */ },
	{ "FSUBR",		SUP_8086,	OPE_FPU, 0, 0, 0xa8 /* D8 /5 */, 0xac /* DC /5 */, 0, 0xa8 /* D8 /5 */, 0xa4 /* DC /4 */ },
	{ "FSUBRP",		SUP_8086,	OPE_FPUP, 0x26 /* DE /4 */ },
	{ "FTST",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xe4 },
	{ "FUCOM",		SUP_i386,	OPE_FPU, 0, 0, 0, 0, 0, 0xa5 /* DD /4 */ },
	{ "FUCOMP",		SUP_i386,	OPE_FPU, 0, 0, 0, 0, 0, 0xad /* DD /5 */ },
	{ "FUCOMPP",		SUP_i386,	NO_PARAM, 2, 0xda, 0xe9 },
	{ "FXAM",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xe5 },
	{ "FXCH",		SUP_8086,	OPE_FXCH },
	{ "FXTRACT",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf4 },
	{ "FYL2X",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf1 },
	{ "FYL2XP1",		SUP_8086,	NO_PARAM, 2, 0xd9, 0xf9 },
	{ "GLOBAL",		SUP_8086,	OPE_GLOBAL, 1 },
	{ "GS",			SUP_i386,	PREFIX, 0x0a },
	{ "HLT",		SUP_8086,	NO_PARAM, 1, 0xf4 },
	{ "IDIV",		SUP_8086,	OPE_M, 0x77, 0x11, 0xf6 }, /* bwd w0 */
	{ "IMUL",		SUP_8086,	OPE_IMUL, 0x57, 0x11, 0xf6  }, /* bwd w0 */
	{ "IN",			SUP_8086,	OPE_INOUT, 0xe4 },
	{ "INC",		SUP_8086,	OPE_PUSH, 0x00, 0x40, 0xfe },
	{ "INSB",		SUP_8086,	NO_PARAM, 1, 0x6c },
	{ "INSD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x6d },
	{ "INSW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0x6d },
	{ "INT",		SUP_8086,	OPE_INT },
	{ "INT3",		SUP_8086,	NO_PARAM, 1, 0xcc },
	{ "INTO",		SUP_8086,	NO_PARAM, 1, 0xce },
	{ "INVD",		SUP_i486,	NO_PARAM, 2, 0x0f, 0x08 },
	{ "INVLPG",		SUP_i486,	OPE_M, 0x7e, 0x62, 0x0f, 0x01 }, /* wds no-w no-o16/o32 no-reg */
	{ "IRET",		SUP_8086,	NO_PARAM, 1, 0xcf },
	{ "IRETD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0xcf },
	{ "IRETW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0xcf },
	{ "JA",			SUP_8086,	OPE_JCC, 0x07 },
	{ "JAE",		SUP_8086,	OPE_JCC, 0x03 },
	{ "JB",			SUP_8086,	OPE_JCC, 0x02 },
	{ "JBE",		SUP_8086,	OPE_JCC, 0x06 },
	{ "JC",			SUP_8086,	OPE_JCC, 0x02 },
	{ "JCXZ",		SUP_8086,	OPE_LOOP, 0xe3, 16 },
	{ "JE",			SUP_8086,	OPE_JCC, 0x04 },
	{ "JECXZ",		SUP_i386,	OPE_LOOP, 0xe3, 32 },
	{ "JG",			SUP_8086,	OPE_JCC, 0x0f },
	{ "JGE",		SUP_8086,	OPE_JCC, 0x0d },
	{ "JL",			SUP_8086,	OPE_JCC, 0x0c },
	{ "JLE",		SUP_8086,	OPE_JCC, 0x0e },
	{ "JMP",		SUP_8086,	OPE_JMP, 0x04 << 3, 0xe9, 0xea, 0xeb },
	{ "JNA",		SUP_8086,	OPE_JCC, 0x06 },
	{ "JNAE",		SUP_8086,	OPE_JCC, 0x02 },
	{ "JNB",		SUP_8086,	OPE_JCC, 0x03 },
	{ "JNBE",		SUP_8086,	OPE_JCC, 0x07 },
	{ "JNC",		SUP_8086,	OPE_JCC, 0x03 },
	{ "JNE",		SUP_8086,	OPE_JCC, 0x05 },
	{ "JNG",		SUP_8086,	OPE_JCC, 0x0e },
	{ "JNGE",		SUP_8086,	OPE_JCC, 0x0c },
	{ "JNL",		SUP_8086,	OPE_JCC, 0x0d },
	{ "JNLE",		SUP_8086,	OPE_JCC, 0x0f },
	{ "JNO",		SUP_8086,	OPE_JCC, 0x01 },
	{ "JNP",		SUP_8086,	OPE_JCC, 0x0b },
	{ "JNS",		SUP_8086,	OPE_JCC, 0x09 },
	{ "JNZ",		SUP_8086,	OPE_JCC, 0x05 },
	{ "JO",			SUP_8086,	OPE_JCC, 0x00 },
	{ "JP",			SUP_8086,	OPE_JCC, 0x0a },
	{ "JPE",		SUP_8086,	OPE_JCC, 0x0a },
	{ "JPO",		SUP_8086,	OPE_JCC, 0x0b },
	{ "JS",			SUP_8086,	OPE_JCC, 0x08 },
	{ "JZ",			SUP_8086,	OPE_JCC, 0x04 },
	{ "LAHF",		SUP_8086,	NO_PARAM, 1, 0x9f },
	{ "LAR",		SUP_80286P,	OPE_RM, 0xa6, 0x02, 0x0f, 0x02 }, /* wd,ws no-w */
	{ "LDS",		SUP_8086,	OPE_RM, 0x86, 0x41, 0xc5 }, /* wd,s no-w no-reg */
	{ "LEA",		SUP_8086,	OPE_RM, 0x06, 0x41, 0x8d }, /* wd,all no-w no-reg (cancel seg:) */
	{ "LEAVE",		SUP_80186,	NO_PARAM, 1, 0xc9 },
	{ "LES",		SUP_8086,	OPE_RM, 0x86, 0x41, 0xc4 }, /* wd,s no-w no-reg */
	{ "LFS",		SUP_i386,	OPE_RM, 0x86, 0x42, 0x0f, 0xb4 }, /* wd,s no-w no-reg */
	{ "LGDT",		SUP_80286P,	OPE_M, 0x2e, 0x62, 0x0f, 0x01 }, /* wds no-w no-o16/o32 no-reg */
	{ "LGS",		SUP_i386,	OPE_RM, 0x86, 0x42, 0x0f, 0xb5 }, /* wd,s no-w no-reg */
	{ "LIDT",		SUP_80286P,	OPE_M, 0x3e, 0x62, 0x0f, 0x01 }, /* wds no-w no-o16/o32 no-reg */
	{ "LLDT",		SUP_80286P,	OPE_M, 0x2a, 0x22, 0x0f, 0x00 }, /* ws no-w no-o16/o32 */
	{ "LMSW",		SUP_80286P, OPE_M, 0x6a, 0x22, 0x0f, 0x01 }, /* ws no-w no-o16/o32 */
	{ "LOCK",		SUP_8086,	PREFIX, 0x02 },
	{ "LODSB",		SUP_8086,	NO_PARAM, 1 | DEF_DS, 0xac },
	{ "LODSD",		SUP_i386,	NO_PARAM, 1 | OPE32 | DEF_DS, 0xad },
	{ "LODSW",		SUP_8086,	NO_PARAM, 1 | OPE16 | DEF_DS, 0xad },
	{ "LOOP",		SUP_8086,	OPE_LOOP, 0xe2, 0 },
	{ "LOOPE",		SUP_8086,	OPE_LOOP, 0xe1, 0 },
	{ "LOOPNE",		SUP_8086,	OPE_LOOP, 0xe0, 0 },
	{ "LOOPNZ",		SUP_8086,	OPE_LOOP, 0xe0, 0 },
	{ "LOOPZ",		SUP_8086,	OPE_LOOP, 0xe1, 0 },
	{ "LSL",		SUP_80286P,	OPE_RM, 0xa6, 0x02, 0x0f, 0x03 }, /* wd,ws no-w */
	{ "LSS",		SUP_8086,	OPE_RM, 0x86, 0x42, 0x0f, 0xb2 }, /* wd,s no-w no-reg */
	{ "LTR",		SUP_80286P,	OPE_M, 0x3a, 0x22, 0x0f, 0x00 }, /* ws no-w no-o16/o32 */
	{ "MOV",		SUP_8086,	OPE_MOV },
	{ "MOVSB",		SUP_8086,	NO_PARAM, 1 | DEF_DS, 0xa4 },
	{ "MOVSD",		SUP_i386,	NO_PARAM, 1 | OPE32 | DEF_DS, 0xa5 },
	{ "MOVSW",		SUP_8086,	NO_PARAM, 1 | OPE16 | DEF_DS, 0xa5 },
	{ "MOVSX",		SUP_i386,	OPE_MOVZX, 0xbf },
	{ "MOVZX",		SUP_i386,	OPE_MOVZX, 0xb7 },
	{ "MUL",		SUP_8086,	OPE_M, 0x47, 0x11, 0xf6 }, /* bwd w0 */
	{ "NEG",		SUP_8086,	OPE_M, 0x37, 0x11, 0xf6 }, /* bwd w0 */
	{ "NOP",		SUP_8086,	NO_PARAM, 1, 0x90 },
	{ "NOT",		SUP_8086,	OPE_M, 0x27, 0x11, 0xf6 }, /* bwd w0 */
	{ "OR",			SUP_8086,	OPE_ADD, 0x87, 0x11, 0x01 << 3 },
	{ "ORG",		SUP_8086,	OPE_ORG },
	{ "OUT",		SUP_8086,	OPE_INOUT, 0xe6 },
	{ "OUTSB",		SUP_8086,	NO_PARAM, 1 | DEF_DS, 0x6e },
	{ "OUTSD",		SUP_i386,	NO_PARAM, 1 | OPE32 | DEF_DS, 0x6f },
	{ "OUTSW",		SUP_8086,	NO_PARAM, 1 | OPE16 | DEF_DS, 0x6f },

	{ "POP",		SUP_8086,	OPE_PUSH, 0x08, 0x58, 0x8f, 0x07, 0xa1 },
	{ "POPA",		SUP_80186,	NO_PARAM, 1, 0x61 },
	{ "POPAD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x61 },
	{ "POPAW",		SUP_80186,	NO_PARAM, 1 | OPE16, 0x61 },
	{ "POPF",		SUP_8086,	NO_PARAM, 1, 0x9d },
	{ "POPFD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x9d },
	{ "POPFW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0x9d },
	{ "PUSH",		SUP_8086,	OPE_PUSH, 0x1e, 0x50, 0xff, 0x06, 0xa0 },
	{ "PUSHA",		SUP_80186,	NO_PARAM, 1, 0x60 },
	{ "PUSHAD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x60 },
	{ "PUSHAW",		SUP_80186,	NO_PARAM, 1 | OPE16, 0x60 },
	{ "PUSHF",		SUP_8086,	NO_PARAM, 1, 0x9c },
	{ "PUSHFD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0x9c },
	{ "PUSHFW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0x9c },

	{ "RCL",		SUP_8086,	OPE_SHIFT, 0x02 },
	{ "RCR",		SUP_8086,	OPE_SHIFT, 0x03 },
	{ "REP",		SUP_8086,	PREFIX, 0x00 },
	{ "REPE",		SUP_8086,	PREFIX, 0x00 },
	{ "REPNE",		SUP_8086,	PREFIX, 0x01 },
	{ "REPNZ",		SUP_8086,	PREFIX, 0x01 },
	{ "REPZ",		SUP_8086,	PREFIX, 0x00 },
	{ "RESB",		SUP_8086,	OPE_RESB, 1 },
	{ "RESD",		SUP_8086,	OPE_RESB, 4 },
	{ "RESQ",		SUP_8086,	OPE_RESB, 8 },
	{ "REST",		SUP_8086,	OPE_RESB, 10 },
	{ "RESW",		SUP_8086,	OPE_RESB, 2 },
	{ "RET",		SUP_8086,	OPE_RET, 0xc2 },
	{ "RETF",		SUP_8086,	OPE_RET, 0xca },
	{ "RETN",		SUP_8086,	OPE_RET, 0xc2 },
	{ "ROL",		SUP_8086,	OPE_SHIFT, 0x00 },
	{ "ROR",		SUP_8086,	OPE_SHIFT, 0x01 },
	{ "SAHF",		SUP_8086,	NO_PARAM, 1, 0x9e },
	{ "SAL",		SUP_8086,	OPE_SHIFT, 0x04 },
	{ "SAR",		SUP_8086,	OPE_SHIFT, 0x07 },
	{ "SBB",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x03 << 3 },
	{ "SCASB",		SUP_8086,	NO_PARAM, 1, 0xae },
	{ "SCASD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0xaf },
	{ "SCASW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0xaf },
	{ "SETA",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x97 }, /* bs no-w no-o16/o32 */
	{ "SETAE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x93 }, /* bs no-w no-o16/o32 */
	{ "SETB",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x92 }, /* bs no-w no-o16/o32 */
	{ "SETBE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x96 }, /* bs no-w no-o16/o32 */
	{ "SETC",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x92 }, /* bs no-w no-o16/o32 */
	{ "SETE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x94 }, /* bs no-w no-o16/o32 */
	{ "SETG",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9f }, /* bs no-w no-o16/o32 */
	{ "SETGE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9d }, /* bs no-w no-o16/o32 */
	{ "SETL",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9c }, /* bs no-w no-o16/o32 */
	{ "SETLE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9e }, /* bs no-w no-o16/o32 */
	{ "SETNA",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x96 }, /* bs no-w no-o16/o32 */
	{ "SETNAE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x92 }, /* bs no-w no-o16/o32 */
	{ "SETNB",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x93 }, /* bs no-w no-o16/o32 */
	{ "SETNBE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x97 }, /* bs no-w no-o16/o32 */
	{ "SETNC",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x93 }, /* bs no-w no-o16/o32 */
	{ "SETNE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x95 }, /* bs no-w no-o16/o32 */
	{ "SETNG",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9e }, /* bs no-w no-o16/o32 */
	{ "SETNGE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9c }, /* bs no-w no-o16/o32 */
	{ "SETNL",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9d }, /* bs no-w no-o16/o32 */
	{ "SETNLE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9f }, /* bs no-w no-o16/o32 */
	{ "SETNO",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x91 }, /* bs no-w no-o16/o32 */
	{ "SETNP",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9b }, /* bs no-w no-o16/o32 */
	{ "SETNS",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x99 }, /* bs no-w no-o16/o32 */
	{ "SETNZ",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x95 }, /* bs no-w no-o16/o32 */
	{ "SETO",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x90 }, /* bs no-w no-o16/o32 */
	{ "SETP",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9a }, /* bs no-w no-o16/o32 */
	{ "SETPE",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9a }, /* bs no-w no-o16/o32 */
	{ "SETPO",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x9b }, /* bs no-w no-o16/o32 */
	{ "SETS",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x98 }, /* bs no-w no-o16/o32 */
	{ "SETZ",		SUP_i386,	OPE_M, 0x09, 0x32, 0x0f, 0x94 }, /* bs no-w no-o16/o32 */
	{ "SGDT",		SUP_80286P,	OPE_M, 0x0e, 0x62, 0x0f, 0x01 }, /* wds no-w no-o16/o32 no-reg */
	{ "SHL",		SUP_8086,	OPE_SHIFT, 0x04 },
	{ "SHLD",		SUP_i386,	OPE_SHLD, 0xa4 },
	{ "SHR",		SUP_8086,	OPE_SHIFT, 0x05 },
	{ "SHRD",		SUP_i386,	OPE_SHLD, 0xac },
	{ "SIDT",		SUP_80286P,	OPE_M, 0x1e, 0x62, 0x0f, 0x01 }, /* wds no-w no-o16/o32 no-reg */
	{ "SLDT",		SUP_80286P,	OPE_M, 0x0a, 0x22, 0x0f, 0x00 }, /* ws no-w no-o16/o32 */
	{ "SMSW",		SUP_80286P,	OPE_M, 0x4a, 0x22, 0x0f, 0x01 }, /* ws no-w no-o16/o32 */
	{ "SS",			SUP_8086,	PREFIX, 0x07 },
	{ "STC",		SUP_8086,	NO_PARAM, 1, 0xf9 },
	{ "STD",		SUP_8086,	NO_PARAM, 1, 0xfd },
	{ "STI",		SUP_8086,	NO_PARAM, 1, 0xfb },
	{ "STOSB",		SUP_8086,	NO_PARAM, 1, 0xaa },
	{ "STOSD",		SUP_i386,	NO_PARAM, 1 | OPE32, 0xab },
	{ "STOSW",		SUP_8086,	NO_PARAM, 1 | OPE16, 0xab },
	{ "STR",		SUP_80286P,	OPE_M, 0x1a, 0x22, 0x0f, 0x00 }, /* ws no-w no-o16/o32 */
	{ "SUB",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x05 << 3 },
	{ "TEST",		SUP_8086,	OPE_TEST },
	{ "TIMES",		SUP_8086,	OPE_TIMES },
	{ "VERR",		SUP_80286P,	OPE_M, 0x4a, 0x22, 0x0f, 0x00 }, /* ws no-w no-o16/o32 */
	{ "VERW",		SUP_80286P, OPE_M, 0x5a, 0x22, 0x0f, 0x00 }, /* ws no-w no-o16/o32 */
	{ "WAIT",		SUP_8086,	NO_PARAM, 1, 0x9b },
	{ "WBINVD",		SUP_i486,	NO_PARAM, 1, 0x0f, 0x09 },
	{ "XADD",		SUP_i486,	OPE_MR, 0x87, 0x12, 0x0f, 0xc0 }, /* bwd,s w0 */
	{ "XCHG",		SUP_8086,	OPE_XCHG, 0x87, 0x11, 0x86 }, /* bwd,s w0 */
	{ "XLATB",		SUP_8086,	NO_PARAM, 1 | DEF_DS, 0xd7 },
	{ "XOR",		SUP_8086,	OPE_ADD, 0x87, 0x11, 0x06 << 3 },
	{ "", 0, 0 }
};
/* このテーブルは必ず大文字で */

static struct INST_TABLE setting_table[] = {
	{ "BITS",	SUP_8086, 0xe0 }, /* セクションが切り替わると連動する(セクション外でやるとデフォルト) */
	{ "INSTRSET",	SUP_8086, 0xe1 },
	{ "OPTIMIZE",	SUP_8086, 0xe2 }, /* 0:最適化なし, 1:最適化あり */
	{ "FORMAT",	SUP_8086, 0xe3 }, /* BIN, COFF */
	{ "PADDING",	SUP_8086, 0xe4 }, /* set, len, byte, byte, byte,... */
	{ "PADSET",	SUP_8086, 0xe5 }, /* セクションが切り替わると連動する(セクション外でやるとデフォルト) */
	{ "OPTION",	SUP_8086, 0xe6 },
	{ "SECTION",	SUP_8086, 0xe7 },
	{ "ABSOLUTE",	SUP_8086, 0xe8 },
	{ "FILE",	SUP_8086, 0xe9 },
	{ "", 0, 0 }
};

//
// アセンブラ命令をセットする
//
UCHAR *setinstruct(UCHAR *s, UCHAR *t, UCHAR *inst)
{
	LOG_DEBUG("\ns:%s\nt:%s\ninst:%s\n",
		  dump_ptr("s", s).c_str(),
		  dump_ptr("t", t).c_str(),
		  dump_ptr("inst", inst).c_str());
	UCHAR c, *i1 = inst + OPCLENMAX;
	while (s < t) {
		c = *s;
		if (c <= ' ')
			break;
		s++;
		if ('a' <= c && c <= 'z')
			c += 'A' - 'a';
		if (inst >= i1)
			return NULL;
		*inst++ = c;
	}
	while (inst < i1)
		*inst++ = '\0';

	UCHAR* v = skipspace(s, t);
	LOG_DEBUG("\nreturn:%s\n",
		  dump_ptr("v", v).c_str());
	return v;
}

static unsigned char *cpu_name[] = {
	(UCHAR*) "8086",
	(UCHAR*) "80186",
	(UCHAR*) "80286",
	(UCHAR*) "80286p",
	(UCHAR*) "i386",
	(UCHAR*) "i386p",
	(UCHAR*) "i486",
	(UCHAR*) "i486p", /* 0〜7 */
	(UCHAR*) "Pentium",
	(UCHAR*) "PentiumPro",
	(UCHAR*) "PentiumMMX",
	(UCHAR*) "Pentium2",
	(UCHAR*) "Pentium3",
	(UCHAR*) "Pentium4", /* 8〜13 */
	NULL
};

static std::array<const UCHAR*, 3> format_type = {
     reinterpret_cast<const UCHAR*>("BIN"),
     reinterpret_cast<const UCHAR*>("WCOFF"),
     NULL
};

//
// NASKの文法に基づき一文を分解する、次の行へのポインタを返す
//
UCHAR *decoder(struct STR_STATUS *status, UCHAR *src, struct STR_DECODE *decode)
{
	LOG_DEBUG("in\n");
	int i, j, k;
	struct INST_TABLE *itp;
	UCHAR instruct[OPCLENMAX], *p, **pq, *q, c, cc;

	decode->instr = NULL; /* 空行もしくは注釈行 */
	decode->error = 0;
	decode->prefix = 0;
	decode->label = NULL;

setting:
	src = skipspace(src, status->src1);
	if (src >= status->src1) {
		LOG_DEBUG("src >= status->src1: goto fin\n");
		goto fin;
	}
	if (*src == '[') {
		/* BITS指定など */
		LOG_DEBUG("*src == '[': supposed to specify BITS\n");
		src++;
		if ((p = setinstruct(skipspace(src, status->src1), status->src1, instruct)) != NULL) {
			for (itp = setting_table; itp->opecode[0]; itp++) {
				c = 0;
				for (i = 0; i < OPCLENMAX; i++)
					c |= itp->opecode[i] ^ instruct[i];
				if (c == 0) {
					/* 擬似命令発見 */
					switch (itp->param[0]) {
					case 0xe0:
						/* BITS */
						if (getconst(&p, status, &i))
								goto error2;
						if (i != 16 && i != 32)
								goto error2;
						status->bits = i;
						goto skipline; /* 後続をちゃんとチェックしていない */

					case 0xe1:
						/* INSTRSET */
						pq = cpu_name;
			format2:
						if (p + 4 >= status->src1) { /* INSTRSETは最低でも2文字はあるだろう */
			error2:
							decode->error = 2; /* parameter error */
							goto skipline;
						}
						c = *p++;
						if (c != 0x22 && c != 0x27)
							goto error2;
						src = p;
						i = 0;
						do {
							q = *pq++;
							do {
								if (p >= status->src1)
									goto next_cpu;
								if (*p++ != *q++)
									goto next_cpu;
							} while (*q);
							if (*p == c) {
								if (itp->param[0] == 0xe1)
									status->support = status->expr_status.support = 1 << i;
								else
									status->format = i;
								goto skipline; /* 後続をちゃんとチェックしていない */
							}
			next_cpu:
							p = src;
							i++;
						} while (*pq);
						goto error2;

					case 0xe2:
						/* OPTIMIZE */
						if (getconst(&p, status, &i))
							goto error2;
						status->optimize = i;
						goto skipline; /* 後続をちゃんとチェックしていない */

					case 0xe3:
						/* FORMAT */
					     	//FIXME
						//pq = format_type;
						goto format2;

					case 0xe6:
						/* OPTION */
						if (getconst(&p, status, &i))
							goto error2;
						status->expr_status.option = status->option = i;
						goto skipline; /* 後続をちゃんとチェックしていない */

					case 0xe7:
						/* SECTION */
						/* セクション名とalignを認識 */
						for (j = 0; &p[j] < status->src1; j++) {
							if (p[j] <= ' ')
								break;
							if (p[j] == ']')
								break;
						}
						if (j > 16)
							goto error1; /* セクション名が長すぎる */
						if (&p[j] >= status->src1)
							goto error1; /* 文法がおかしい */
						for (i = 0; i < MAX_SECTIONS; i++) {
							if (decode->sectable[i].name[0] == '\0') {
								decode->sectable[i].name_len = j;
								decode->sectable[i].name[j] = '\0';
								k = j;
								while (--k >= 0)
									decode->sectable[i].name[k] = p[k];
								break;
							}
							if (decode->sectable[i].name_len != j)
								continue;
							c = 0;
							for (k = 0; k < j; k++)
								c |= p[k] ^ decode->sectable[i].name[k];
							if (c == 0)
								break;
						}
						if (i >= MAX_SECTIONS)
							goto error1; /* セクション数が多すぎる */
						p = skipspace(p + j, status->src1);
						c = 0xff;
						cc = 0;
						if (p >= status->src1)
							goto error1; /* 文法がおかしい */
						if (*p == 'a' || *p == 'A') {
							/* align指定 */
							/* getconst()はskipspaceを含む */
							p += 5;
							if (p >= status->src1)
								goto error1; /* 文法がおかしい */
							p = skipspace(p, status->src1);
							if (p >= status->src1)
								goto error1; /* 文法がおかしい */
							if (*p != '=')
								goto error1; /* 文法がおかしい */
							p++;
							if ((cc = getconst(&p, status, &j)) == 0) {
								c = 0;
								while (j) {
									c++;
									j >>= 1;
								}
							}
						}
						if (decode->sectable[i].align0 == -1 && c != 0xff)
							decode->sectable[i].align0 = c;

						// FIXME:
						decode->instr = itp;
						itp->param[1] = i;
						if (cc)
							goto error2;
						goto skipline; /* とりあえず読み飛ばす */

					case 0xe9:
						/* FILE */
						c = *p;
						if (c != 0x22 && c != 0x27)
							goto error2;
						status->file_p = ++p;
						while (p < status->src1 && *p != c && *p != '\n')
							p++;
						status->file_len = p - status->file_p;
						if (p >= status->src1)
							goto error2;
						if (*p != c)
							goto error2;
						goto skipline; /* とりあえず読み飛ばす */
					}
				}
			}
		}
		goto error1;
	}
	if (*src == ';') {
		LOG_DEBUG("*src == ';': semi-colon is used for comments\n");
		c = 1;
		if (++src + 5 < status->src1) {
			c = 0;
			for (i = 0; i < 5; i++)
				c |= src[i] - "%NASK"[i];
		}
		if (c == 0) {
			src += 5;
			goto setting; /* 拡張オプション検出 */
		}

skipline:
		/* 全文註釈 */
		while (src < status->src1 && *src != '\n')
			src++;
fin:
		if (src < status->src1 && *src == '\n')
			src++;
		return src;
	}
	if (*src == '\n') {
		LOG_DEBUG("*src == '\n': empty line\n");
		goto fin; /* 空行 */
	}
	if (*src == '#') {
		LOG_DEBUG("*src == '#': sharp is used for comments\n");
		goto skipline; /* I.Tak.さんの要望 [OSASK 5543] */
	}

	/* 一般形式 */
research:
	LOG_DEBUG("research: normal format assembly\n");
	if ((p = setinstruct(src, status->src1, instruct)) != 0) {
		// "instruction" as INST_TABLE
		for (itp = instruction; itp->opecode[0]; itp++) {
			c = 0;
			for (i = 0; i < OPCLENMAX; i++) {
				c |= itp->opecode[i] ^ instruct[i];
			}
			if (c == 0 && (itp->support & status->support) != 0) {
				/* ニーモニック発見 */
//#ifdef DEBUG
// 				for (UCHAR elem : itp->param) {
// 					if (elem != 0x00) {
// 						LOG_DEBUG("found mnemonic! param: 0x%02x \n", elem);
// 					} else {
// 						break;
// 					}
// 				}
//#endif /* DEBUG */
				decode->instr = itp;
				decode->param = p;
				LOG_DEBUG("\np: %s\ndecode->param:%s\n",
					  dump_ptr("", p).c_str(),
					  dump_ptr("", decode->param).c_str());

				LOG_DEBUG("finished to set decode: \n%s\n", decode->to_string().c_str());

				/* 簡易判定 */
				if (status->expr_status.dollar_label0 == 0xffffffff) {
					if (itp->param[0] == OPE_ALIGN) {
						LOG_DEBUG("need_dollar0");
						goto need_dollar0;
					}
					for (q = p; q < status->src1 && *q != '\n'; q++) {
						if (*q == '$') {
			need_dollar0:
							status->expr_status.dollar_label0 = nextlabelid++;
							break;
						}
					}
				}
				LOG_DEBUG("itp's first parameter: 0x%02x\n", itp->param[0]);
				if ((c = itp->param[0]) != 0) {
					src = p;
					if (c == PREFIX) {
						LOG_DEBUG("PREFIX code: 0x%02x \n", c);
						decode->instr = NULL;
						decode->prefix |= 1 << itp->param[1];
						if (src < status->src1 && *src != '\n' && *src != ';')
							goto research; /* 何かが続いていれば、さらに検索 */
						goto skipline;
					}
					if (c < 0x40) {
						/* 通常命令, パラメータは最大で3つ */
						LOG_DEBUG("NORMAL code: 0x%02x \n", c);
						i = 0;
						if (src < status->src1 && *src != '\n' && *src != ';') {
							/* 何かが続いている */
							for (;;) {
								decode->prm_p[i] = src;
								j = getparam(&src, status->src1, &decode->gvalue[i],
									     status->expression,    // STR_TERM
									     status->mem_expr,	    // STR_TERM
									     &status->ofsexpr,	    // STR_OFSEXPR
									     &status->expr_status); // STR_DEC_EXPR_STATUS
								LOG_DEBUG("NORMAL code result: %s \n", dump_bit(j).c_str());

								if (j == 0)
									goto error2;

								LOG_DEBUG("       code: 0x%02x \n", j);
								decode->gparam[i++] = j;
								if (src >= status->src1)
									break;
								cc = *src;
								if (cc == '\n')
									break;
								if (cc == ';')
									break;
								if (cc != ',')
									goto error2;
								src = skipspace(src + 1, status->src1);
								if (i == 3)
									goto error1; /* 余計な記述がある */
							}
						}
						decode->flag = i;
						cc = table_prms[c];
						if (cc < 4) {
							if (cc != decode->flag)
								goto error2;
						}
					}
					goto skipline;
				}
				goto error1;
			}
		}
	}
	if (decode->label == NULL) {
		LOG_DEBUG("found label: %s", src);
		decode->label = src; /* ラベル発見 */
		while (*src > ' ' && src < status->src1)
			src++;

		src = skipspace(src, status->src1);
		if (src >= status->src1 || *src == '\n' || *src == ';') {
				goto skipline; /* ラベル定義 */
		}
		goto research;
	}
error1:
	decode->error = 1; /* 余計な記述がある(空行であるべきなのに) */
	goto skipline;
}

// "label: hoge" はラベルを登録するが、エラー1
// "label	 hoge" もラベルを登録するが、エラー1
// "hoge"はラベルを登録せずにエラー1
void put4b(UINT i, UCHAR *p)
{
	p[0] =  i        & 0xff;
	p[1] = (i >>  8) & 0xff;
	p[2] = (i >> 16) & 0xff;
	p[3] = (i >> 24) & 0xff;
	LOG_DEBUG("returned p[0-3]: 0x%02x, 0x%02x, 0x%02x, 0x%02x\n", p[0], p[1], p[2], p[3]);
	return;
}

// nask32bitInt
void put4b(UINT i, nask32bitInt* p, size_t from)
{

	     switch (from) {
	case 0:
	     p->byte[0] = i	    & 0xff;
	     p->byte[1] = (i >>  8) & 0xff;
	     p->byte[2] = (i >> 16) & 0xff;
	     p->byte[3] = (i >> 24) & 0xff;
	     LOG_DEBUG("put4b from index[0] \n");
	     break;
	case 1:
	     p->byte[1] = i	        & 0xff;
	     p->byte[2] = (i >>	8)      & 0xff;
	     p->byte[3] = (i >> 16)     & 0xff;
	     (++p)->byte[0] = (i >> 24) & 0xff;
	     LOG_DEBUG("put4b from index[1] \n");
	     break;
	case 2:
	     p->byte[2]     = i	        & 0xff;
	     p->byte[3]     = (i >>  8) & 0xff;
	     (++p)->byte[0] = (i >> 16) & 0xff;
	     p->byte[1]     = (i >> 24) & 0xff;
	     LOG_DEBUG("put4b from index[2] \n");
	     break;
	case 3:
	     p->byte[3]     = i	        & 0xff;
	     (++p)->byte[0] = (i >> 8)  & 0xff;
	     p->byte[1]     = (i >> 16) & 0xff;
	     p->byte[2]     = (i >> 24) & 0xff;
	     LOG_DEBUG("put4b from index[3] \n");
	     break;
	default:
	     break;
	}

	return;
}

UINT get4b(UCHAR *p)
{
	return p[0] | p[1] << 8 | p[2] << 16 | p[3] << 24;
}

struct STR_TERM *decode_expr(UCHAR **ps, UCHAR *s1, struct STR_TERM *expr, int *priority, struct STR_DEC_EXPR_STATUS *status)
{
	UCHAR *s = *ps, c, d, *t, buf8[8];
	struct STR_TERM *expr0 = expr, *pterm;
	int prio0 = 0, prio1, i, j, k;
	static char symbols[] = "\"'+-*/%&|^(){}[]<>,;:";
	static struct STR_OPELIST {
		char str[3], prio, num;
	} opelist0[] = {
		{ "|>", 12, 18 }, { "&>", 12, 17 },
		{ "<<", 12, 16 }, { ">>", 12, 17 },
		{ "//", 14,  9 }, { "%%", 14, 10 },
		{ "+",  13,  4 }, { "-",  13,  5 },
		{ "*",  14,  6 }, { "/",  14,  7 },
		{ "%",  14,  8 }, { "^",   7, 14 },
		{ "&",   8, 12 }, { "|",   6, 13 },
		{ "",    0,  0 }
	}, opelist1[] = {
		{ "|>", 12, 18 }, { "&>", 12, 17 },
		{ "<<", 12, 16 }, { ">>", 12, 18 },
		{ "//", 14,  7 }, { "%%", 14,  8 },
		{ "+",  13,  4 }, { "-",  13,  5 },
		{ "*",  14,  6 }, { "/",  14,  9 },
		{ "%",  14, 10 }, { "^",   7, 14 },
		{ "&",   8, 12 }, { "|",   6, 13 },
		{ "",    0,  0 }
	};
	struct STR_OPELIST *popelst, *opelist = opelist0;
	static struct STR_KEYWORD {
		int support;
		char keyword[8][8];
	} keywordlist[] = {
		SUP_i386,	"EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI",
		SUP_8086,	"AX", "CX", "DX", "BX", "SP", "BP", "SI", "DI",
		SUP_8086,	"AL", "CL", "DL", "BL", "AH", "CH", "DH", "BH",
		SUP_8086,	"ES", "CS", "SS", "DS", "", "", "", "",
		SUP_i386,	"FS", "GS", "", "", "", "", "", "",
		SUP_i386,	"CR0", "CR1", "CR2", "CR3", "CR4", "CR5", "CR6", "CR7",
		SUP_i386,	"DR0", "DR1", "DR2", "DR3", "DR4", "DR5", "DR6", "DR7",
		SUP_i386,	"TR0", "TR1", "TR2", "TR3", "TR4", "TR5", "TR6", "DR7",
		SUP_8086,	"BYTE", "WORD", "SHORT", "NEAR", "FAR", "NOSPLIT", "$", "$$",
		SUP_8086,	"DWORD", "", "", "", "QWORD", "..$", "TWORD", "TO",
		SUP_8086,	"ST0", "ST1", "ST2", "ST3", "ST4", "ST5", "ST6", "ST7",	/* 80-87 */
	//	SUP_MMX,	"MM0", "MM1", "MM2", "MM3", "MM4", "MM5", "MM6", "MM7",	/* 88-95 */
		0, 			"", "", "", "", "", "", "", ""
	};
	struct STR_KEYWORD *pkw;

	if (priority)
		prio0 = *priority;
	if (status->option & 1)
		opelist = opelist1;

single:
	s = skipspace(s, s1);
	c = '\0';
	if (s < s1)
		c = *s++;
	if (c == '+') {
		/* 単項プラス */
		expr->value = 0; /* s+ */
single1:
		expr->term_type = 1; /* operator */
		expr++;
		goto single;
	}
	if (c == '-') {
		/* 単項マイナス */
		expr->value = 1; /* s- */
		goto single1;
	//	expr->term_type = 1; /* operator */
	//	expr++;
	//	goto single;
	}
	if (c == '~') {
		/* 単項NOT */
		expr->value = 2; /* s~ */
		goto single1;
	//	expr->term_type = 1; /* operator */
	//	expr++;
	//	goto single;
	}

	/* 第1項 */
	for (i = 0; (UINT) i < sizeof symbols; i++) {
		if (c == symbols[i])
			goto symbol;
	}
	if (c == 0)
		goto error;

	/* number, keyword, label */
	t = s - 1;
	while (s < s1) {
		if ((c = *s) <= ' ')
			break;
		for (i = 0; (UINT) i < sizeof symbols; i++) {
			if (c == symbols[i])
				goto token_end;
		}
		s++;
	}

token_end:
	for (i = 0; i < 8; i++) {
		d = 0;
		if (&t[i] < s) {
			d = t[i];
			if ('a' <= d && d <= 'z')
				d += 'A' - 'a';
		}
		buf8[i] = d;
	}
	j = 0;
	for (pkw = keywordlist; pkw->support; pkw++, j += 8) {
		if ((status->support & pkw->support) == 0)
			continue;
		for (i = 0; i < 8; i++) {
			d = 0;
			for (k = 0; k < 8; k++)
				d |= buf8[k] ^ pkw->keyword[i][k];
			if (d == 0) {
				i += j;
				goto find_keyword;
			}
		}
	}

	/* ラベルか、数字 */
	k = s - t;
	d = t[0];
	if ('0' <= d && d <= '9') {
		if (k >= 2) {
			if (t[1] == 'X' || t[1] == 'x') {
				t += 2;
				if (k -= 2)
					goto num_hex;
				goto error;
			}
			d = s[-1];
			if ('a' <= d && d <= 'z')
				d += 'A' - 'a';
			k--;
			if (d == 'H')
				goto num_hex;
			j = 2;
			if (d == 'B')
				goto num_all;
			j = 8;
			if (d == 'Q')
				goto num_all;
			k++;
		}
		j = 10;
		goto num_all;
	}
	if (d == '$' && k >= 2 /* && '0' <= t[1] && t[1] <= '9' */) {
		t++;
		k--;
num_hex:
		j = 16;
num_all:
		i = 0;
		do {
			d = *t++;
			if ('0' <= d && d <= '9')
				d -= '0';
			else if ('A' <= d && d <= 'Z')
				d += 10 - 'A';
			else if ('a' <= d && d <= 'z')
				d += 10 - 'a';
			else if (d == '_')
				continue;
			else
				goto error;
			if (d >= j)
				goto error;
			i = i * j + d;
		} while (--k);
constant:
		expr->term_type = 0; /* constant */
		expr->value = i;
		expr++;
		goto search_oper;
	}

	/* label */
	expr->term_type = 3 /* label */;
	expr->value = label2id(k, t, 0);
	expr++;
	goto search_oper;

find_keyword:
	if (i == 70) { /* $ */
		expr->term_type = 3; /* label */
		expr->value = status->dollar_label0;
		expr++;
		goto search_oper;
	}
	if (i == 71) { /* $$ */
		expr->term_type = 3; /* label */
		expr->value = status->dollar_label2;
		expr++;
		goto search_oper;
		goto search_oper;
	}
	if (i == 77) { /* ..$ */
		if (status->dollar_label1 == 0xffffffff)
			status->dollar_label1 = nextlabelid++;
		expr->term_type = 3; /* label */
		expr->value = status->dollar_label1;
		expr++;
		goto search_oper;
	}
	if (32 <= i && i <= 33) {
		/* FS, GS */
		i -= 4;
	}
	if (i < 24) {
		/* reg32, reg16, reg8 */
term_reg:
		expr->term_type = 2; /* reg */
		expr->value = i;
		expr++;
		goto search_oper;
	}
	if (i < 36) {
		/* sreg */
		if (c != ':')
			goto term_reg;
		s++;
		if (status->seg_override != -1)
			goto error;
		status->seg_override = i - 24;
		goto single;
	}
	if (i < 64)
		goto term_reg;
//	if (i == 64 || i == 65)
//		i += 36 - 64;
	if (i < 66) {
		/* datawidth */
datawidth:
		if (status->datawidth != -1)
			goto error;
		status->datawidth = i - 63;
		goto single;
	}
	if (i < 69) {
		if (status->range != -1)
			goto error;
		status->range = i - 66; /* 66:SHORT, 67:NEAR, 68:FAR */
		goto single;
	}
	if (i == 69) {
		if (status->nosplit)
			goto error;
		status->nosplit = 1;
		goto single;
	}
//	if (i < 72) {
//		/* $, $$ */
//		expr->term_type = 3; /* label */
//		expr->value = - 16 + 70 - i; /* -16:$, -17:$$ */
//		expr++;
//		if (i == 70)
//			status->use_dollar = 1;
//		goto search_oper;
//	}
	if (i < 78) {
		i += 63 + 4 - 72;
		goto datawidth;
	}
	if (i == 79) { /* TO */
		if (status->to_flag)
			goto error;
		status->to_flag++;
		goto single;
	}
//	if (i < 96) {
		/* STx, MMx */
		i += 72 - 80;
		goto term_reg;
//	}

symbol:
	if (c == '(') {
		/* 括弧 */
		expr = decode_expr(&s, s1, expr, NULL, status);
	//	s = skipspace(s, s1);
		c = '\0';
		if (s < s1)
			c = *s++;
		if (c != ')')
			expr = NULL;
		if (expr == NULL)
			return NULL;
	} else if (c == 0x22 || c == 0x27) {
		/* " ' */
		i = 0;
		k = 0;
		for (;;) {
			if (s >= s1)
				goto error;
			if (*s == c) {
				s++;
				goto constant;
			}
			if (k == 4)
				goto error;
			((char *) &i)[k++] = *s++;
		}
	} else {
		s--;
error:
		expr = NULL;
		goto fin;
	//	*ps = s;
	//	return NULL;
	}

search_oper:
	s = skipspace(s, s1);
	c = d = '\0';
	if (s < s1)
		c = *s++;
	if (s < s1)
		d = *s;
	if (c == 0)
		goto fin;

	for (popelst = opelist; ; popelst++) {
		if (popelst->str[0] == '\0') {
			*ps = s - 1;
			return expr;
		}
		if (c == popelst->str[0]) {
			if (popelst->str[1] == '\0')
				break;
			if (d == popelst->str[1]) {
				s++;
				break;
			}
		}
	}
	prio1 = popelst->prio;
	c = popelst->num;

new_operator:
	if (prio0 >= prio1) {
	//	if (priority)
			*priority = - prio1; /* 親の演算子変更を通知 */
		expr->value = c;
		goto fin;
	//	*ps = s;
	//	return expr; /* 一番最後の後ろが新演算子 */
	}

	/* 演算子を前に出す */
	pterm = expr++;
	do {
		*(pterm + 1) = *pterm;
		pterm--;
	} while (expr0 <= pterm);
	expr0->term_type = 1; /* operator */
	expr0->value = c;

	/* 第2項 */
	expr = decode_expr(&s, s1, expr, &prio1, status);
//	s = skipspace(s, s1);
	if (prio1 < 0) {
		prio1 = - prio1;
		c = expr->value;
		goto new_operator;
	}
fin:
	*ps = s;
	return expr;
}

//
// 4つのコンディション、一つのint、2つの係数
// これを計算することで、ベース、スケールドインデックス、dispが求められる。
//
// ラベルが混ざったら不明
// ラベル計算時：最大と最小を出す。レジスタは0扱いで消去。
//
void init_ofsexpr(struct STR_OFSEXPR* ofsexpr)
{
	ofsexpr->scale[0] = 0;
	ofsexpr->scale[1] = 0;
	ofsexpr->disp = 0;
//	ofsexpr->extlabel = 0;
	ofsexpr->reg[0] = 0xff;
	ofsexpr->reg[1] = 0xff;
	ofsexpr->dispflag = 0;
	ofsexpr->err = 0;
	LOG_DEBUG("finished to init ofexpr: \n%s\n", ofsexpr->to_string().c_str());

	return;
}

void calc_ofsexpr(struct STR_OFSEXPR *ofsexpr, struct STR_TERM **pexpr, char nosplit)
{
	struct STR_TERM *expr = *pexpr;
	struct STR_OFSEXPR tmp, tmp2;
	int i, j;

	j = expr->term_type;
	i = expr->value;
	*pexpr = ++expr;
	switch (j) {
	case 0: /* constant number */
		LOG_DEBUG("expr->term_type:%d, expr->value:%d, constant number \n", j, i);
		init_ofsexpr(ofsexpr);
		ofsexpr->disp = i;
		return;
	case 1: /* operator */
		LOG_DEBUG("expr->term_type == %d, operator \n", j);
		calc_ofsexpr(ofsexpr, pexpr, nosplit);
		if (i >= 4) {
			calc_ofsexpr(&tmp, pexpr, nosplit);
			j = tmp.disp;
			if (i == 6 /* 二項 * */ || (12 <= i && i <= 14 /* 二項 &, |, ^ */)) {
				if (tmp.reg[0] != 0xff || (ofsexpr->reg[0] == 0xff && ofsexpr->dispflag == 0 && tmp.dispflag != 0)) {
					if (ofsexpr->reg[0] != 0xff)
						goto err1;
					tmp2 = tmp;
					tmp = *ofsexpr;
					*ofsexpr = tmp2;
					j = tmp.disp;
				}
			}
			ofsexpr->err |= tmp.err;
			ofsexpr->dispflag |= tmp.dispflag;
		//	if (i >= 5) {
		//		/* - * % // %% & | << >> */
		//		if (tmp.extlabel)
		//			goto err1;
		//	}
			if (i >= 6) {
				/* * / % // %% & | ^ << >> */
				if (tmp.reg[0] != 0xff)
					goto err1;
				if (tmp.dispflag == 0) {
					if (((i == 6 || i == 7 || i == 9) && j == 1)
						|| (i == 12 && j == -1) || (i >= 13 && j == 0)) {
						/* *1, /1, //1, &-1, |0, ^0, <<0, >>0 */
						ofsexpr->reg[0] |= 0x80;
						ofsexpr->reg[1] |= 0x80;
						return;
					}
					if (((i == 6 || i == 12) && j == 0) || (i == 13 && j == -1)) {
						/* *0, &0, |-1 */
						ofsexpr->disp = j;
						ofsexpr->scale[0] = ofsexpr->scale[1] = 0;
						ofsexpr->reg[0] = ofsexpr->reg[1] = 0xff;
					//	ofsexpr->extlabel = 0;
						ofsexpr->dispflag = 0;
						return;
					}
					if (7 <= i && i <= 10 && j == 0)
						goto err1; /* /0, %0, //0, %%0 */
					/* ^ の相殺は判定が複雑なのでやってない */
				//	if (ofsexpr->extlabel)
				//		goto err1;
					if (i == 8 || i == 10 || i == 12 || i == 13 || i == 14) {
						/* % %% & | ^ */
						if (ofsexpr->reg[0] != 0xff)
							goto err1;
					}
				}
			}
		}
		if (i >= 6 && tmp.dispflag != 0) {
			/* ラベルを含んだ式の扱い */
			if (ofsexpr->reg[0] != 0xff)
				goto err1;
			return;
		}
		switch (i) {
		case 0: /* 単項 + */
			break;
		case 1: /* 単項 - */
			ofsexpr->scale[0] *= -1;
			ofsexpr->scale[1] *= -1;
			ofsexpr->disp *= -1;
			break;
		//	if (ofsexpr->extlabel) {
	err1:
				ofsexpr->err |= 1;
		//	}
			break;
		case 2: /* 単項 ~ */
			ofsexpr->disp ^= -1;
			if ((ofsexpr->reg[0] & ofsexpr->reg[1]) != 0xff /* || ofsexpr->extlabel != 0 */)
				goto err1;
			break;
		case 4: /* 二項 + */
		addition:
			for (i = 0; i < 2; i++) {
				if (tmp.reg[i] != 0xff) {
					for (j = 0; ; j++) {
						if (j >= 2)
							goto err1;
						if (ofsexpr->reg[j] == 0xff) {
							ofsexpr->reg[j] = tmp.reg[i];
							ofsexpr->scale[j] = tmp.scale[i];
							break;
						}
						if (nosplit == 0 && (ofsexpr->reg[j] & 0x7f) == (tmp.reg[i] & 0x7f)) {
							ofsexpr->reg[j] |= 0x80;
							if ((ofsexpr->scale[j] += tmp.scale[i]) == 0) {
								if (j == 0) {
									ofsexpr->scale[0] = ofsexpr->scale[1];
									ofsexpr->reg[0] = ofsexpr->reg[1];
								}
								ofsexpr->scale[1] = 0;
								ofsexpr->reg[1] = 0xff;
							}
							break;
						}
					}
				}
			}
			ofsexpr->disp += tmp.disp;
		//	if (tmp.extlabel) {
		//		if (ofsexpr->extlabel)
		//			goto err1;
		//		ofsexpr->extlabel = tmp.extlabel;
		//	}
			break;
		case 5: /* 二項 - */
			tmp.scale[0] *= -1;
			tmp.scale[1] *= -1;
			tmp.disp *= -1;
			goto addition;
		case 6: /* 二項 * */
			ofsexpr->scale[0] *= j;
			ofsexpr->scale[1] *= j;
			ofsexpr->disp *= j;
	reg_operated:
			ofsexpr->reg[0] |= 0x80;
			ofsexpr->reg[1] |= 0x80;
			break;
		case 7: /* 二項 / */
		div_unsigned:
			if ((UINT) ofsexpr->scale[0] % (UINT) j)
				goto err1;
			ofsexpr->scale[0] /= (UINT) j;
			if ((UINT) ofsexpr->scale[1] % (UINT) j)
				goto err1;
			ofsexpr->scale[1] /= (UINT) j;
			ofsexpr->disp /= (UINT) j;
			goto reg_operated;
		case 8: /* 二項 % */
			ofsexpr->disp %= (UINT) j;
			break;
		case 9: /* 二項 // */
		div_signed:
			if ((signed int) ofsexpr->scale[0] % (signed int) j)
				goto err1;
			ofsexpr->scale[0] /= (signed int) j;
			if ((signed int) ofsexpr->scale[1] % (signed int) j)
				goto err1;
			ofsexpr->scale[1] /= (signed int) j;
			ofsexpr->disp /= (signed int) j;
			goto reg_operated;
		case 10: /* 二項 %% */
			ofsexpr->disp %= (signed int) j;
			break;
		case 12: /* 二項 & */
			ofsexpr->disp &= j;
			break;
		case 13: /* 二項 | */
			ofsexpr->disp |= j;
			break;
		case 14: /* 二項 ^ */
			ofsexpr->disp ^= j;
			break;
		case 16: /* 二項 << */
			ofsexpr->scale[0] <<= j;
			ofsexpr->scale[1] <<= j;
			ofsexpr->disp <<= j;
			while (ofsexpr->scale[0] == 0 && ofsexpr->reg[0] != 0xff) {
				ofsexpr->scale[0] = ofsexpr->scale[1];
				ofsexpr->reg[0] = ofsexpr->reg[1];
				ofsexpr->scale[1] = 0;
				ofsexpr->reg[1] = 0xff;
			}
			if (ofsexpr->scale[1] == 0) {
				ofsexpr->scale[1] = 0;
				ofsexpr->reg[1] = 0xff;
			}
			goto reg_operated;
		case 17: /* 二項 &> */
			j = 1 << j;
			goto div_unsigned;
		case 18: /* 二項 |> */
			j = 1 << j;
			goto div_signed;
		}
		break;
	case 2: /* register */
		init_ofsexpr(ofsexpr);
	//	if (i >= 64)
	//		goto err1;
		ofsexpr->reg[0] = i;
		ofsexpr->scale[0] = 1;
		break;

	case 3: /* label */
		init_ofsexpr(ofsexpr);
		ofsexpr->dispflag = 1;
		/* 無条件に不明にするのではなく、確定しているものについては認めてもいいだろう */
		/* extlabelかどうか判定する必要もある */
		break;
	}
	return;
}

//
// オペコードに続く文字列の解釈をして返す
// 返値について
//  	bit0-3:datawidth(バイト数, 15は不定)
//  	bit4-5:type (0:reg, 1:mem, 2:imm)
//  	bit6-7:range (0:default, 1:short, 2:near, 3:far)
//  	bit8:use_dollar
//  	オール0はエラーを意味する
//  	bit9-11:(mem):dispのdatawidth (1:byte, 2:word, 4:dword, 7:default)
//  	bit12-14:(mem):seg (7:default, 0〜5:seg)
//  	bit15:(mem):nosplit
//  	bit9-15:(reg):レジスタ番号
//  	bit9:(imm):extlabelか式の解釈に失敗したので*pは無効
//
int getparam(UCHAR **ps, UCHAR *s1, int *p,
	     struct STR_TERM*            expression,
	     struct STR_TERM*            mem_expr,
	     struct STR_OFSEXPR*         ofsexpr,
	     struct STR_DEC_EXPR_STATUS* status)
{
	LOG_DEBUG("%s\n", dump_ptr("**ps", *ps).c_str());
	struct STR_TERM *pe, *expr;
	int i;
	UCHAR ret, ret2, rethigh, *s = *ps;

/*	status->support =
	status->glabel_len = 0;
	status->glabel = NULL;
*/
	status->datawidth = -1;    // -1(default), 1(byte), 2(word), 4(dword)
	status->seg_override = -1; // -1(default), 0〜5
	status->range = -1;	   // -1(default), 0(short), 1(near), 2(far)
	status->nosplit = 0;	   //  0(default), 1(nosplit)
	status->use_dollar = 0;	   //  0(no use) , 1(use)
	status->to_flag = 0;

	expression[0].term_type = -1;
	pe = decode_expr(&s, s1, expression, NULL, status);
	ret = (status->range + 1) << 6 | (status->datawidth & 0x0f);
	rethigh = status->use_dollar;
	if (status->nosplit)
		goto err;
	if (pe == NULL && expression[0].term_type == -1 && s < s1 && *s == '[') {
		// メモリ検出
		// datawidthとrangeを控える
		// seg_overrideは共通
		if (mem_expr == NULL)
			goto err;
		ret = (status->range + 1) << 6 | (status->datawidth & 0x0f) | 0x10;
		s++;
		status->datawidth = -1;
		status->range = -1;
		pe = decode_expr(&s, s1, mem_expr, NULL, status);
		if (pe == NULL)
			goto err;
		if (status->range != -1)
			goto err;
		if (s >= s1)
			goto err;
		if (*s != ']')
			goto err;
		rethigh |= status->use_dollar;
		rethigh |= (status->datawidth & 0x07) << 1 | status->nosplit << 7
			| (status->seg_override & 0x07) << 4;
		s = skipspace(s + 1, s1);
		goto fin;
	}

	if (pe == NULL)
		goto err;

	/* レジスタか即値 */
	expr = expression;
	calc_ofsexpr(ofsexpr, &expr, 0);
	if (ofsexpr->err)
		goto err; /* エラー */
	if (status->to_flag) {
		if ((ofsexpr->reg[0] & ~0x07) != 72)
			goto err;
		ofsexpr->reg[0] -= 8;
		status->to_flag = 0;
	}
	if (ofsexpr->reg[0] == 0xff) {
		/* 定数 */
		i = ofsexpr->disp;
		LOG_TRACE("i:%d, ofsexpr->disp:%d \n", i, ofsexpr->disp);
	//	if (status->datawidth == -1) {
	//		ret &= 0xf0;
	//		if (-128 <= i && i <= 127)
	//			ret |= 0x01;
	//		else if (-0x8000 <= i && i <= 0x7fff)
	//			ret |= 0x02;
	//		else
	//			ret |= 0x04;
	//	} else {
			ret |= status->datawidth & 0x0f;
	//	}
		ret |= 0x20;
		LOG_DEBUG("ret: 0x%02x \n", ret);

		if (ofsexpr->dispflag != 0 /* || ofsexpr->extlabel != 0 */)
			rethigh |= 0x02;
		goto fin;
	}
	if (ofsexpr->reg[1] != 0xff || ofsexpr->scale[0] != 1
		|| ofsexpr->disp != 0 /* || ofsexpr->extlabel != 0 */) {
		/* エラー */
err:
		ret = 0x00;
		rethigh = 0;
		goto fin;
	}
	/* レジスタ */
	i = ofsexpr->reg[0] & 0x7f;
	if (i < 8)
		ret2 = 0x04; /* reg32 */
	else if (i < 16)
		ret2 = 0x02; /* reg16 */
	else if (i < 24)
		ret2 = 0x01; /* reg8 */
	else if (i < 40)
		ret2 = 0x02; /* sreg */
	else if (i < 64)
		ret2 = 0x04; /* sysreg */
	else if (i < 80)
		ret2 = 0x0a; /* stx */
	else
		ret2 = 0x08; /* mmx */
	if (status->datawidth == -1)
		ret = (ret & 0xf0) | ret2;
	else if ((ret & 0x0f) > ret2)
		goto err;
	else if ((ret & 0x0f) < ret2) {
		if (!(i < 4 || (8 <= i && i < 12)))
			goto err;
		i = (i & 0x03) | 0x08;
		ret &= 0xf0 | ret2;
		if (ret2 == 0x01)
			i += 8;
	}
	rethigh |= i << 1;
fin:
	if (status->to_flag) {
		ret = 0x00;
		rethigh = 0;
	}
	*p = i;
	*ps = s;

	int v = ret | rethigh << 8;
	std::string bit = dump_bit(v);
	LOG_DEBUG("%s", dump_getparam(bit).c_str());
	return v;
}

int testmem(struct STR_OFSEXPR *ofsexpr, int gparam, struct STR_STATUS *status, int *prefix)
/* memのa16かa32かを調べる関数(デフォルトを与える) */
/*	bit0:default DS
	bit1:default SS
	bit3:disp only
	bit4:need a16
	bit5:need a32
	bit7:no-base
	0:error
	bit4とbit5が1のとき、reg
	bit8-10:base
	bit11-13:index
	bit14-15:(a32):scale factor
*/
{
	struct STR_TERM *expr = status->mem_expr;
	UCHAR nosplit, reg[2], tmp;
	int seg, ret = 0, scale[2], i;

//	if ((gparam & 0x30) == 0) {
//		/* reg */
//		return 0x30;
//	}
	nosplit = (gparam >> 15) & 0x01;
	seg = (1 << ((gparam >> 12) & 0x07)) & 0x7f; /* bit12-14:(mem):seg (7:default, 0〜5:seg) */
	calc_ofsexpr(ofsexpr, &expr, nosplit);
	reg[0] = ofsexpr->reg[0];
	reg[1] = ofsexpr->reg[1];
	if (reg[0] != 0xff)
		reg[0] &= 0x7f;
	if (reg[1] != 0xff)
		reg[1] &= 0x7f;
	scale[0] = ofsexpr->scale[0];
	scale[1] = ofsexpr->scale[1];
	i = (gparam >> 9) & 0x07;
	if (reg[0] == 0xff) {
		ret |= 0x09; /* default DS, disp-only */
		if (i == 1)
			goto error;
		if (i == 7) {
			if (status->bits & 0x10)
				goto disponly_a16;
			goto disponly_a32;
		}
		if (i == 2) {
disponly_a16:
			ret |= 0x10; /* need a16 */
			*prefix |= 0x01000000; /* bit24:A16(暗黙) */
		}
		if (i == 4) {
disponly_a32:
			ret |= 0x20; /* need a32 */
			*prefix |= 0x02000000; /* bit25:A32(暗黙) */
		}
	} else if (reg[0] < 8) {
		if (i == 2)
			goto error;
		ret |= 0x20; /* need a32 */
		*prefix |= 0x02000000; /* bit25:A32(暗黙) */
		if (reg[1] == 0xff) {
			if (nosplit == 0) {
				if (scale[0] != 1) {
					if (reg[0] == 4 /* ESP */)
						goto error;
					scale[1] = scale[0];
					reg[1] = reg[0];
					reg[0] = 0xff;
					if (scale[0] == 2 || scale[0] == 3 || scale[0] == 5 || scale[0] == 9) {
						reg[0] = reg[1];
						scale[1]--;
					}
				}
			} else if (ofsexpr->reg[0] & 0x80) { /* reg[0]はスケールされている */
				reg[1] = reg[0];
				scale[1] = scale[0];
				reg[0] = 0xff;
			}
		} else { /* 2つのレジスタが存在する */
			if (reg[1] >= 8)
				goto error;
			if (scale[0] != 1 || scale[1] != 1) {
				if (scale[0] != 1) {
					i = scale[0];
					tmp = reg[0];
					scale[0] = scale[1];
					reg[0] = reg[1];
					scale[1] = i;
					reg[1] = tmp;
				}
				if (scale[0] != 1)
					goto error;
			} else {
				/* 両方のscaleが1 */
			//	tmp = 0xff;
				if ((ofsexpr->reg[0] & 0x80) != 0 && (ofsexpr->reg[1] & 0x80) == 0) {
					/* reg[0]はスケールされていて、reg[1]はされていない */
					tmp = reg[0];
					reg[0] = reg[1];
					reg[1] = tmp;
				}
			//	if ((ofsexpr->reg[0] & 0x80) == 0 && (ofsexpr->reg[1] & 0x80) != 0)
			//		tmp = 0;
				/* 勝手な交換を阻止したければ、NOSPLITを書け */
				if (status->optimize >= 1 && nosplit == 0) {
					/* EBPがベースなら交換 */
					if (/* tmp == 0xff && */ reg[0] == 5 && ofsexpr->disp == 0 &&
						ofsexpr->dispflag == 0 /* && ofsexpr->extlabel == 0 */) {
						reg[0] = reg[1];
						reg[1] = 5;
					}
					/* reg[1]でsegが消せるなら、さらに交換 */
					i = 1 << 3; /* DS */
					if (reg[1] == 4 || reg[1] == 5)
						/* i = 1 << 2; */ i >>= 1; /* SS */
					if (seg == i) {
						tmp = reg[0];
						reg[0] = reg[1];
						reg[1] = tmp;
					}
				}
				if (reg[1] == 4) { /* ESPがindexになってしまったのでまた交換 */
					reg[1] = reg[0];
					reg[0] = 4;
				}
			}
			if (reg[1] == 4)
				goto error;
		}
	} else if (reg[0] < 16) {
		if (i == 4)
			goto error;
		if (scale[0] != 1)
			goto error;
		if (reg[1] != 0xff && scale[1] != 1)
			goto error;
		if (reg[0] >= 14) { /* reg[0] == SI, DI */
			tmp = reg[0];
			reg[0] = reg[1];
			reg[1] = tmp;
		}
		if (reg[0] != 11 && reg[0] != 13 && reg[0] != 0xff)
			goto error; /* BX, BP */
		if (reg[1] != 14 && reg[1] != 15 && reg[1] != 0xff)
			goto error; /* SI, DI */
 		ret |= 0x10; /* need a16 */
		*prefix |= 0x01000000; /* bit24:A16(暗黙) */
	} else {
error:
		ret = 0; /* error */
		goto fin;
	}
	if (reg[0] == 0xff)
		ret |= 0x81; /* no-base, default DS */
	else {
		reg[0] &= 0x07;
		ret |= reg[0] << 8;
		ret |= 0x01; /* default DS */
		if (reg[0] == 4) /* ESP */
			ret ^= 0x03; /* default SS */
		if (reg[0] == 5) /* EBP, BP */
			ret ^= 0x03; /* default SS */
	}
	if (reg[1] == 0xff) {
		reg[1] = 4; /* ESP(no-index) */
		scale[1] = 1;
	}
	tmp = 0;
	if (ret & 0x20) {
		tmp = 4;
		if (scale[1] == 1)
			tmp = 0;
		if (scale[1] == 2)
			tmp = 1;
		if (scale[1] == 4)
			tmp = 2;
		if (scale[1] == 8)
			tmp = 3;
		if (tmp == 4)
			goto error;
	}
	ret |= (int) tmp << 14 | (int) (reg[1] & 0x07) << 11;

fin:
	*prefix |= seg << 5;
	return ret;
}

/* mem/regをa16もしくはa32に基づいて展開する関数(TTTフィールドもある) */

void putmodrm(std::unique_ptr<STR_IFDEFBUF>& ifdef, int tmret, int gparam,
	struct STR_STATUS *status, /* struct STR_OFSEXPR *ofsexpr, */ int ttt)
{
	UCHAR width, mod2 = 0x80;
	UCHAR mod, tmret1 = (tmret >> 8) & 0xff, nobase = tmret & 0x80;
//	struct STR_TERM *expr = status->mem_expr;
	static int mcode[] = {
		0x82,	0x01 /* UCHAR, const */, 0x80 /* 16bit/32bit */,
				0x01 /* UCHAR, const */, 0x40 /* 8bit */,
				0x01 /* UCHAR, const */, 0x00 /* 0bit */
	};

	ifdef->vb[0 /* 0x78(mod r/m) */] = 0x01; /* UCHAR, const */
	ifdef->vb[1 /* 0x79(sib) */] = 0x00; /* null */
	ifdef->vb[2 /* 0x7a(disp) */] = 0x00; /* null */
	ttt &= 0x07;
	ttt <<= 3;
	if ((gparam & 0x30) == 0) {
		/* reg */
		ifdef->dat[0 /* 0x78(mod r/m) */] = 0xc0 | ttt | ((gparam >> 9) & 0x07);
		goto fin;
	}
	/* mem */
//	calc_ofsexpr(ofsexpr, &expr, 0);
	width = (gparam >> 9) & 0x07;
	mod = 0x82; /* word/byte/zero */
	if (tmret & 0x10) {
		/* a16 */
		if (tmret & 0x08)
			width = 2; /* disp-only */
		else if ((tmret1 & 0x3f) == 0x25) {
			/* base:BP, no-index */
			mod = 0x02; /* word/byte */
		}
	} else {
		/* a32 */
		mod = 0x8a; /* dword/byte/zero */
		if ((tmret & 0x08) != 0 || nobase != 0)
			width = 4;
		else if ((tmret1 & 0x07) == 0x05) {
			/* base:EBP */
			mod = 0x0a; /* dword/byte */
		}
	}
	mcode[0] = mod;

	if (tmret & 0x08) {
		/* disp-only */
base_ebp:
		tmret1 &= ~0x07;
		tmret1 |= 0x05; /* base:EBP/BP */
		mod2 = 0x00;
	} else if ((tmret & 0x20) != 0 && nobase != 0)
		goto base_ebp; /* a32でbaseがない場合 */

	mod = 0;
	if (tmret & 0x10) {
		/* a16 */
		if ((tmret1 & 0x38) != 0x20) {
			/* SI, DIあり */
			if (nobase == 0) {
				if ((tmret1 & 0x07) == 0x05)
					mod |= 0x02; /* BP */
			} else
				mod |= 0x04; /* no-base */
			if ((tmret1 & 0x38) == 0x38)
				mod |= 0x01; /* + DI */
		} else {
			/* SI, DIなし */
			mod |= 0x06;
			if ((tmret1 & 0x07) == 0x03)
				mod |= 0x01; /* BX */
		}
	} else {
		/* a32 */
		if ((tmret1 & 0x38) == 0x20 && (tmret1 & 0x07) != 0x04) {
			/* sibなし(no-index && base != ESP) */
			mod |= tmret1 & 0x07;
		} else {
			/* sibあり */
			ifdef->vb[1 /* 0x79(sib) */] = 0x01; /* UCHAR, const */
			ifdef->dat[1 /* 0x79(sib) */] = tmret1;
			mod |= 0x04;
		}
	}
	mod |= ttt;
	mcode[2] = mod | mod2;
	mcode[4] = mod | 0x40;
	mcode[6] = mod;
	if (microcode90(ifdef, status->mem_expr, mcode, width)) {
		*(ifdef->bp)++ = REM_ADDR_ERR; /* 0xe5 */
	}
fin:
	return;
}

static char dsiz2mc98[] = { 0x99 & 0x07, 0x9b & 0x07, 0, 0x9d & 0x07 };

int microcode90(std::unique_ptr<STR_IFDEFBUF>& ifdef, struct STR_TERM *expr, int *def, signed char dsiz)
/* typ?は00〜04をサポート */
/* 式中のレジスタフィールドは完全に無視する */
/* def[0] : virtual-byte-code, zero-flag */
/* def[1-2] : typ2, dat2 */
/* def[3-4] : typ1, dat1 */
/* def[5-6] : typ0, dat0 */

/* dsiz == 0x0f : 自動選択に任せる */
/* dsiz == 0, 1, 2, 4 : ユーザ指定 */
/* [zero-bbb-w/d-aaa] w/d == 1でD */

/* アドレッシングでは、DWORD指定が無ければ16bitなので、悩むことはない */
/* 他は全部immの選択でしかないので、zeroは使わないし、w/dかは既に決まっている */

/* 91は、abcタイプ。c = b + 1; b, cのタイプはSHORT_DB1に固定
	...という訳にはいかないか。SHORT_DB0かもしれないから。 */
{
	struct STR_OFSEXPR ofsexpr;
	struct STR_TERM *expr0 = expr;
	UCHAR idx, vbc = def[0], c;
	int vba = vbc & 0x07, vbb = (vbc >> 4) & 0x07;
	UCHAR *bp = ifdef->bp;
	calc_ofsexpr(&ofsexpr, &expr, 0); /* 式の評価 */
	if (ofsexpr.err) {
err2:
		return 2; /* パラメータエラー */
	}
	if ((dsiz == 2 && (vbc & 0x08) != 0) || (dsiz == 4 && (vbc & 0x08) == 0)
		|| (dsiz == 0 && (vbc & 0x80 /* zero-bit */) == 0))
		return 3; /* data size error */
	if (ofsexpr.dispflag != 0) {
		if (dsiz <= 4) {
			ifdef->vb[vba] = dsiz; /* zero/UCHAR/USHORT/UINT, const */
			if (dsiz != 0) {
			//	ifdef->bp = bp;
				if (defnumexpr(ifdef, expr0, vba, (dsiz2mc98 - 1)[dsiz]))
					goto err2; /* パラメータエラー */
				bp = ifdef->bp;
			}
			goto set_vbb;
		}
		bp[0] = 0x90;
		bp[1] = 0x0f; /* 未決定 */
		bp[2] = 0x00;
		bp[3] = vbc;
		bp = libnask::put_expr(bp + 4, &expr0);
		idx = 3;
		def++;
		ifdef->vb[vba] = 0x7f;
		ifdef->vb[vbb] = 0x7f;
		do {
			if (idx == 1 && (vbc & 0x80 /* zero-bit */) == 0)
				continue;
			*bp++ = (c = def[0]) | 0x30;
			vba = def[1];
			while (c) {
				*bp++ = vba & 0xff;
				vba >>= 8;
				c--;
				def += 2;
			}
		} while (--idx);
		goto fin;
	}
	ifdef->dat[vba] = ofsexpr.disp;
	if ((dsiz == 2 && (vbc & 0x08) != 0) || (dsiz == 4 && (vbc & 0x08) == 0)
		|| (dsiz == 0 && (vbc & 0x80 /* zero-bit */) == 0))
		return 3; /* data size error */
	if ((dsiz == 0 && ofsexpr.disp != 0) || (dsiz == 1 && !(-128 <= ofsexpr.disp && ofsexpr.disp <= 127))
		|| (dsiz == 2 && !(-0x10000 <= ofsexpr.disp && ofsexpr.disp <= 0xffff)))
		*bp++ = REM_RANGE_ERR;
	if (dsiz > 4) {
		dsiz = 2;
		if (vbc & 0x08 /* d-bit */)
			dsiz = 4;
		if (-128 <= ofsexpr.disp && ofsexpr.disp <= 127)
			dsiz = 1;
		if ((vbc & 0x80 /* zero-bit */) != 0 && ofsexpr.disp == 0)
			dsiz = 0;
	}
	ifdef->vb[vba] = dsiz; /* zero/UCHAR/USHORT/UINT, const */
set_vbb:
	idx = 1;
	if (dsiz == 1)
		idx = 3;
	if (dsiz == 0)
		idx = 5;
	ifdef->vb[vbb] = def[idx + 0];
	ifdef->dat[vbb] = def[idx + 1];
fin:
	ifdef->bp = bp;
	return 0;
}

int microcode91(std::unique_ptr<STR_IFDEFBUF>& ifdef, struct STR_TERM *expr, int *def, signed char dsiz)
/* typ?は00〜04をサポート */
/* 式中のレジスタフィールドは完全に無視する */
/* def[0] : virtual-byte-code, zero-flag */
/* def[1-4] : typ2(b), dat2(b), typ2(c), dat2(c) */
/* def[5-8] : typ1(b), dat1(b), typ1(c), dat1(c) */

/* 91は、abcタイプ。c = b + 1; b, cのタイプはSHORT_DB1に固定
	...という訳にはいかないか。SHORT_DB0かもしれないから。 */
{
	struct STR_OFSEXPR ofsexpr;
	struct STR_TERM *expr0 = expr;
	UCHAR idx, vbc = def[0], c, d;
	int vba = vbc & 0x07, vbb = (vbc >> 4) & 0x07;
	UCHAR *bp = ifdef->bp;
	calc_ofsexpr(&ofsexpr, &expr, 0); /* 式の評価 */
	if (ofsexpr.err) {
err2:
		return 2; /* パラメータエラー */
	}
	if ((dsiz == 2 && (vbc & 0x08) != 0) || (dsiz == 4 && (vbc & 0x08) == 0)
		|| (dsiz == 0 && (vbc & 0x80 /* zero-bit */) == 0))
		return 3; /* data size error */
	if (ofsexpr.dispflag != 0) {
		if (dsiz <= 4) {
			ifdef->vb[vba] = dsiz; /* zero/UCHAR/USHORT/UINT, const */
			if (dsiz != 0) {
			//	ifdef->bp = bp;
				if (defnumexpr(ifdef, expr0, vba, (dsiz2mc98 - 1)[dsiz]))
					goto err2; /* パラメータエラー */
				bp = ifdef->bp;
			}
			goto set_vbb;
		}
		bp[0] = 0x91;
		bp[1] = 0x0f; /* 未決定 */
		bp[2] = 0x00;
		bp[3] = vbc;
		bp = libnask::put_expr(bp + 4, &expr0);
		idx = 3;
		def++;
		ifdef->vb[vba] = 0x7f;
		ifdef->vb[vbb] = 0x7f;
		ifdef->vb[vbb + 1] = 0x7f;
		do {
			if (idx == 1 && (vbc & 0x80 /* zero-bit */) == 0)
				continue;
			d = 2;
			do {
				*bp++ = (c = def[0]) | 0x30;
				vba = def[1];
				while (c) {
					*bp++ = vba & 0xff;
					vba >>= 8;
					c--;
				}
				def += 2;
			} while (--d);
		} while (--idx);
		goto fin;
	}

	ifdef->dat[vba] = ofsexpr.disp;
	if ((dsiz == 0 && ofsexpr.disp != 0) || (dsiz == 1 && !(-128 <= ofsexpr.disp && ofsexpr.disp <= 127))
		|| (dsiz == 2 && !(-0x10000 <= ofsexpr.disp && ofsexpr.disp <= 0xffff)))
		*bp++ = REM_RANGE_ERR;
	if (dsiz > 4) {
		dsiz = 2;
		if (vbc & 0x08 /* d-bit */)
			dsiz = 4;
		if (-128 <= ofsexpr.disp && ofsexpr.disp <= 127)
			dsiz = 1;
		if ((vbc & 0x80 /* zero-bit */) != 0 && ofsexpr.disp == 0)
			dsiz = 0;
	}
	ifdef->vb[vba] = dsiz; /* zero/UCHAR/USHORT/UINT, const */
set_vbb:
	idx = 1;
	if (dsiz == 1)
		idx = 5;
	if (dsiz == 0)
		idx = 9;
	ifdef->vb[vbb] = def[idx + 0];
	ifdef->dat[vbb] = def[idx + 1];
	ifdef->vb[vbb + 1] = def[idx + 2];
	ifdef->dat[vbb + 1] = def[idx + 3];
fin:
	ifdef->bp = bp;
	return 0;

}

static std::array<char, 7> mc98_typ = { 0x01,
					0x41,
					0x02,
					0x62,
					0x04,
					0x64,
					0x61
};

static std::array<int, 7>  mc98_min = { 0,
					-128,
					0,
					-0x10000,
					0x80, //000000, // ここ謎すぎる
					0x80, //000000,	// ここ謎すぎる
					-0x100 };

static std::array<int, 7>  mc98_max = { 0xff,
					0x7f,
					0xffff,
					0xffff,
					0x7fffffff,
					0x7fffffff,
					0xff  };

int microcode94(std::unique_ptr<STR_IFDEFBUF>& ifdef, struct STR_TERM *expr, int *def)
/* typ?は30〜34をサポート */
/* 式中のレジスタフィールドは完全に無視する */
/* extlabelも無視 */
/* def[0] : virtual-byte-code, len */
/* def[1-4] : (else) def0, def1 */
/* def[5-9] : case, def0, def1 */
/* 98〜9dもサポート */
{
	struct STR_OFSEXPR ofsexpr;
	int j = def[0], vb[2];
	UCHAR idx;
	int i = j >> 8, k;
	vb[0] = j;
	vb[1] = j >> 4;
	calc_ofsexpr(&ofsexpr, &expr, 0); /* 式の評価 */
	if (ofsexpr.err) {
err:
		return 1;
	}
	if (ofsexpr.dispflag != 0)
		goto err; /* 今はラベルが使えないから */
	idx = 0;
	j = 5;
	do {
		if (def[j] == ofsexpr.disp)
			idx = j;
		j += 5;
	} while (--i);
	def = &def[idx + 1];
	for (i = 0; i < 2; i++) {
		if ((j = vb[i] & 0x0f) < 8) {
			ifdef->vb[j] = def[0] & 0x07; /* for 30〜37 */
			ifdef->dat[j] = def[1];
			if ((k = def[0] - 0x98) >= 0) {
				ifdef->vb[j] = mc98_typ[k];
				ifdef->dat[j] = ofsexpr.disp;
				if (ofsexpr.disp < mc98_min[k] || mc98_max[k] < ofsexpr.disp)
					*(ifdef->bp)++ = REM_RANGE_ERR;
			}
		}
		def += 2;
	}
	return 0;
}

int defnumexpr(std::unique_ptr<STR_IFDEFBUF>& ifdef, struct STR_TERM *expr, UCHAR vb, UCHAR def)
/* レジスタは無視する */
{
	struct STR_OFSEXPR ofsexpr;
	struct STR_TERM *expr0 = expr;
	calc_ofsexpr(&ofsexpr, &expr, 0); /* 式の評価 */
	vb &= 0x07;
	def &= 0x07;
	if (ofsexpr.err)
		return 1;
	ifdef->vb[vb] = mc98_typ[def];
	if (ofsexpr.dispflag != 0) {
		/* ラベル検出 */
	//	if (ofsexpr.scale[0]) {
	//		return 1; /* レジスタを含んでいればエラー */
	//	}
		ifdef->vb[vb] |= 0x80;
		expr = expr0;
		ifdef->dat[vb] = libnask::put_expr(ifdef->expr[vb], &expr) - ifdef->expr[vb];
		return 0;
	}
	ifdef->dat[vb] = ofsexpr.disp;
	if (ofsexpr.disp < mc98_min[def] || mc98_max[def] < ofsexpr.disp)
	*(ifdef->bp)++ = REM_RANGE_ERR;
	return 0;
}

int getparam0(UCHAR *s, struct STR_STATUS *status)
{
	int i;
	return getparam(&s, status->src1, &i, status->expression,
		status->mem_expr, &status->ofsexpr, &status->expr_status);
}

int getconst(UCHAR **ps, struct STR_STATUS *status, int *p)
{
	int ret;
	ret = getparam(ps, status->src1, p, status->expression,
		status->mem_expr, &status->ofsexpr, &status->expr_status);
	return ret != 0x002f;
}

int testmem0(struct STR_STATUS *status, int gparam, int *prefix)
{
	return testmem(&status->ofsexpr, gparam, status, prefix);
}

/* ラベル構造 */
/* id(4bytes), len(1bytes), ... */

int label2id(int len, UCHAR *label, int extflag)
{
	int i;
	UCHAR *s, c;
	static int extlabelnext = E_LABEL0;

	if (label[0] == '.' && ((len >= 2 && label[1] != '.') || len == 1)) {
		/* local label */
	//	s = locallabelbuf;
		i = len;
	//	s += *s;
		len += locallabelbuf - locallabelbuf0;
		do {
			i--;
			locallabelbuf[i] = label[i];
		} while (i > 0);
		label = locallabelbuf0;
	}

	for (s = labelbuf0; s < labelbuf; s += s[-1]) {
		s += 5;
		if (len != s[-1])
			continue;
		c = 0;
		i = len - 1;
		do {
			c |= label[i] ^ s[i];
		} while (--i >= 0);
		if (c == 0)
			goto fin;
	}
	if (extflag)
		i = extlabelnext++;
	else
		i = nextlabelid++;
	s[0] = (i      ) & 0xff;
	s[1] = (i >>  8) & 0xff;
	s[2] = (i >> 16) & 0xff;
	s[3] = (i >> 24) & 0xff;
	s[4] = len;
	s += 5;
	i = len - 1;
	do {
		s[i] = label[i];
	} while (--i >= 0);
	labelbuf = s + len;
fin:
	return get4b(s - 5);
}

UCHAR *id2label(int id)
{
	UCHAR *s;
	for (s = labelbuf0; s < labelbuf; s += *s + 1) {
		int i = get4b(s);
		s += 4;
		if (i == id)
			goto fin;
	}
	s = NULL;
fin:
	return s;
}


/**
 * これとは別に、idから各種属性を求めることもできる。
 * defined-flag, public-flag, external-flag, const-flag,
 * opt-flag, define-ptr, external-base
 * 所属セクションに関する情報はない。値は値である。
 * COFFの場合、optが1ならdefine-ptrがセクション番号をあらわす。
 * external-baseが-1なら、[]は付かない。
 */
static struct STR_TERM *skip_expr(struct STR_TERM *expr)
{
	if (expr++->term_type == 1 /* operator */) {
		expr = skip_expr(expr);
		if (expr->value >= 4)
			expr = skip_expr(expr); /* 二項演算子 */
	}
	return expr;
}

struct STR_TERM *rel_expr(struct STR_TERM *expr, struct STR_DEC_EXPR_STATUS *status)
{
	struct STR_TERM *expr1 = skip_expr(expr), *p;
	p = expr1;
	do {
		*p = *(p - 1);
		p--;
	} while (p != expr);
	expr->term_type = 1; /* operator */
	expr->value = 5; /* 二項 - */
	if (status->dollar_label1 == 0xffffffff)
		status->dollar_label1 = nextlabelid++;
	(expr1 + 1)->term_type = 3; /* label */
	(expr1 + 1)->value = status->dollar_label1;
	return expr1 + 2;
}

static void setdec(UINT i, int n, UCHAR *s)
{
	s += n;
	do {
		*--s = (i % 10) + '0';
		if (--n == 0)
			break;
	} while (i /= 10);
	do {
		*--s = ' ';
	} while (--n);
	return;
}

static void sethex0(UINT i, int n, UCHAR *s)
{
	s += n;
	do {
		*--s = "0123456789ABCDEF"[i & 0xf];
		i >>= 4;
	} while (--n);
	return;
}
