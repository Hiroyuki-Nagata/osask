/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in a SEQUENCE,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_845 PARAMS ((rtx *));
extern rtx gen_peephole2_853 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_854 PARAMS ((rtx, rtx *));
extern rtx gen_split_855 PARAMS ((rtx *));
extern rtx gen_split_856 PARAMS ((rtx *));
extern rtx gen_split_857 PARAMS ((rtx *));
extern rtx gen_peephole2_858 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_859 PARAMS ((rtx, rtx *));
extern rtx gen_split_860 PARAMS ((rtx *));
extern rtx gen_split_862 PARAMS ((rtx *));
extern rtx gen_split_863 PARAMS ((rtx *));
extern rtx gen_split_864 PARAMS ((rtx *));
extern rtx gen_split_866 PARAMS ((rtx *));
extern rtx gen_split_867 PARAMS ((rtx *));
extern rtx gen_split_868 PARAMS ((rtx *));
extern rtx gen_split_869 PARAMS ((rtx *));
extern rtx gen_split_872 PARAMS ((rtx *));
extern rtx gen_split_873 PARAMS ((rtx *));
extern rtx gen_split_874 PARAMS ((rtx *));
extern rtx gen_split_875 PARAMS ((rtx *));
extern rtx gen_split_876 PARAMS ((rtx *));
extern rtx gen_split_877 PARAMS ((rtx *));
extern rtx gen_split_879 PARAMS ((rtx *));
extern rtx gen_split_881 PARAMS ((rtx *));
extern rtx gen_split_882 PARAMS ((rtx *));
extern rtx gen_split_883 PARAMS ((rtx *));
extern rtx gen_split_885 PARAMS ((rtx *));
extern rtx gen_split_886 PARAMS ((rtx *));
extern rtx gen_split_887 PARAMS ((rtx *));
extern rtx gen_split_889 PARAMS ((rtx *));
extern rtx gen_split_890 PARAMS ((rtx *));
extern rtx gen_split_891 PARAMS ((rtx *));
extern rtx gen_split_893 PARAMS ((rtx *));
extern rtx gen_split_894 PARAMS ((rtx *));
extern rtx gen_split_895 PARAMS ((rtx *));
extern rtx gen_split_896 PARAMS ((rtx *));
extern rtx gen_split_897 PARAMS ((rtx *));
extern rtx gen_split_898 PARAMS ((rtx *));
extern rtx gen_split_899 PARAMS ((rtx *));
extern rtx gen_split_900 PARAMS ((rtx *));
extern rtx gen_split_901 PARAMS ((rtx *));
extern rtx gen_split_902 PARAMS ((rtx *));
extern rtx gen_split_903 PARAMS ((rtx *));
extern rtx gen_split_910 PARAMS ((rtx *));
extern rtx gen_split_911 PARAMS ((rtx *));
extern rtx gen_split_912 PARAMS ((rtx *));
extern rtx gen_split_914 PARAMS ((rtx *));
extern rtx gen_split_915 PARAMS ((rtx *));
extern rtx gen_split_917 PARAMS ((rtx *));
extern rtx gen_split_918 PARAMS ((rtx *));
extern rtx gen_split_920 PARAMS ((rtx *));
extern rtx gen_split_921 PARAMS ((rtx *));
extern rtx gen_split_923 PARAMS ((rtx *));
extern rtx gen_split_924 PARAMS ((rtx *));
extern rtx gen_split_929 PARAMS ((rtx *));
extern rtx gen_split_930 PARAMS ((rtx *));
extern rtx gen_split_931 PARAMS ((rtx *));
extern rtx gen_split_936 PARAMS ((rtx *));
extern rtx gen_split_937 PARAMS ((rtx *));
extern rtx gen_split_938 PARAMS ((rtx *));
extern rtx gen_split_943 PARAMS ((rtx *));
extern rtx gen_split_944 PARAMS ((rtx *));
extern rtx gen_split_945 PARAMS ((rtx *));
extern rtx gen_split_950 PARAMS ((rtx *));
extern rtx gen_split_952 PARAMS ((rtx *));
extern rtx gen_split_954 PARAMS ((rtx *));
extern rtx gen_split_955 PARAMS ((rtx *));
extern rtx gen_split_956 PARAMS ((rtx *));
extern rtx gen_split_957 PARAMS ((rtx *));
extern rtx gen_split_958 PARAMS ((rtx *));
extern rtx gen_split_959 PARAMS ((rtx *));
extern rtx gen_split_960 PARAMS ((rtx *));
extern rtx gen_split_961 PARAMS ((rtx *));
extern rtx gen_split_962 PARAMS ((rtx *));
extern rtx gen_split_970 PARAMS ((rtx *));
extern rtx gen_split_1001 PARAMS ((rtx *));
extern rtx gen_split_1003 PARAMS ((rtx *));
extern rtx gen_split_1004 PARAMS ((rtx *));
extern rtx gen_split_1005 PARAMS ((rtx *));
extern rtx gen_split_1010 PARAMS ((rtx *));
extern rtx gen_split_1013 PARAMS ((rtx *));
extern rtx gen_split_1014 PARAMS ((rtx *));
extern rtx gen_split_1015 PARAMS ((rtx *));
extern rtx gen_split_1028 PARAMS ((rtx *));
extern rtx gen_split_1033 PARAMS ((rtx *));
extern rtx gen_split_1034 PARAMS ((rtx *));
extern rtx gen_split_1035 PARAMS ((rtx *));
extern rtx gen_split_1036 PARAMS ((rtx *));
extern rtx gen_split_1037 PARAMS ((rtx *));
extern rtx gen_split_1038 PARAMS ((rtx *));
extern rtx gen_split_1040 PARAMS ((rtx *));
extern rtx gen_split_1041 PARAMS ((rtx *));
extern rtx gen_split_1042 PARAMS ((rtx *));
extern rtx gen_split_1043 PARAMS ((rtx *));
extern rtx gen_split_1044 PARAMS ((rtx *));
extern rtx gen_split_1045 PARAMS ((rtx *));
extern rtx gen_split_1048 PARAMS ((rtx *));
extern rtx gen_split_1049 PARAMS ((rtx *));
extern rtx gen_split_1050 PARAMS ((rtx *));
extern rtx gen_split_1051 PARAMS ((rtx *));
extern rtx gen_split_1053 PARAMS ((rtx *));
extern rtx gen_split_1054 PARAMS ((rtx *));
extern rtx gen_split_1055 PARAMS ((rtx *));
extern rtx gen_split_1056 PARAMS ((rtx *));
extern rtx gen_split_1057 PARAMS ((rtx *));
extern rtx gen_split_1058 PARAMS ((rtx *));
extern rtx gen_split_1060 PARAMS ((rtx *));
extern rtx gen_split_1061 PARAMS ((rtx *));
extern rtx gen_split_1062 PARAMS ((rtx *));
extern rtx gen_split_1063 PARAMS ((rtx *));
extern rtx gen_split_1064 PARAMS ((rtx *));
extern rtx gen_split_1067 PARAMS ((rtx *));
extern rtx gen_split_1068 PARAMS ((rtx *));
extern rtx gen_split_1069 PARAMS ((rtx *));
extern rtx gen_split_1070 PARAMS ((rtx *));
extern rtx gen_split_1072 PARAMS ((rtx *));
extern rtx gen_split_1074 PARAMS ((rtx *));
extern rtx gen_split_1075 PARAMS ((rtx *));
extern rtx gen_split_1077 PARAMS ((rtx *));
extern rtx gen_split_1079 PARAMS ((rtx *));
extern rtx gen_split_1081 PARAMS ((rtx *));
extern rtx gen_split_1082 PARAMS ((rtx *));
extern rtx gen_split_1083 PARAMS ((rtx *));
extern rtx gen_split_1087 PARAMS ((rtx *));
extern rtx gen_split_1088 PARAMS ((rtx *));
extern rtx gen_split_1092 PARAMS ((rtx *));
extern rtx gen_split_1093 PARAMS ((rtx *));
extern rtx gen_split_1099 PARAMS ((rtx *));
extern rtx gen_split_1100 PARAMS ((rtx *));
extern rtx gen_split_1133 PARAMS ((rtx *));
extern rtx gen_split_1134 PARAMS ((rtx *));
extern rtx gen_split_1135 PARAMS ((rtx *));
extern rtx gen_split_1136 PARAMS ((rtx *));
extern rtx gen_split_1155 PARAMS ((rtx *));
extern rtx gen_split_1156 PARAMS ((rtx *));
extern rtx gen_split_1157 PARAMS ((rtx *));
extern rtx gen_split_1158 PARAMS ((rtx *));
extern rtx gen_split_1162 PARAMS ((rtx *));
extern rtx gen_split_1163 PARAMS ((rtx *));
extern rtx gen_peephole2_1164 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1165 PARAMS ((rtx, rtx *));
extern rtx gen_split_1178 PARAMS ((rtx *));
extern rtx gen_split_1179 PARAMS ((rtx *));
extern rtx gen_split_1181 PARAMS ((rtx *));
extern rtx gen_split_1182 PARAMS ((rtx *));
extern rtx gen_peephole2_1207 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1208 PARAMS ((rtx, rtx *));
extern rtx gen_split_1214 PARAMS ((rtx *));
extern rtx gen_split_1218 PARAMS ((rtx *));
extern rtx gen_split_1219 PARAMS ((rtx *));
extern rtx gen_split_1221 PARAMS ((rtx *));
extern rtx gen_split_1222 PARAMS ((rtx *));
extern rtx gen_split_1224 PARAMS ((rtx *));
extern rtx gen_split_1225 PARAMS ((rtx *));
extern rtx gen_split_1227 PARAMS ((rtx *));
extern rtx gen_split_1228 PARAMS ((rtx *));
extern rtx gen_split_1230 PARAMS ((rtx *));
extern rtx gen_split_1231 PARAMS ((rtx *));
extern rtx gen_split_1232 PARAMS ((rtx *));
extern rtx gen_split_1236 PARAMS ((rtx *));
extern rtx gen_split_1237 PARAMS ((rtx *));
extern rtx gen_split_1238 PARAMS ((rtx *));
extern rtx gen_split_1239 PARAMS ((rtx *));
extern rtx gen_split_1240 PARAMS ((rtx *));
extern rtx gen_split_1241 PARAMS ((rtx *));
extern rtx gen_peephole2_1242 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1243 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1244 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1245 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1246 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1247 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1248 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1249 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1250 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1251 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1252 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1253 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1254 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1255 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1256 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1257 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1258 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1259 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1260 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1261 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1262 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1263 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1264 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1265 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1266 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1267 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1268 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1269 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1270 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1271 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1272 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1273 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1274 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1275 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1276 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1277 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1278 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1279 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1280 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1281 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1282 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1283 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1284 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1285 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1286 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1287 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1288 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1289 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1290 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1291 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1292 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1293 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1294 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1295 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1296 PARAMS ((rtx, rtx *));
extern rtx gen_peephole2_1297 PARAMS ((rtx, rtx *));
extern rtx gen_split_1306 PARAMS ((rtx *));
extern rtx gen_split_1307 PARAMS ((rtx *));
extern rtx gen_split_1308 PARAMS ((rtx *));
extern rtx gen_split_1309 PARAMS ((rtx *));
extern rtx gen_split_1310 PARAMS ((rtx *));
extern rtx gen_split_1311 PARAMS ((rtx *));
extern rtx gen_split_1312 PARAMS ((rtx *));
extern rtx gen_split_1313 PARAMS ((rtx *));



static int recog_1 PARAMS ((rtx, rtx, int *));
static int
recog_1 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L10929;
    case REG:
      goto L10930;
    default:
     break;
   }
 L10842: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L139;
    }
 L10852: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1074;
    }
 L10853: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L354;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L359;
    }
 L10879: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1101;
    }
  goto ret0;

 L10929: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L342;
    }
  goto L10852;

 L342: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L343;
    }
 L346: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_no_elim_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L347;
    }
  x1 = XEXP (x0, 0);
  goto L10852;

 L343: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 49;
    }
  x1 = XEXP (x0, 1);
  goto L346;

 L347: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 50;
    }
  x1 = XEXP (x0, 0);
  goto L10852;

 L10930: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 18)
    goto L1105;
  goto L10842;

 L1105: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 12)
    goto L1106;
  x1 = XEXP (x0, 0);
  goto L10842;

 L1106: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1107;
    }
  x1 = XEXP (x0, 0);
  goto L10842;

 L1107: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 166;
    }
  x1 = XEXP (x0, 0);
  goto L10842;

 L139: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 9)
    goto L140;
  x1 = XEXP (x0, 0);
  goto L10852;

 L140: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case CCFPmode:
      goto L10931;
    case CCFPUmode:
      goto L10932;
    default:
      break;
    }
 L219: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 18
      && (TARGET_80387))
    {
      return 30;
    }
  x1 = XEXP (x0, 0);
  goto L10852;

 L10931: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == COMPARE)
    goto L154;
  goto L219;

 L154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10933;
    case DFmode:
      goto L10934;
    case XFmode:
      goto L10935;
    case TFmode:
      goto L10936;
    default:
      break;
    }
 L141: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L142;
    }
  goto L219;

 L10933: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L155;
    }
  goto L141;

 L155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L156;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L156: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 20;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L10934: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L168;
    }
  goto L141;

 L168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L169;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L169: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 22;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L10935: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L187;
    }
  goto L141;

 L187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L188;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L188: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 25;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L10936: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L194;
    }
  goto L141;

 L194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, TFmode))
    {
      operands[2] = x3;
      goto L195;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L195: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 26;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const0_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L143;
    }
  goto L219;

 L143: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 18;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L219;

 L10932: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == COMPARE)
    goto L206;
  goto L219;

 L206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L207;
    }
  goto L219;

 L207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L208;
    }
  goto L219;

 L208: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 28;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L219;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L10937;
 L350: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L351;
    }
  x1 = XEXP (x0, 0);
  goto L10853;

 L10937: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L1075;
    case PLUS:
      goto L1595;
    case MINUS:
      goto L2060;
    case AND:
      goto L2982;
    case IOR:
      goto L3351;
    case XOR:
      goto L3621;
    case NEG:
      goto L3881;
    case NOT:
      goto L4340;
    case ASHIFT:
      goto L4519;
    case ASHIFTRT:
      goto L4868;
    case LSHIFTRT:
      goto L5174;
    case ROTATE:
      goto L5370;
    case ROTATERT:
      goto L5514;
    default:
     break;
   }
  goto L350;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1076;
    }
  goto L350;

 L1076: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 162;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L1595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1596;
    }
  goto L350;

 L1596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1597;
    }
  goto L350;

 L1597: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 215;
    }
 L1611: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 216;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L2060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2061;
    }
  goto L350;

 L2061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2062;
    }
  goto L350;

 L2062: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 243;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2983;
    }
  goto L350;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2984;
    }
  goto L350;

 L2984: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (AND, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 296;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L3351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3352;
    }
  goto L350;

 L3352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L3353;
    }
  goto L350;

 L3353: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (IOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 317;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3622;
    }
  goto L350;

 L3622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L3623;
    }
  goto L350;

 L3623: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (XOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 335;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L3881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3882;
    }
  goto L350;

 L3882: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 351;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L4340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4341;
    }
  goto L350;

 L4341: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NOT, HImode, operands)))
    {
      return 399;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L4519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4520;
    }
  goto L350;

 L4520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4521;
    }
  goto L350;

 L4521: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 412;
    }
 L4535: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 413;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L4868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4869;
    }
  goto L350;

 L4869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4870;
    }
 L4883: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4884;
    }
  goto L350;

 L4870: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 436;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4883;

 L4884: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 437;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L5174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5175;
    }
  goto L350;

 L5175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5176;
    }
 L5189: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5190;
    }
  goto L350;

 L5176: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 458;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5189;

 L5190: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 459;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L5370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5371;
    }
  goto L350;

 L5371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5372;
    }
 L5385: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5386;
    }
  goto L350;

 L5372: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 472;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5385;

 L5386: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 473;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L5514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5515;
    }
  goto L350;

 L5515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5516;
    }
 L5529: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5530;
    }
  goto L350;

 L5516: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 482;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5529;

 L5530: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 483;
    }
  x1 = XEXP (x0, 1);
  goto L350;

 L351: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 51;
    }
  x1 = XEXP (x0, 0);
  goto L10853;

 L354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L355;
    }
  goto L10879;

 L355: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L356;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L356: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 52;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L359: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L10950;
  x1 = XEXP (x0, 0);
  goto L10879;

 L10950: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L360;
    case SIGN_EXTRACT:
      goto L438;
    case ZERO_EXTEND:
      goto L705;
    case SIGN_EXTEND:
      goto L823;
    case MULT:
      goto L2180;
    case IF_THEN_ELSE:
      goto L7028;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10879;

 L360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L361;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L361: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 53;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L439;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L440;
  x1 = XEXP (x0, 0);
  goto L10879;

 L440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 65;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L706;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L706: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 109;
    }
 L718: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 110;
    }
 L723: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 111;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 125;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L10957;
  x1 = XEXP (x0, 0);
  goto L10879;

 L10957: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2211;
    case SIGN_EXTEND:
      goto L2229;
    case SUBREG:
    case REG:
    case MEM:
      goto L10956;
    default:
      x1 = XEXP (x0, 0);
      goto L10879;
   }
 L10956: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2181;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2212;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2212: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2213;
  x1 = XEXP (x0, 0);
  goto L10879;

 L2213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2214;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2214: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 254;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2230;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2231;
  x1 = XEXP (x0, 0);
  goto L10879;

 L2231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2232;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2232: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 255;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2182;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L2182: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 252;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L7028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7029;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L7029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7030;
  x1 = XEXP (x0, 0);
  goto L10879;

 L7030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7031;
  x1 = XEXP (x0, 0);
  goto L10879;

 L7031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L7032;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L7032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L7033;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L7033: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 617;
    }
  x1 = XEXP (x0, 0);
  goto L10879;

 L1101: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 11)
    goto L1102;
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18
      && (TARGET_80387))
    {
      return 165;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_2 PARAMS ((rtx, rtx, int *));
static int
recog_2 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L10963;
    case ZERO_EXTRACT:
      goto L485;
    case SUBREG:
    case REG:
      goto L10847;
    default:
      goto L10848;
   }
 L10847: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L307;
    }
 L10848: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1037;
    }
 L10849: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L325;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L330;
    }
 L10891: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 19)
    goto L6378;
 L10884: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1474;
    }
  goto ret0;

 L10963: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L263;
    }
  goto L10848;

 L263: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L264;
    }
 L267: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_no_elim_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L268;
    }
  x1 = XEXP (x0, 0);
  goto L10848;

 L264: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 38;
    }
  x1 = XEXP (x0, 1);
  goto L267;

 L268: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 39;
    }
  x1 = XEXP (x0, 0);
  goto L10848;

 L485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L486;
    }
  goto ret0;

 L486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L487;
  goto ret0;

 L487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L502;
  goto ret0;

 L502: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10964;
 L488: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L489;
    }
 L495: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L496;
    }
  goto ret0;

 L10964: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L503;
    case PLUS:
      goto L1786;
    case XOR:
      goto L3692;
    default:
     break;
   }
  goto L488;

 L503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L10967;
  goto L488;

 L10967: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L504;
    case ZERO_EXTRACT:
      goto L3076;
    default:
     break;
   }
  goto L488;

 L504: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L505;
    }
  goto L488;

 L505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L506;
  goto L488;

 L506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 255)
    {
      return 75;
    }
  goto L488;

 L3076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3077;
    }
  goto L488;

 L3077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3078;
  goto L488;

 L3078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3128;
  goto L488;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10969;
 L3079: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L3080;
    }
  goto L488;

 L10969: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L3129;
    case ZERO_EXTRACT:
      goto L3187;
    default:
     break;
   }
  goto L3079;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3130;
    }
 L3157: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3158;
    }
  goto L3079;

 L3130: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 304;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3157;

 L3158: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 305;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3079;

 L3187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3188;
    }
  goto L3079;

 L3188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3189;
  goto L3079;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 306;
    }
  goto L3079;

 L3080: ATTRIBUTE_UNUSED_LABEL
  if (((unsigned HOST_WIDE_INT)INTVAL (operands[2]) <= 0xff)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 302;
    }
  x1 = XEXP (x0, 1);
  goto L488;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1787;
  goto L488;

 L1787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1788;
    }
  goto L488;

 L1788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1789;
  goto L488;

 L1789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1845;
  goto L488;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1846;
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1791;
    }
 L1816: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1817;
    }
  goto L488;

 L1846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1847;
    }
  goto L488;

 L1847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1848;
  goto L488;

 L1848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 229;
    }
  goto L488;

 L1791: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 227;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1816;

 L1817: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 228;
    }
  x1 = XEXP (x0, 1);
  goto L488;

 L3692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3693;
  goto L488;

 L3693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3694;
    }
  goto L488;

 L3694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3695;
  goto L488;

 L3695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3696;
  goto L488;

 L3696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3697;
  goto L488;

 L3697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3698;
    }
  goto L488;

 L3698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3699;
  goto L488;

 L3699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 339;
    }
  goto L488;

 L489: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 73;
    }
  x1 = XEXP (x0, 1);
  goto L495;

 L496: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 74;
    }
  goto ret0;

 L307: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L308;
    }
 L317: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L318;
    }
  x1 = XEXP (x0, 0);
  goto L10848;

 L308: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 43;
    }
  x1 = XEXP (x0, 1);
  goto L317;

 L318: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) == -1
   && (TARGET_PENTIUM || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 44;
    }
  x1 = XEXP (x0, 0);
  goto L10848;

 L1037: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10971;
 L321: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L322;
    }
  x1 = XEXP (x0, 0);
  goto L10849;

 L10971: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L1038;
    case PLUS:
      goto L1260;
    default:
     break;
   }
  goto L321;

 L1038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1039;
    }
  goto L321;

 L1039: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 157;
    }
  x1 = XEXP (x0, 1);
  goto L321;

 L1260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1261;
  goto L321;

 L1261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L1262;
  goto L321;

 L1262: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L1263;
  goto L321;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L1264;
  goto L321;

 L1264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1265;
    }
  goto L321;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1266;
    }
  goto L321;

 L1266: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 188;
    }
  x1 = XEXP (x0, 1);
  goto L321;

 L322: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 45;
    }
  x1 = XEXP (x0, 0);
  goto L10849;

 L325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L326;
    }
  goto L10884;

 L326: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L327;
    }
  x1 = XEXP (x0, 0);
  goto L10884;

 L327: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 46;
    }
  x1 = XEXP (x0, 0);
  goto L10884;

 L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10973;
 L1315: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1316;
    }
 L1319: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == SImode)
    goto L10983;
  x1 = XEXP (x0, 0);
  goto L10891;

 L10973: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L331;
    case SIGN_EXTRACT:
      goto L432;
    case ZERO_EXTRACT:
      goto L466;
    case ZERO_EXTEND:
      goto L688;
    case SIGN_EXTEND:
      goto L813;
    case FIX:
      goto L1065;
    case TRUNCATE:
      goto L2348;
    case UNSPEC_VOLATILE:
      goto L10985;
    case IF_THEN_ELSE:
      goto L7011;
    default:
     break;
   }
  goto L1315;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L332;
    }
  goto L1315;

 L332: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 47;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L433;
    }
  goto L1315;

 L433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L434;
  goto L1315;

 L434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 64;
    }
  goto L1315;

 L466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L467;
    }
  goto L1315;

 L467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L468;
  goto L1315;

 L468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    {
      return 70;
    }
  goto L1315;

 L688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10987;
    case QImode:
      goto L10989;
    default:
      break;
    }
  goto L1315;

 L10987: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L689;
    }
 L10988: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L694;
    }
  goto L1315;

 L689: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 107;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10988;

 L694: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 108;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L10989: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L735;
    }
  goto L1315;

 L735: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 112;
    }
 L747: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 113;
    }
 L752: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 114;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L10990;
    case QImode:
      goto L10991;
    default:
      break;
    }
  goto L1315;

 L10990: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 123;
    }
  goto L1315;

 L10991: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 126;
    }
  goto L1315;

 L1065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10992;
    case DFmode:
      goto L10993;
    default:
      break;
    }
  goto L1315;

 L10992: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1066;
    }
  goto L1315;

 L1066: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 160;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L10993: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1071;
    }
  goto L1315;

 L1071: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 161;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2349;
  goto L1315;

 L2349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2350;
  goto L1315;

 L2350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L10994;
  goto L1315;

 L10994: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L2351;
    case SIGN_EXTEND:
      goto L2428;
    default:
     break;
   }
  goto L1315;

 L2351: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2352;
    }
  goto L1315;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L2353;
  goto L1315;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2354;
    }
  goto L1315;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 261;
    }
  goto L1315;

 L2428: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2429;
    }
  goto L1315;

 L2429: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L2430;
  goto L1315;

 L2430: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2431;
    }
  goto L1315;

 L2431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 264;
    }
  goto L1315;

 L10985: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L10996;
  goto L1315;

 L10996: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1:
      goto L5975;
    case 2:
      goto L5986;
    default:
      break;
    }
  goto L1315;

 L5975: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5976;
  goto L1315;

 L5976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5977;
  goto L1315;

 L5977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L5978;
  goto L1315;

 L5978: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (symbolic_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5979;
    }
  goto L1315;

 L5979: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MINUS)
    goto L5980;
  goto L1315;

 L5980: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == PC)
    goto L5981;
  goto L1315;

 L5981: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  operands[2] = x5;
  goto L5982;

 L5982: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 518;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L5986: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5987;
  goto L1315;

 L5987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == PC)
    goto L5988;
  goto L1315;

 L5988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  goto L5989;

 L5989: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 519;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L7011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LTU)
    goto L7012;
 L7019: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7020;
    }
  goto L1315;

 L7012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7013;
  goto L7019;

 L7013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7014;
  goto L7019;

 L7014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == -1)
    goto L7015;
  x2 = XEXP (x1, 0);
  goto L7019;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 615;
    }
  x2 = XEXP (x1, 0);
  goto L7019;

 L7020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7021;
  goto L1315;

 L7021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7022;
  goto L1315;

 L7022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7023;
    }
  goto L1315;

 L7023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7024;
    }
  goto L1315;

 L7024: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 616;
    }
  x1 = XEXP (x0, 1);
  goto L1315;

 L1316: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 192;
    }
  x1 = XEXP (x0, 1);
  goto L1319;

 L10983: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L10998;
    case MULT:
      goto L2150;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10891;

 L10998: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L1320;
  x1 = XEXP (x0, 0);
  goto L10891;

 L1320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (address_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1321;
    }
  x1 = XEXP (x0, 0);
  goto L10891;

 L1321: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 193;
    }
  x1 = XEXP (x0, 0);
  goto L10891;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2151;
    }
  x1 = XEXP (x0, 0);
  goto L10891;

 L2151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2152;
    }
  x1 = XEXP (x0, 0);
  goto L10891;

 L2152: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 250;
    }
  x1 = XEXP (x0, 0);
  goto L10891;

 L6378: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0)
    {
      return 582;
    }
  x1 = XEXP (x0, 0);
  goto L10884;

 L1474: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10999;
  goto ret0;

 L10999: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1475;
    case MINUS:
      goto L1938;
    case AND:
      goto L2925;
    case IOR:
      goto L3246;
    case XOR:
      goto L3516;
    case NEG:
      goto L3820;
    case NOT:
      goto L4306;
    case ASHIFT:
      goto L4462;
    case ASHIFTRT:
      goto L4724;
    case LSHIFTRT:
      goto L5060;
    case ROTATE:
      goto L5310;
    case ROTATERT:
      goto L5454;
    default:
     break;
   }
  goto ret0;

 L1475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1476;
    }
  goto ret0;

 L1476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1477;
    }
  goto ret0;

 L1477: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 207;
    }
  goto ret0;

 L1938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1939;
    }
  goto ret0;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1940;
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1982;
    }
  goto ret0;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LTU)
    goto L1941;
  goto ret0;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L1942;
  goto ret0;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L1943;
  goto ret0;

 L1943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1944;
    }
  goto ret0;

 L1944: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 235;
    }
  goto ret0;

 L1982: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 237;
    }
  goto ret0;

 L2925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2926;
    }
  goto ret0;

 L2926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2927;
    }
  goto ret0;

 L2927: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (AND, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 292;
    }
  goto ret0;

 L3246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L11012;
  goto ret0;

 L11012: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L4444;
    case ASHIFTRT:
      goto L4706;
    case SUBREG:
    case REG:
    case MEM:
      goto L11011;
    default:
      goto ret0;
   }
 L11011: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3247;
    }
  goto ret0;

 L4444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4445;
  goto ret0;

 L4445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4446;
    }
  goto ret0;

 L4446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L4447;
  goto ret0;

 L4447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4448;
    }
  goto ret0;

 L4448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L4449;
  goto ret0;

 L4449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L4450;
  goto ret0;

 L4450: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 407;
    }
  goto ret0;

 L4706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4707;
  goto ret0;

 L4707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4708;
    }
  goto ret0;

 L4708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L4709;
  goto ret0;

 L4709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4710;
    }
  goto ret0;

 L4710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L4711;
  goto ret0;

 L4711: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L4712;
  goto ret0;

 L4712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 425;
    }
  goto ret0;

 L3247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3248;
    }
  goto ret0;

 L3248: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (IOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 310;
    }
  goto ret0;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3517;
    }
  goto ret0;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3518;
    }
  goto ret0;

 L3518: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 328;
    }
  goto ret0;

 L3820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3821;
    }
  goto ret0;

 L3821: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 347;
    }
  goto ret0;

 L4306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4307;
    }
  goto ret0;

 L4307: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 395;
    }
  goto ret0;

 L4462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4463;
    }
  goto ret0;

 L4463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4464;
    }
  goto ret0;

 L4464: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 408;
    }
  goto ret0;

 L4724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4725;
    }
  goto ret0;

 L4725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L11014;
 L4785: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4786;
    }
  goto ret0;

 L11014: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4726;
    }
 L11015: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4756;
    }
  goto L4785;

 L4726: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 426;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11015;

 L4756: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 428;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4785;

 L4786: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 430;
    }
  goto ret0;

 L5060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5061;
    }
  goto ret0;

 L5061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5062;
    }
 L5091: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5092;
    }
  goto ret0;

 L5062: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 450;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5091;

 L5092: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 452;
    }
  goto ret0;

 L5310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5311;
    }
  goto ret0;

 L5311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5312;
    }
 L5341: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5342;
    }
  goto ret0;

 L5312: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 468;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5341;

 L5342: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 470;
    }
  goto ret0;

 L5454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5455;
    }
  goto ret0;

 L5455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5456;
    }
 L5485: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5486;
    }
  goto ret0;

 L5456: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 478;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5485;

 L5486: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 480;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_3 PARAMS ((rtx, rtx, int *));
static int
recog_3 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L395;
    }
 L10856: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L443;
    }
 L10858: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L455;
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L449;
    }
 L10859: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L471;
    }
 L10860: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L478;
    }
  goto ret0;

 L395: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_no_elim_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L396;
    }
  x1 = XEXP (x0, 0);
  goto L10856;

 L396: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 58;
    }
 L400: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 59;
    }
  x1 = XEXP (x0, 0);
  goto L10856;

 L443: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == SIGN_EXTRACT)
    goto L444;
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L404;
    }
  x1 = XEXP (x0, 0);
  goto L10858;

 L444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L445;
    }
  x1 = XEXP (x0, 0);
  goto L10858;

 L445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L446;
  x1 = XEXP (x0, 0);
  goto L10858;

 L446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8
      && (!TARGET_64BIT))
    {
      return 66;
    }
  x1 = XEXP (x0, 0);
  goto L10858;

 L404: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L10858;

 L455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L456;
    }
  goto L10859;

 L456: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L457;
    }
  x1 = XEXP (x0, 0);
  goto L10859;

 L457: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 68;
    }
  x1 = XEXP (x0, 0);
  goto L10859;

 L449: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L11016;
  x1 = XEXP (x0, 0);
  goto L10859;

 L11016: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L450;
    case MEM:
      goto L461;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10859;

 L450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L451;
    }
  x1 = XEXP (x0, 0);
  goto L10859;

 L451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8)
    goto L452;
  x1 = XEXP (x0, 0);
  goto L10859;

 L452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8
      && (TARGET_64BIT))
    {
      return 67;
    }
  x1 = XEXP (x0, 0);
  goto L10859;

 L461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L462;
    }
  x1 = XEXP (x0, 0);
  goto L10859;

 L462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 69;
    }
  x1 = XEXP (x0, 0);
  goto L10859;

 L471: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L11018;
  x1 = XEXP (x0, 0);
  goto L10860;

 L11018: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L11032;
    case PLUS:
      goto L1686;
    case MINUS:
      goto L2098;
    case AND:
      goto L3009;
    case IOR:
      goto L3396;
    case XOR:
      goto L3666;
    case NEG:
      goto L3904;
    case NOT:
      goto L4356;
    case ASHIFT:
      goto L4560;
    case ASHIFTRT:
      goto L4922;
    case LSHIFTRT:
      goto L5228;
    case ROTATE:
      goto L5398;
    case ROTATERT:
      goto L5542;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case LEU:
    case LTU:
    case GEU:
    case GTU:
    case UNORDERED:
    case ORDERED:
    case UNLE:
    case UNLT:
    case UNGE:
    case UNGT:
    case LTGT:
    case UNEQ:
      goto L11031;
    default:
      x1 = XEXP (x0, 0);
      goto L10860;
   }
 L11031: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L5562;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L11032: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L472;
  x1 = XEXP (x0, 0);
  goto L10860;

 L472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L473;
  x1 = XEXP (x0, 0);
  goto L10860;

 L473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L474;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L475;
  x1 = XEXP (x0, 0);
  goto L10860;

 L475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && (!TARGET_64BIT))
    {
      return 71;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L1686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1687;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L1687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1688;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L1688: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 221;
    }
 L1702: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 222;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L2098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2099;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L2099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2100;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L2100: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (MINUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 246;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3010;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3011;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3011: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (AND, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 298;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3397;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3398;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3398: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (IOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 320;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3667;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3668;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3668: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (XOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 338;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3905;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L3905: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 353;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4357;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4357: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 401;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4561;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4562;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4562: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 415;
    }
 L4576: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 416;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4923;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4924;
    }
 L4937: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4938;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L4924: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 440;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4937;

 L4938: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 441;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5229;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5230;
    }
 L5243: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5244;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5230: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 462;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5243;

 L5244: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 463;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5399;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5400;
    }
 L5413: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5414;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5400: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 474;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5413;

 L5414: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATE, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 475;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5543;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5544;
    }
 L5557: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5558;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5544: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 484;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5557;

 L5558: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_binary_operator_ok (ROTATERT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 485;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L5562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5563;
  x1 = XEXP (x0, 0);
  goto L10860;

 L5563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return 486;
    }
  x1 = XEXP (x0, 0);
  goto L10860;

 L478: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L11033;
  goto ret0;

 L11033: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L11037;
    case MULT:
      goto L2194;
    case DIV:
      goto L2470;
    case UDIV:
      goto L2484;
    default:
     break;
   }
  goto ret0;

 L11037: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L479;
  goto ret0;

 L479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L480;
  goto ret0;

 L480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L481;
    }
  goto ret0;

 L481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L482;
  goto ret0;

 L482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && (TARGET_64BIT))
    {
      return 72;
    }
  goto ret0;

 L2194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2195;
    }
  goto ret0;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2196;
    }
  goto ret0;

 L2196: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 253;
    }
  goto ret0;

 L2470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2471;
    }
  goto ret0;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2472;
    }
  goto ret0;

 L2472: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 266;
    }
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2485;
    }
  goto ret0;

 L2485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2486;
    }
  goto ret0;

 L2486: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 267;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_4 PARAMS ((rtx, rtx, int *));
static int
recog_4 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L581;
    case ZERO_EXTEND:
      goto L773;
    case SIGN_EXTEND:
      goto L798;
    case FIX:
      goto L1028;
    case TRUNCATE:
      goto L2323;
    case IOR:
      goto L3277;
    case XOR:
      goto L3547;
    case LSHIFTRT:
      goto L3836;
    default:
     break;
   }
  goto ret0;

 L581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L582;
    }
  goto ret0;

 L582: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 86;
    }
  goto ret0;

 L773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11052;
    case QImode:
      goto L11053;
    case SImode:
      goto L11054;
    default:
      break;
    }
  goto ret0;

 L11052: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L774;
    }
  goto ret0;

 L774: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 117;
    }
  goto ret0;

 L11053: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L779;
    }
  goto ret0;

 L779: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 118;
    }
  goto ret0;

 L11054: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L818;
    case PLUS:
      goto L1284;
    case SUBREG:
      goto L11064;
    case MINUS:
      goto L1962;
    case MULT:
      goto L2166;
    case TRUNCATE:
      goto L2375;
    case AND:
      goto L2941;
    case IOR:
      goto L3262;
    case XOR:
      goto L3532;
    case NOT:
      goto L4312;
    default:
     break;
   }
  goto ret0;

 L818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L11065;
    case QImode:
      goto L11066;
    default:
      break;
    }
  goto ret0;

 L11065: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L819;
    }
  goto ret0;

 L819: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 124;
    }
  goto ret0;

 L11066: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L833;
    }
  goto ret0;

 L833: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 127;
    }
  goto ret0;

 L1284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11067;
  goto ret0;

 L11067: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1285;
    case MULT:
      goto L1362;
    case SUBREG:
    case REG:
    case MEM:
      goto L11069;
    default:
      goto ret0;
   }
 L11069: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1492;
    }
  goto ret0;

 L1285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11070;
  goto ret0;

 L11070: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case LTU:
      goto L1286;
    case MULT:
      goto L1382;
    case SUBREG:
    case REG:
      goto L11071;
    default:
      goto ret0;
   }
 L11071: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1346;
    }
  goto ret0;

 L1286: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1287;
  goto ret0;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1288;
  goto ret0;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1289;
    }
  goto ret0;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1290;
    }
  goto ret0;

 L1290: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 189;
    }
  goto ret0;

 L1382: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1383;
    }
  goto ret0;

 L1383: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const248_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1384;
    }
  goto ret0;

 L1384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1385;
    }
  goto ret0;

 L1385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L1386;
    }
  goto ret0;

 L1386: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 201;
    }
  goto ret0;

 L1346: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1347;
    }
  goto ret0;

 L1347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1348;
    }
  goto ret0;

 L1348: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 197;
    }
  goto ret0;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1363;
    }
  goto ret0;

 L1363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1364;
    }
  goto ret0;

 L1364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1365;
    }
  goto ret0;

 L1365: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 199;
    }
  goto ret0;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1493;
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 208;
    }
  goto ret0;

 L11064: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L1326;
  goto ret0;

 L1326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (address_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1327;
    }
  goto ret0;

 L1327: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 194;
    }
  goto ret0;

 L1962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1963;
    }
  goto ret0;

 L1963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1964;
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1998;
    }
  goto ret0;

 L1964: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LTU)
    goto L1965;
  goto ret0;

 L1965: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1966;
  goto ret0;

 L1966: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1967;
  goto ret0;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1968;
    }
  goto ret0;

 L1968: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 236;
    }
  goto ret0;

 L1998: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 238;
    }
  goto ret0;

 L2166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2167;
    }
  goto ret0;

 L2167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2168;
    }
  goto ret0;

 L2168: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 251;
    }
  goto ret0;

 L2375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2376;
  goto ret0;

 L2376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L2377;
  goto ret0;

 L2377: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L11073;
  goto ret0;

 L11073: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L2378;
    case SIGN_EXTEND:
      goto L2455;
    default:
     break;
   }
  goto ret0;

 L2378: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L2379;
    }
  goto ret0;

 L2379: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L2380;
  goto ret0;

 L2380: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2381;
    }
  goto ret0;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 262;
    }
  goto ret0;

 L2455: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L2456;
    }
  goto ret0;

 L2456: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L2457;
  goto ret0;

 L2457: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2458;
    }
  goto ret0;

 L2458: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 265;
    }
  goto ret0;

 L2941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2942;
    }
  goto ret0;

 L2942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2943;
    }
  goto ret0;

 L2943: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 293;
    }
  goto ret0;

 L3262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3263;
    }
  goto ret0;

 L3263: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3264;
    }
  goto ret0;

 L3264: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 311;
    }
  goto ret0;

 L3532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3533;
    }
  goto ret0;

 L3533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3534;
    }
  goto ret0;

 L3534: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 329;
    }
  goto ret0;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4313;
    }
  goto ret0;

 L4313: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 396;
    }
  goto ret0;

 L798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11075;
    case HImode:
      goto L11076;
    case QImode:
      goto L11077;
    default:
      break;
    }
  goto ret0;

 L11075: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L799;
    }
  goto ret0;

 L799: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 120;
    }
  goto ret0;

 L11076: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L804;
    }
  goto ret0;

 L804: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 121;
    }
  goto ret0;

 L11077: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L809;
    }
  goto ret0;

 L809: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 122;
    }
  goto ret0;

 L1028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11078;
    case DFmode:
      goto L11079;
    default:
      break;
    }
  goto ret0;

 L11078: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1029;
    }
  goto ret0;

 L1029: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_SSE))
    {
      return 155;
    }
  goto ret0;

 L11079: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1034;
    }
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_SSE2))
    {
      return 156;
    }
  goto ret0;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2324;
  goto ret0;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L2325;
  goto ret0;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L11080;
  goto ret0;

 L11080: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L2326;
    case SIGN_EXTEND:
      goto L2403;
    default:
     break;
   }
  goto ret0;

 L2326: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L2327;
    }
  goto ret0;

 L2327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L2328;
  goto ret0;

 L2328: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L2329;
    }
  goto ret0;

 L2329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 64
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 260;
    }
  goto ret0;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L2404;
    }
  goto ret0;

 L2404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L2405;
  goto ret0;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L2406;
    }
  goto ret0;

 L2406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 64
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 263;
    }
  goto ret0;

 L3277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3278;
  goto ret0;

 L3278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3279;
    }
  goto ret0;

 L3279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_zext_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3280;
    }
  goto ret0;

 L3280: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 312;
    }
  goto ret0;

 L3547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3548;
  goto ret0;

 L3548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3549;
    }
  goto ret0;

 L3549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_zext_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3550;
    }
  goto ret0;

 L3550: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 330;
    }
  goto ret0;

 L3836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NEG)
    goto L3837;
  goto ret0;

 L3837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ASHIFT)
    goto L3838;
  goto ret0;

 L3838: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3839;
    }
  goto ret0;

 L3839: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L3840;
  goto ret0;

 L3840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 32
      && (TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 348;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_5 PARAMS ((rtx, rtx, int *));
static int
recog_5 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L509;
    }
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L553;
    }
 L10864: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L762;
    }
 L10865: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L575;
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L580;
    }
 L10883: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1397;
    }
 L10890: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4408;
    }
  goto ret0;

 L509: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L510;
    }
  x1 = XEXP (x0, 0);
  goto L10864;

 L510: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 76;
    }
 L514: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 77;
    }
  x1 = XEXP (x0, 0);
  goto L10864;

 L553: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L554;
    }
 L563: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L564;
    }
  x1 = XEXP (x0, 0);
  goto L10864;

 L554: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 81;
    }
  x1 = XEXP (x0, 1);
  goto L563;

 L564: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) == -1)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 82;
    }
  x1 = XEXP (x0, 0);
  goto L10864;

 L762: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11038;
 L567: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L568;
    }
  x1 = XEXP (x0, 0);
  goto L10865;

 L11038: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L763;
    case SIGN_EXTEND:
      goto L793;
    case FIX:
      goto L975;
    case PLUS:
      goto L1209;
    default:
     break;
   }
  goto L567;

 L763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L764;
    }
  goto L567;

 L764: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 115;
    }
 L769: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 116;
    }
  x1 = XEXP (x0, 1);
  goto L567;

 L793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L794;
    }
  goto L567;

 L794: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 119;
    }
  x1 = XEXP (x0, 1);
  goto L567;

 L975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L976;
    }
  goto L567;

 L976: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)))
    {
      return 152;
    }
  x1 = XEXP (x0, 1);
  goto L567;

 L1209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L11043;
  goto L567;

 L11043: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1228;
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1210;
    }
  goto L567;

 L1228: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LTU)
    goto L1229;
  goto L567;

 L1229: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L1230;
  goto L567;

 L1230: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L1231;
  goto L567;

 L1231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1232;
    }
  goto L567;

 L1232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1233;
    }
  goto L567;

 L1233: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 186;
    }
  x1 = XEXP (x0, 1);
  goto L567;

 L1210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1211;
    }
  goto L567;

 L1211: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 185;
    }
  x1 = XEXP (x0, 1);
  goto L567;

 L568: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 83;
    }
 L572: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 84;
    }
  x1 = XEXP (x0, 0);
  goto L10865;

 L575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L576;
    }
  goto L10883;

 L576: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L577;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L577: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 85;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L580: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11044;
 L1330: ATTRIBUTE_UNUSED_LABEL
  if (address_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1331;
    }
 L2135: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == MULT)
    goto L2136;
  x1 = XEXP (x0, 0);
  goto L10883;

 L11044: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1330;

 L1331: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 195;
    }
  x1 = XEXP (x0, 1);
  goto L2135;

 L2136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L11083;
  x1 = XEXP (x0, 0);
  goto L10883;

 L11083: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2265;
    case SIGN_EXTEND:
      goto L2301;
    case SUBREG:
    case REG:
    case MEM:
      goto L11082;
    default:
      x1 = XEXP (x0, 0);
      goto L10883;
   }
 L11082: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2137;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2266;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2267;
  x1 = XEXP (x0, 0);
  goto L10883;

 L2267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2268;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2268: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 257;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2302;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2303;
  x1 = XEXP (x0, 0);
  goto L10883;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2304;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2304: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 259;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2138;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L2138: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 249;
    }
  x1 = XEXP (x0, 0);
  goto L10883;

 L1397: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11085;
  x1 = XEXP (x0, 0);
  goto L10890;

 L11085: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1398;
    case MINUS:
      goto L1860;
    case AND:
      goto L2898;
    case IOR:
      goto L3201;
    case XOR:
      goto L3471;
    case NEG:
      goto L3785;
    case NOT:
      goto L4290;
    case ASHIFT:
      goto L4380;
    case ASHIFTRT:
      goto L4601;
    case LSHIFTRT:
      goto L4976;
    case ROTATE:
      goto L5282;
    case ROTATERT:
      goto L5426;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1399;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1400;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1400: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 202;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1879;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L1880;
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1862;
    }
 L1897: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1898;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1880: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LTU)
    goto L1881;
  x1 = XEXP (x0, 0);
  goto L10890;

 L1881: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L1882;
  x1 = XEXP (x0, 0);
  goto L10890;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L1883;
  x1 = XEXP (x0, 0);
  goto L10890;

 L1883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1884;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1884: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 231;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L1862: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 230;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1897;

 L1898: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 232;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L2898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2899;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L2899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_szext_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2900;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L2900: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 290;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3202;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3203;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3203: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 307;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3472;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3473;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3473: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 325;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3786;
    }
 L3797: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3798;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L3786: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 344;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3797;

 L3798: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 345;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4291;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4291: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands)))
    {
      return 393;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4381;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4382;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4382: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 403;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4602;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L11097;
 L4630: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4631;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L11097: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4603;
    }
 L11098: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4617;
    }
  goto L4630;

 L4603: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && INTVAL (operands[2]) == 63 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 418;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11098;

 L4617: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 419;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4630;

 L4631: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 420;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4977;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4977: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4978;
    }
 L4991: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4992;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4978: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 444;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4991;

 L4992: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 445;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L5282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5283;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L5283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5284;
    }
 L5297: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5298;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L5284: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 466;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5297;

 L5298: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 467;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L5426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5427;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L5427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5428;
    }
 L5441: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5442;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L5428: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 476;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5441;

 L5442: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 477;
    }
  x1 = XEXP (x0, 0);
  goto L10890;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L11099;
  goto ret0;

 L11099: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ASHIFT:
      goto L4409;
    case ZERO_EXTEND:
      goto L4477;
    case ASHIFTRT:
      goto L4671;
    case LSHIFTRT:
      goto L5032;
    case IF_THEN_ELSE:
      goto L6983;
    default:
     break;
   }
  goto ret0;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4410;
    }
  goto ret0;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4411;
    }
  goto ret0;

 L4411: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 405;
    }
 L4425: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 406;
    }
  goto ret0;

 L4477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L11104;
  goto ret0;

 L11104: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L4478;
    case ASHIFTRT:
      goto L4740;
    case LSHIFTRT:
      goto L5106;
    case ROTATE:
      goto L5326;
    case ROTATERT:
      goto L5470;
    default:
     break;
   }
  goto ret0;

 L4478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4479;
    }
  goto ret0;

 L4479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4480;
    }
  goto ret0;

 L4480: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 409;
    }
  goto ret0;

 L4740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4741;
    }
  goto ret0;

 L4741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L11109;
 L4801: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4802;
    }
  goto ret0;

 L11109: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4742;
    }
 L11110: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4772;
    }
  goto L4801;

 L4742: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 427;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L11110;

 L4772: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 429;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L4801;

 L4802: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 431;
    }
  goto ret0;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5107;
    }
  goto ret0;

 L5107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5108;
    }
  goto ret0;

 L5108: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 453;
    }
  goto ret0;

 L5326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5327;
    }
  goto ret0;

 L5327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5328;
    }
 L5357: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5358;
    }
  goto ret0;

 L5328: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 469;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5357;

 L5358: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 471;
    }
  goto ret0;

 L5470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5471;
    }
  goto ret0;

 L5471: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5472;
    }
 L5501: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5502;
    }
  goto ret0;

 L5472: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 479;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5501;

 L5502: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 481;
    }
  goto ret0;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4672;
    }
  goto ret0;

 L4672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4673;
    }
  goto ret0;

 L4673: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 423;
    }
 L4687: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 424;
    }
  goto ret0;

 L5032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L11112;
  goto ret0;

 L11112: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTEND)
    goto L5076;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5033;
    }
  goto ret0;

 L5076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5077;
    }
  goto ret0;

 L5077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5078;
    }
  goto ret0;

 L5078: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 451;
    }
  goto ret0;

 L5033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5034;
    }
  goto ret0;

 L5034: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 448;
    }
 L5048: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 449;
    }
  goto ret0;

 L6983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LTU)
    goto L6984;
 L6991: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6992;
    }
  goto ret0;

 L6984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6985;
  goto L6991;

 L6985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6986;
  goto L6991;

 L6986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == -1)
    goto L6987;
  x2 = XEXP (x1, 0);
  goto L6991;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 613;
    }
  x2 = XEXP (x1, 0);
  goto L6991;

 L6992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6993;
  goto ret0;

 L6993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6994;
  goto ret0;

 L6994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6995;
    }
  goto ret0;

 L6995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L6996;
    }
  goto ret0;

 L6996: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 614;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_6 PARAMS ((rtx, rtx, int *));
static int
recog_6 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L4055;
    case ABS:
      goto L4240;
    case SQRT:
      goto L6257;
    case UNSPEC:
      goto L11134;
    case IF_THEN_ELSE:
      goto L7093;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L11128;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L11129;
    default:
      goto ret0;
   }
 L11128: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, SFmode))
    {
      operands[1] = x1;
      goto L5573;
    }
 L11129: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, SFmode))
    {
      operands[3] = x1;
      goto L6035;
    }
  goto ret0;

 L4055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4056;
    }
  goto ret0;

 L4056: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 365;
    }
  goto ret0;

 L4240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4241;
    }
  goto ret0;

 L4241: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 384;
    }
  goto ret0;

 L6257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L11136;
  goto ret0;

 L11136: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6258;
    }
 L11137: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6268;
    }
  goto ret0;

 L6258: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (TARGET_SSE_MATH && TARGET_MIX_SSE_I387)))
    {
      return 559;
    }
 L6263: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE_MATH && (!TARGET_80387 || !TARGET_MIX_SSE_I387)))
    {
      return 560;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11137;

 L6268: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && !TARGET_SSE_MATH))
    {
      return 561;
    }
  goto ret0;

 L11134: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11138;
  goto ret0;

 L11138: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1:
      goto L6332;
    case 2:
      goto L6358;
    default:
      break;
    }
  goto ret0;

 L6332: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6333;
    }
  goto ret0;

 L6333: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 573;
    }
  goto ret0;

 L6358: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6359;
    }
  goto ret0;

 L6359: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 578;
    }
  goto ret0;

 L7093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case LT:
      goto L7094;
    case GT:
      goto L7186;
    default:
     break;
   }
 L7037: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7038;
    }
 L7301: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7302;
    }
 L7323: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == EQ)
    goto L7324;
 L7394: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7395;
    }
  goto ret0;

 L7094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L11140;
  goto L7037;

 L11140: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7095;
    }
 L11141: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7114;
    }
 L11142: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7122;
    }
  goto L7037;

 L7095: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7096;
    }
  x3 = XEXP (x2, 0);
  goto L11141;

 L7096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7097;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11141;

 L7097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && TARGET_IEEE_FP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 623;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11141;

 L7114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7115;
    }
  x3 = XEXP (x2, 0);
  goto L11142;

 L7115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7116;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11142;

 L7116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 624;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11142;

 L7122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7123;
    }
  goto L7037;

 L7123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7124;
  x2 = XEXP (x1, 0);
  goto L7037;

 L7124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && reload_completed))
    {
      return 625;
    }
  x2 = XEXP (x1, 0);
  goto L7037;

 L7186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L11143;
  goto L7037;

 L11143: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7187;
    }
 L11144: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7206;
    }
 L11145: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7214;
    }
  goto L7037;

 L7187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7188;
    }
  x3 = XEXP (x2, 0);
  goto L11144;

 L7188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7189;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11144;

 L7189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && TARGET_IEEE_FP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 629;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11144;

 L7206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7207;
    }
  x3 = XEXP (x2, 0);
  goto L11145;

 L7207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7208;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11145;

 L7208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 630;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11145;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7215;
    }
  goto L7037;

 L7215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7216;
  x2 = XEXP (x1, 0);
  goto L7037;

 L7216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE && reload_completed))
    {
      return 631;
    }
  x2 = XEXP (x1, 0);
  goto L7037;

 L7038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7039;
  goto L7301;

 L7039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7040;
  goto L7301;

 L7040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7041;
    }
  x2 = XEXP (x1, 0);
  goto L7301;

 L7041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L7042;
    }
  x2 = XEXP (x1, 0);
  goto L7301;

 L7042: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 618;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7301;

 L7302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L11146;
  goto L7323;

 L11146: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L7303;
    }
 L11147: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L7378;
    }
  goto L7323;

 L7303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[5] = x3;
      goto L7304;
    }
  x3 = XEXP (x2, 0);
  goto L11147;

 L7304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7305;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11147;

 L7305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L7306;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11147;

 L7306: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE)))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 637;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11147;

 L7378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[5] = x3;
      goto L7379;
    }
  goto L7323;

 L7379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7380;
    }
  if (const0_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7389;
    }
  x2 = XEXP (x1, 0);
  goto L7323;

 L7380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L7381;
    }
  x2 = XEXP (x1, 0);
  goto L7323;

 L7381: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 641;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7323;

 L7389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L7390;
    }
  x2 = XEXP (x1, 0);
  goto L7323;

 L7390: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 642;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7323;

 L7324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L7325;
    }
  goto L7394;

 L7325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L7326;
    }
  goto L7394;

 L7326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7327;
    }
  x2 = XEXP (x1, 0);
  goto L7394;

 L7327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7328;
    }
  x2 = XEXP (x1, 0);
  goto L7394;

 L7328: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 638;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7394;

 L7395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[4] = x3;
      goto L7396;
    }
  goto ret0;

 L7396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[5] = x3;
      goto L7397;
    }
  goto ret0;

 L7397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7398;
    }
  if (const0_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7407;
    }
  goto ret0;

 L7398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L7399;
    }
  goto ret0;

 L7399: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 643;
    }
  goto ret0;

 L7407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L7408;
    }
  goto ret0;

 L7408: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 644;
    }
  goto ret0;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L5574;
    }
  goto ret0;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L5575;
    }
  goto ret0;

 L5575: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && reload_completed))
    {
      return 488;
    }
  goto ret0;

 L6035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L11150;
  goto ret0;

 L11150: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L6102;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6036;
    }
 L11149: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6096;
    }
  goto ret0;

 L6102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6103;
    }
  goto ret0;

 L6103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6104;
    }
  goto ret0;

 L6104: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !TARGET_SSE_MATH))
    {
      return 536;
    }
  goto ret0;

 L6036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6037;
    }
  x2 = XEXP (x1, 0);
  goto L11149;

 L6037: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 525;
    }
 L6043: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 526;
    }
 L6049: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE_MATH && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 527;
    }
 L6085: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 533;
    }
 L6091: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 534;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11149;

 L6096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11152;
  goto ret0;

 L11152: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L6110;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6097;
    }
  goto ret0;

 L6110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6111;
    }
  goto ret0;

 L6111: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !TARGET_SSE_MATH))
    {
      return 537;
    }
  goto ret0;

 L6097: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 535;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_7 PARAMS ((rtx, rtx, int *));
static int
recog_7 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L4060;
    case ABS:
      goto L4245;
    case SQRT:
      goto L6272;
    case UNSPEC:
      goto L11173;
    case IF_THEN_ELSE:
      goto L7139;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L11167;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L11168;
    default:
      goto ret0;
   }
 L11167: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, DFmode))
    {
      operands[1] = x1;
      goto L5579;
    }
 L11168: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, DFmode))
    {
      operands[3] = x1;
      goto L6053;
    }
  goto ret0;

 L4060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L11176;
  goto ret0;

 L11176: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4066;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4061;
    }
  goto ret0;

 L4066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4067;
    }
  goto ret0;

 L4067: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 367;
    }
  goto ret0;

 L4061: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 366;
    }
  goto ret0;

 L4245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L11178;
  goto ret0;

 L11178: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4251;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4246;
    }
  goto ret0;

 L4251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4252;
    }
  goto ret0;

 L4252: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 386;
    }
  goto ret0;

 L4246: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 385;
    }
  goto ret0;

 L6272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L11181;
  goto ret0;

 L11181: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L6288;
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6273;
    }
 L11180: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6283;
    }
  goto ret0;

 L6288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6289;
    }
  goto ret0;

 L6289: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 565;
    }
  goto ret0;

 L6273: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387)))
    {
      return 562;
    }
 L6278: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && TARGET_SSE_MATH && (!TARGET_80387 || !TARGET_MIX_SSE_I387)))
    {
      return 563;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11180;

 L6283: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (!TARGET_SSE2 || !TARGET_SSE_MATH)))
    {
      return 564;
    }
  goto ret0;

 L11173: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11182;
  goto ret0;

 L11182: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1:
      goto L6327;
    case 2:
      goto L6353;
    default:
      break;
    }
  goto ret0;

 L6327: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L11185;
  goto ret0;

 L11185: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L6338;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6328;
    }
  goto ret0;

 L6338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6339;
    }
  goto ret0;

 L6339: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 574;
    }
  goto ret0;

 L6328: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 572;
    }
  goto ret0;

 L6353: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L11187;
  goto ret0;

 L11187: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L6364;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6354;
    }
  goto ret0;

 L6364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6365;
    }
  goto ret0;

 L6365: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 579;
    }
  goto ret0;

 L6354: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 577;
    }
  goto ret0;

 L7139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case LT:
      goto L7140;
    case GT:
      goto L7232;
    default:
     break;
   }
 L7046: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7047;
    }
 L7345: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7346;
    }
 L7367: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == EQ)
    goto L7368;
 L7430: ATTRIBUTE_UNUSED_LABEL
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7431;
    }
  goto ret0;

 L7140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L11188;
  goto L7046;

 L11188: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7141;
    }
 L11189: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7160;
    }
 L11190: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7168;
    }
  goto L7046;

 L7141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7142;
    }
  x3 = XEXP (x2, 0);
  goto L11189;

 L7142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7143;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11189;

 L7143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_IEEE_FP && TARGET_SSE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 626;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11189;

 L7160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7161;
    }
  x3 = XEXP (x2, 0);
  goto L11190;

 L7161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7162;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11190;

 L7162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 627;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11190;

 L7168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7169;
    }
  goto L7046;

 L7169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7170;
  x2 = XEXP (x1, 0);
  goto L7046;

 L7170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && reload_completed))
    {
      return 628;
    }
  x2 = XEXP (x1, 0);
  goto L7046;

 L7232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L11191;
  goto L7046;

 L11191: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7233;
    }
 L11192: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7252;
    }
 L11193: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7260;
    }
  goto L7046;

 L7233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7234;
    }
  x3 = XEXP (x2, 0);
  goto L11192;

 L7234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7235;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11192;

 L7235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_IEEE_FP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 632;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11192;

 L7252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7253;
    }
  x3 = XEXP (x2, 0);
  goto L11193;

 L7253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7254;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11193;

 L7254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 633;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11193;

 L7260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7261;
    }
  goto L7046;

 L7261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7262;
  x2 = XEXP (x1, 0);
  goto L7046;

 L7262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (rtx_equal_p (x2, operands[2])
      && (TARGET_SSE2 && TARGET_SSE_MATH && reload_completed))
    {
      return 634;
    }
  x2 = XEXP (x1, 0);
  goto L7046;

 L7047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7048;
  goto L7345;

 L7048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7049;
  goto L7345;

 L7049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7050;
    }
  x2 = XEXP (x1, 0);
  goto L7345;

 L7050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L7051;
    }
  x2 = XEXP (x1, 0);
  goto L7345;

 L7051: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 619;
    }
 L7060: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 620;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7345;

 L7346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L11194;
  goto L7367;

 L11194: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L7347;
    }
 L11195: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L7414;
    }
  goto L7367;

 L7347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[5] = x3;
      goto L7348;
    }
  x3 = XEXP (x2, 0);
  goto L11195;

 L7348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7349;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11195;

 L7349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L7350;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11195;

 L7350: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE)))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 639;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11195;

 L7414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[5] = x3;
      goto L7415;
    }
  goto L7367;

 L7415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7416;
    }
  if (const0_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7425;
    }
  x2 = XEXP (x1, 0);
  goto L7367;

 L7416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L7417;
    }
  x2 = XEXP (x1, 0);
  goto L7367;

 L7417: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 645;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7367;

 L7425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L7426;
    }
  x2 = XEXP (x1, 0);
  goto L7367;

 L7426: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 646;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7367;

 L7368: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L7369;
    }
  goto L7430;

 L7369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L7370;
    }
  goto L7430;

 L7370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7371;
    }
  x2 = XEXP (x1, 0);
  goto L7430;

 L7371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7372;
    }
  x2 = XEXP (x1, 0);
  goto L7430;

 L7372: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 640;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L7430;

 L7431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[4] = x3;
      goto L7432;
    }
  goto ret0;

 L7432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[5] = x3;
      goto L7433;
    }
  goto ret0;

 L7433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7434;
    }
  if (const0_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7443;
    }
  goto ret0;

 L7434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const0_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L7435;
    }
  goto ret0;

 L7435: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 647;
    }
  goto ret0;

 L7443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L7444;
    }
  goto ret0;

 L7444: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 648;
    }
  goto ret0;

 L5579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L5580;
    }
  goto ret0;

 L5580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L5581;
    }
  goto ret0;

 L5581: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && reload_completed))
    {
      return 489;
    }
  goto ret0;

 L6053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L11198;
  goto ret0;

 L11198: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L6134;
    case FLOAT_EXTEND:
      goto L6148;
    case SUBREG:
    case REG:
    case MEM:
      goto L11196;
    default:
      goto L11197;
   }
 L11196: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6054;
    }
 L11197: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L6128;
    }
  goto ret0;

 L6134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6135;
    }
  goto ret0;

 L6135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6136;
    }
  goto ret0;

 L6136: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 541;
    }
  goto ret0;

 L6148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6149;
    }
  goto ret0;

 L6149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6150;
    }
  goto ret0;

 L6150: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 543;
    }
  goto ret0;

 L6054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6055;
    }
  x2 = XEXP (x1, 0);
  goto L11197;

 L6055: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_SSE_MATH)
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 528;
    }
 L6061: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE_MATH && TARGET_SSE2 && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 529;
    }
 L6067: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 530;
    }
 L6117: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_SSE_MATH)
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 538;
    }
 L6123: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 539;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11197;

 L6128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11201;
  goto ret0;

 L11201: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L6142;
    case FLOAT_EXTEND:
      goto L6156;
    case SUBREG:
    case REG:
    case MEM:
      goto L11200;
    default:
      goto ret0;
   }
 L11200: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6129;
    }
  goto ret0;

 L6142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6143;
    }
  goto ret0;

 L6143: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 542;
    }
  goto ret0;

 L6156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L6157;
    }
  goto ret0;

 L6157: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 544;
    }
  goto ret0;

 L6129: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2 && TARGET_SSE_MATH
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 540;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_8 PARAMS ((rtx, rtx, int *));
static int
recog_8 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L841;
    }
 L10873: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L871;
    }
 L10881: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L1170;
    }
  goto ret0;

 L841: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L842;
  if (general_no_elim_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L635;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11203;
    case DFmode:
      goto L11204;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L11203: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L843;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L843: ATTRIBUTE_UNUSED_LABEL
  if ((0))
    {
      return 129;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L11204: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L853;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L853: ATTRIBUTE_UNUSED_LABEL
  if ((0))
    {
      return 131;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L635: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && optimize_size))
    {
      return 97;
    }
 L643: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !optimize_size))
    {
      return 99;
    }
  x1 = XEXP (x0, 0);
  goto L10873;

 L871: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L11205;
 L650: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L651;
    }
  x1 = XEXP (x0, 0);
  goto L10881;

 L11205: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L872;
    case NEG:
      goto L4038;
    case ABS:
      goto L4223;
    default:
     break;
   }
  goto L650;

 L872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11208;
    case DFmode:
      goto L11209;
    default:
      break;
    }
  goto L650;

 L11208: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L873;
    }
  goto L650;

 L873: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 135;
    }
  x1 = XEXP (x0, 1);
  goto L650;

 L11209: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L883;
    }
  goto L650;

 L883: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 137;
    }
  x1 = XEXP (x0, 1);
  goto L650;

 L4038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4039;
    }
  goto L650;

 L4039: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, XFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 363;
    }
  x1 = XEXP (x0, 1);
  goto L650;

 L4223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4224;
    }
  goto L650;

 L4224: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, XFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 382;
    }
  x1 = XEXP (x0, 1);
  goto L650;

 L651: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 101;
    }
 L659: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT
   && !optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 103;
    }
  x1 = XEXP (x0, 0);
  goto L10881;

 L1170: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L11210;
  goto ret0;

 L11210: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L1171;
    case NEG:
      goto L4071;
    case ABS:
      goto L4256;
    case SQRT:
      goto L6293;
    case UNSPEC:
      goto L11218;
    case IF_THEN_ELSE:
      goto L7064;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L11213;
    default:
      goto ret0;
   }
 L11213: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, XFmode))
    {
      operands[3] = x1;
      goto L6071;
    }
  goto ret0;

 L1171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11220;
    case SImode:
      goto L11221;
    case DImode:
      goto L11222;
    default:
      break;
    }
  goto ret0;

 L11220: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1172;
    }
  goto ret0;

 L1172: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 179;
    }
  goto ret0;

 L11221: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1182;
    }
  goto ret0;

 L1182: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 181;
    }
  goto ret0;

 L11222: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1192;
    }
  goto ret0;

 L1192: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 183;
    }
  goto ret0;

 L4071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L11224;
  goto ret0;

 L11224: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4077;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4072;
    }
  goto ret0;

 L4077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11225;
    case SFmode:
      goto L11226;
    default:
      break;
    }
  goto ret0;

 L11225: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4078;
    }
  goto ret0;

 L4078: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 369;
    }
  goto ret0;

 L11226: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4084;
    }
  goto ret0;

 L4084: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 370;
    }
  goto ret0;

 L4072: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && reload_completed))
    {
      return 368;
    }
  goto ret0;

 L4256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L11228;
  goto ret0;

 L11228: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4262;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4257;
    }
  goto ret0;

 L4262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11229;
    case SFmode:
      goto L11230;
    default:
      break;
    }
  goto ret0;

 L11229: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4263;
    }
  goto ret0;

 L4263: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 388;
    }
  goto ret0;

 L11230: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4269;
    }
  goto ret0;

 L4269: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 389;
    }
  goto ret0;

 L4257: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && reload_completed))
    {
      return 387;
    }
  goto ret0;

 L6293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L11232;
  goto ret0;

 L11232: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L6304;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L6294;
    }
  goto ret0;

 L6304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11233;
    case SFmode:
      goto L11234;
    default:
      break;
    }
  goto ret0;

 L11233: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L6305;
    }
  goto ret0;

 L6305: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && !TARGET_NO_FANCY_MATH_387))
    {
      return 568;
    }
  goto ret0;

 L11234: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6317;
    }
  goto ret0;

 L6317: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && !TARGET_NO_FANCY_MATH_387))
    {
      return 570;
    }
  goto ret0;

 L6294: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && !TARGET_NO_FANCY_MATH_387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) ))
    {
      return 566;
    }
  goto ret0;

 L11218: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11235;
  goto ret0;

 L11235: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1:
      goto L6343;
    case 2:
      goto L6369;
    default:
      break;
    }
  goto ret0;

 L6343: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L6344;
    }
  goto ret0;

 L6344: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && !TARGET_NO_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 575;
    }
  goto ret0;

 L6369: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L6370;
    }
  goto ret0;

 L6370: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && flag_unsafe_math_optimizations))
    {
      return 580;
    }
  goto ret0;

 L7064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7065;
    }
  goto ret0;

 L7065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7066;
  goto ret0;

 L7066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7067;
  goto ret0;

 L7067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7068;
    }
  goto ret0;

 L7068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L7069;
    }
  goto ret0;

 L7069: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_CMOVE))
    {
      return 621;
    }
  goto ret0;

 L6071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L11238;
  goto ret0;

 L11238: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L6174;
    case FLOAT_EXTEND:
      goto L6202;
    case SUBREG:
    case REG:
      goto L11237;
    default:
      goto ret0;
   }
 L11237: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L6072;
    }
  goto ret0;

 L6174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6175;
    }
  goto ret0;

 L6175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L6176;
    }
  goto ret0;

 L6176: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && TARGET_USE_FIOP))
    {
      return 547;
    }
  goto ret0;

 L6202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L11240;
    case DFmode:
      goto L11241;
    default:
      break;
    }
  goto ret0;

 L11240: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6203;
    }
  goto ret0;

 L6203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L6204;
    }
  goto ret0;

 L6204: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 551;
    }
  goto ret0;

 L11241: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L6231;
    }
  goto ret0;

 L6231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L6232;
    }
  goto ret0;

 L6232: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 555;
    }
  goto ret0;

 L6072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L11243;
  goto ret0;

 L11243: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L6189;
    case FLOAT_EXTEND:
      goto L6217;
    case SUBREG:
    case REG:
      goto L11242;
    default:
      goto ret0;
   }
 L11242: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L6073;
    }
  goto ret0;

 L6189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6190;
    }
  goto ret0;

 L6190: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387 && TARGET_USE_FIOP))
    {
      return 549;
    }
  goto ret0;

 L6217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L11245;
    case DFmode:
      goto L11246;
    default:
      break;
    }
  goto ret0;

 L11245: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L6218;
    }
  goto ret0;

 L6218: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 553;
    }
  goto ret0;

 L11246: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L6246;
    }
  goto ret0;

 L6246: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 557;
    }
  goto ret0;

 L6073: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'))
    {
      return 531;
    }
 L6163: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 545;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_9 PARAMS ((rtx, rtx, int *));
static int
recog_9 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L846;
    }
 L10874: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L876;
    }
 L10882: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L1175;
    }
  goto ret0;

 L846: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L847;
  if (general_no_elim_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L639;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11247;
    case DFmode:
      goto L11248;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L11247: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L848;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L848: ATTRIBUTE_UNUSED_LABEL
  if ((0))
    {
      return 130;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L11248: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L858;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L858: ATTRIBUTE_UNUSED_LABEL
  if ((0))
    {
      return 132;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L639: ATTRIBUTE_UNUSED_LABEL
  if ((optimize_size))
    {
      return 98;
    }
 L647: ATTRIBUTE_UNUSED_LABEL
  if ((!optimize_size))
    {
      return 100;
    }
  x1 = XEXP (x0, 0);
  goto L10874;

 L876: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L11249;
 L654: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L655;
    }
  x1 = XEXP (x0, 0);
  goto L10882;

 L11249: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L877;
    case NEG:
      goto L4050;
    case ABS:
      goto L4235;
    default:
     break;
   }
  goto L654;

 L877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L11252;
    case DFmode:
      goto L11253;
    default:
      break;
    }
  goto L654;

 L11252: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L878;
    }
  goto L654;

 L878: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 136;
    }
  x1 = XEXP (x0, 1);
  goto L654;

 L11253: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L888;
    }
  goto L654;

 L888: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 138;
    }
  x1 = XEXP (x0, 1);
  goto L654;

 L4050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4051;
    }
  goto L654;

 L4051: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && ix86_unary_operator_ok (NEG, TFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 364;
    }
  x1 = XEXP (x0, 1);
  goto L654;

 L4235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4236;
    }
  goto L654;

 L4236: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && ix86_unary_operator_ok (ABS, TFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 383;
    }
  x1 = XEXP (x0, 1);
  goto L654;

 L655: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && optimize_size
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || memory_operand (operands[0], TFmode))))
    {
      return 102;
    }
 L663: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && !optimize_size
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || memory_operand (operands[0], TFmode))))
    {
      return 104;
    }
  x1 = XEXP (x0, 0);
  goto L10882;

 L1175: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L11254;
  goto ret0;

 L11254: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L1176;
    case NEG:
      goto L4088;
    case ABS:
      goto L4273;
    case SQRT:
      goto L6298;
    case UNSPEC:
      goto L11262;
    case IF_THEN_ELSE:
      goto L7073;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L11257;
    default:
      goto ret0;
   }
 L11257: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, TFmode))
    {
      operands[3] = x1;
      goto L6077;
    }
  goto ret0;

 L1176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11264;
    case SImode:
      goto L11265;
    case DImode:
      goto L11266;
    default:
      break;
    }
  goto ret0;

 L11264: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1177;
    }
  goto ret0;

 L1177: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 180;
    }
  goto ret0;

 L11265: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1187;
    }
  goto ret0;

 L1187: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 182;
    }
  goto ret0;

 L11266: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1197;
    }
  goto ret0;

 L1197: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 184;
    }
  goto ret0;

 L4088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L11268;
  goto ret0;

 L11268: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4094;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4089;
    }
  goto ret0;

 L4094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11269;
    case SFmode:
      goto L11270;
    default:
      break;
    }
  goto ret0;

 L11269: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4095;
    }
  goto ret0;

 L4095: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 372;
    }
  goto ret0;

 L11270: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4101;
    }
  goto ret0;

 L4101: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 373;
    }
  goto ret0;

 L4089: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 371;
    }
  goto ret0;

 L4273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L11272;
  goto ret0;

 L11272: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4279;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L4274;
    }
  goto ret0;

 L4279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11273;
    case SFmode:
      goto L11274;
    default:
      break;
    }
  goto ret0;

 L11273: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4280;
    }
  goto ret0;

 L4280: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 391;
    }
  goto ret0;

 L11274: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4286;
    }
  goto ret0;

 L4286: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 392;
    }
  goto ret0;

 L4274: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed))
    {
      return 390;
    }
  goto ret0;

 L6298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L11276;
  goto ret0;

 L11276: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L6310;
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L6299;
    }
  goto ret0;

 L6310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11277;
    case SFmode:
      goto L11278;
    default:
      break;
    }
  goto ret0;

 L11277: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L6311;
    }
  goto ret0;

 L6311: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387))
    {
      return 569;
    }
  goto ret0;

 L11278: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6323;
    }
  goto ret0;

 L6323: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387))
    {
      return 571;
    }
  goto ret0;

 L6299: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) ))
    {
      return 567;
    }
  goto ret0;

 L11262: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11279;
  goto ret0;

 L11279: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1:
      goto L6348;
    case 2:
      goto L6374;
    default:
      break;
    }
  goto ret0;

 L6348: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L6349;
    }
  goto ret0;

 L6349: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 576;
    }
  goto ret0;

 L6374: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L6375;
    }
  goto ret0;

 L6375: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && flag_unsafe_math_optimizations))
    {
      return 581;
    }
  goto ret0;

 L7073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7074;
    }
  goto ret0;

 L7074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L7075;
  goto ret0;

 L7075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7076;
  goto ret0;

 L7076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L7077;
    }
  goto ret0;

 L7077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, TFmode))
    {
      operands[3] = x2;
      goto L7078;
    }
  goto ret0;

 L7078: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE))
    {
      return 622;
    }
  goto ret0;

 L6077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TFmode)
    goto L11282;
  goto ret0;

 L11282: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L6181;
    case FLOAT_EXTEND:
      goto L6209;
    case SUBREG:
    case REG:
      goto L11281;
    default:
      goto ret0;
   }
 L11281: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L6078;
    }
  goto ret0;

 L6181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6182;
    }
  goto ret0;

 L6182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L6183;
    }
  goto ret0;

 L6183: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP))
    {
      return 548;
    }
  goto ret0;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L11284;
    case DFmode:
      goto L11285;
    default:
      break;
    }
  goto ret0;

 L11284: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L6210;
    }
  goto ret0;

 L6210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L6211;
    }
  goto ret0;

 L6211: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 552;
    }
  goto ret0;

 L11285: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L6238;
    }
  goto ret0;

 L6238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L6239;
    }
  goto ret0;

 L6239: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 556;
    }
  goto ret0;

 L6078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode)
    goto L11287;
  goto ret0;

 L11287: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L6196;
    case FLOAT_EXTEND:
      goto L6224;
    case SUBREG:
    case REG:
      goto L11286;
    default:
      goto ret0;
   }
 L11286: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[2] = x2;
      goto L6079;
    }
  goto ret0;

 L6196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6197;
    }
  goto ret0;

 L6197: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_USE_FIOP))
    {
      return 550;
    }
  goto ret0;

 L6224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L11289;
    case DFmode:
      goto L11290;
    default:
      break;
    }
  goto ret0;

 L11289: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L6225;
    }
  goto ret0;

 L6225: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 554;
    }
  goto ret0;

 L11290: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L6253;
    }
  goto ret0;

 L6253: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 558;
    }
  goto ret0;

 L6079: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && GET_RTX_CLASS (GET_CODE (operands[3])) == 'c'))
    {
      return 532;
    }
 L6169: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && GET_RTX_CLASS (GET_CODE (operands[3])) != 'c'))
    {
      return 546;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_10 PARAMS ((rtx, rtx, int *));
static int
recog_10 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L11313;
    case SImode:
      goto L11314;
    case HImode:
      goto L11317;
    case QImode:
      goto L11320;
    default:
      break;
    }
  goto ret0;

 L11313: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1461;
    case AND:
      goto L2802;
    case ZERO_EXTRACT:
      goto L2883;
    case IOR:
      goto L3232;
    case XOR:
      goto L3502;
    case SUBREG:
    case REG:
    case MEM:
      goto L11312;
    default:
      goto ret0;
   }
 L11312: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1444;
    }
  goto ret0;

 L1461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1462;
    }
  goto ret0;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1463;
    }
  goto ret0;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 206;
    }
  goto ret0;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L2803;
    }
  goto ret0;

 L2803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_szext_nonmemory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2804;
    }
  goto ret0;

 L2804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 280;
    }
  goto ret0;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2884;
    }
  goto ret0;

 L2884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2885;
    }
  goto ret0;

 L2885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2886;
    }
  goto ret0;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   /* The code below cannot deal with constants outside HOST_WIDE_INT.  */
   && INTVAL (operands[1]) + INTVAL (operands[2]) < HOST_BITS_PER_WIDE_INT
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode)))
    {
      return 289;
    }
  goto ret0;

 L3232: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3233;
    }
  goto ret0;

 L3233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3234;
    }
  goto ret0;

 L3234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 309;
    }
  goto ret0;

 L3502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3503;
    }
  goto ret0;

 L3503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3504;
    }
  goto ret0;

 L3504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 327;
    }
  goto ret0;

 L1444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1445;
    }
  goto ret0;

 L1445: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 205;
    }
  goto ret0;

 L11314: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L1535;
    case PLUS:
      goto L1581;
    case AND:
      goto L2809;
    case ZERO_EXTRACT:
      goto L2875;
    case IOR:
      goto L3337;
    case XOR:
      goto L3607;
    case SUBREG:
    case REG:
    case MEM:
      goto L11315;
    default:
      goto ret0;
   }
 L11315: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1564;
    }
  goto ret0;

 L1535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1536;
    }
  goto ret0;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1537;
    }
  goto ret0;

 L1537: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 211;
    }
  goto ret0;

 L1581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1582;
    }
  goto ret0;

 L1582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1583;
    }
  goto ret0;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 214;
    }
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11338;
  goto ret0;

 L11338: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L2831;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2810;
    }
  goto ret0;

 L2831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L2832;
    }
  goto ret0;

 L2832: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2833;
  goto ret0;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2844;
  goto ret0;

 L2844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L11339;
 L2834: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2835;
    }
  goto ret0;

 L11339: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2845;
    case ZERO_EXTRACT:
      goto L2867;
    default:
     break;
   }
  goto L2834;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L11341;
  goto L2834;

 L11341: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2846;
    }
 L11342: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2857;
    }
  goto L2834;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 285;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L11342;

 L2857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 286;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2834;

 L2867: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2868;
    }
  goto L2834;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2869;
  goto L2834;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L2870;
  goto L2834;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 287;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2834;

 L2835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && ((unsigned HOST_WIDE_INT) INTVAL (operands[1]) <= 0xff
   && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 284;
    }
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2811;
    }
  goto ret0;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 281;
    }
  goto ret0;

 L2875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2876;
    }
  goto ret0;

 L2876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2877;
    }
  goto ret0;

 L2877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2878;
    }
  goto ret0;

 L2878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode)))
    {
      return 288;
    }
  goto ret0;

 L3337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3338;
    }
  goto ret0;

 L3338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3339;
    }
  goto ret0;

 L3339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 316;
    }
  goto ret0;

 L3607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3608;
    }
  goto ret0;

 L3608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3609;
    }
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 334;
    }
  goto ret0;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1565;
    }
  goto ret0;

 L1565: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 213;
    }
  goto ret0;

 L11317: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L1639;
    case PLUS:
      goto L1672;
    case AND:
      goto L2816;
    case IOR:
      goto L3382;
    case XOR:
      goto L3652;
    case SUBREG:
    case REG:
    case MEM:
      goto L11318;
    default:
      goto ret0;
   }
 L11318: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1655;
    }
  goto ret0;

 L1639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1640;
    }
  goto ret0;

 L1640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1641;
    }
  goto ret0;

 L1641: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 218;
    }
  goto ret0;

 L1672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1673;
    }
  goto ret0;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1674;
    }
  goto ret0;

 L1674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 220;
    }
  goto ret0;

 L2816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L2817;
    }
  goto ret0;

 L2817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2818;
    }
  goto ret0;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 282;
    }
  goto ret0;

 L3382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3383;
    }
  goto ret0;

 L3383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3384;
    }
  goto ret0;

 L3384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 319;
    }
  goto ret0;

 L3652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3653;
    }
  goto ret0;

 L3653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3654;
    }
  goto ret0;

 L3654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 337;
    }
  goto ret0;

 L1655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1656;
    }
  goto ret0;

 L1656: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 219;
    }
  goto ret0;

 L11320: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L1730;
    case PLUS:
      goto L1763;
    case AND:
      goto L2823;
    case IOR:
      goto L3457;
    case XOR:
      goto L3728;
    case SUBREG:
    case REG:
    case MEM:
      goto L11321;
    default:
      goto ret0;
   }
 L11321: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1746;
    }
  goto ret0;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1731;
    }
  goto ret0;

 L1731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1732;
    }
  goto ret0;

 L1732: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 224;
    }
  goto ret0;

 L1763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1764;
    }
  goto ret0;

 L1764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1765;
    }
  goto ret0;

 L1765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 226;
    }
  goto ret0;

 L2823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L2824;
    }
  goto ret0;

 L2824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2825;
    }
  goto ret0;

 L2825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 283;
    }
  goto ret0;

 L3457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3458;
    }
  goto ret0;

 L3458: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3459;
    }
  goto ret0;

 L3459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 324;
    }
  goto ret0;

 L3728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3729;
    }
  goto ret0;

 L3729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3730;
    }
  goto ret0;

 L3730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 341;
    }
  goto ret0;

 L1746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1747;
    }
  goto ret0;

 L1747: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 225;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_11 PARAMS ((rtx, rtx, int *));
static int
recog_11 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7728;
    case MINUS:
      goto L7742;
    case MULT:
      goto L7756;
    case DIV:
      goto L7770;
    case UNSPEC:
      goto L11392;
    case SQRT:
      goto L7807;
    case VEC_SELECT:
      goto L8041;
    case SMAX:
      goto L8083;
    case SMIN:
      goto L8097;
    case SUBREG:
    case REG:
      goto L11380;
    default:
      goto L11381;
   }
 L11380: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7659;
    }
 L11381: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7695;
    }
  goto ret0;

 L7728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7729;
    }
  goto ret0;

 L7729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L7730;
    }
  goto ret0;

 L7730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7731;
  goto ret0;

 L7731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 691;
    }
  goto ret0;

 L7742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7743;
    }
  goto ret0;

 L7743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L7744;
    }
  goto ret0;

 L7744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7745;
  goto ret0;

 L7745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 693;
    }
  goto ret0;

 L7756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7757;
    }
  goto ret0;

 L7757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L7758;
    }
  goto ret0;

 L7758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7759;
  goto ret0;

 L7759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 695;
    }
  goto ret0;

 L7770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7771;
    }
  goto ret0;

 L7771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L7772;
    }
  goto ret0;

 L7772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L7773;
  goto ret0;

 L7773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 697;
    }
  goto ret0;

 L11392: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L11394;
  goto ret0;

 L11394: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 42:
      goto L7783;
    case 43:
      goto L7795;
    default:
      break;
    }
  goto ret0;

 L7783: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7784;
    }
  goto ret0;

 L7784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7785;
    }
  goto ret0;

 L7785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 699;
    }
  goto ret0;

 L7795: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7796;
    }
  goto ret0;

 L7796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7797;
    }
  goto ret0;

 L7797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 701;
    }
  goto ret0;

 L7807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7808;
    }
  goto ret0;

 L7808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7809;
    }
  goto ret0;

 L7809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 703;
    }
  goto ret0;

 L8041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8042;
    }
  goto ret0;

 L8042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8043;
  goto ret0;

 L8043: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L11396;
  goto ret0;

 L11396: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2:
        goto L8044;
      case 0:
        goto L8062;
      default:
        break;
      }
  goto ret0;

 L8044: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8045;
  goto ret0;

 L8045: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8046;
  goto ret0;

 L8046: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8047;
  goto ret0;

 L8047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8048;
  goto ret0;

 L8048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L8049;
    }
  goto ret0;

 L8049: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8050;
  goto ret0;

 L8050: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8051;
  goto ret0;

 L8051: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8052;
  goto ret0;

 L8052: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8053;
  goto ret0;

 L8053: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8054;
  goto ret0;

 L8054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_SSE))
    {
      return 733;
    }
  goto ret0;

 L8062: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8063;
  goto ret0;

 L8063: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8064;
  goto ret0;

 L8064: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8065;
  goto ret0;

 L8065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8066;
  goto ret0;

 L8066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L8067;
    }
  goto ret0;

 L8067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8068;
  goto ret0;

 L8068: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8069;
  goto ret0;

 L8069: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8070;
  goto ret0;

 L8070: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8071;
  goto ret0;

 L8071: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8072;
  goto ret0;

 L8072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_SSE))
    {
      return 734;
    }
  goto ret0;

 L8083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8084;
    }
  goto ret0;

 L8084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L8085;
    }
  goto ret0;

 L8085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L8086;
  goto ret0;

 L8086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 736;
    }
  goto ret0;

 L8097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8098;
    }
  goto ret0;

 L8098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L8099;
    }
  goto ret0;

 L8099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L8100;
  goto ret0;

 L8100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 738;
    }
  goto ret0;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode)
    goto L11398;
  x2 = XEXP (x1, 0);
  goto L11381;

 L11398: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_SELECT:
      goto L7660;
    case VEC_DUPLICATE:
      goto L8106;
    case SUBREG:
    case REG:
      goto L11399;
    default:
      x2 = XEXP (x1, 0);
      goto L11381;
   }
 L11399: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7704;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L7660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L7661;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L7661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L7662;
  x2 = XEXP (x1, 0);
  goto L11381;

 L7662: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L7663;
  x2 = XEXP (x1, 0);
  goto L11381;

 L7663: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L7664;
  x2 = XEXP (x1, 0);
  goto L11381;

 L7664: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7665;
  x2 = XEXP (x1, 0);
  goto L11381;

 L7665: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L7666;
  x2 = XEXP (x1, 0);
  goto L11381;

 L7666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L11401;
  x2 = XEXP (x1, 0);
  goto L11381;

 L11401: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 3:
        goto L11403;
      case 12:
        goto L11404;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  goto L11381;

 L11403: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 682;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L11404: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 683;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L8106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case V2SFmode:
      goto L11405;
    case SFmode:
      goto L11406;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L11405: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT)
    goto L8107;
  x2 = XEXP (x1, 0);
  goto L11381;

 L8107: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L8108;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L8108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 12
      && (TARGET_SSE))
    {
      return 739;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L11406: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT)
    goto L8131;
  x2 = XEXP (x1, 0);
  goto L11381;

 L8131: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8132;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L8132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 14
      && (TARGET_SSE))
    {
      return 742;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L7704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 687;
    }
  x2 = XEXP (x1, 0);
  goto L11381;

 L7695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L7696;
  goto ret0;

 L7696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == FLOAT)
    goto L7697;
  goto ret0;

 L7697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7698;
  goto ret0;

 L7698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 686;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_12 PARAMS ((rtx, rtx, int *));
static int
recog_12 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8150;
    case SS_PLUS:
      goto L8168;
    case US_PLUS:
      goto L8180;
    case MINUS:
      goto L8192;
    case SS_MINUS:
      goto L8210;
    case US_MINUS:
      goto L8222;
    case ASHIFTRT:
      goto L8322;
    case ABS:
      goto L8352;
    case EQ:
      goto L8382;
    case GT:
      goto L8400;
    case UMAX:
      goto L8418;
    case UMIN:
      goto L8430;
    case VEC_CONCAT:
      goto L8492;
    case VEC_MERGE:
      goto L8516;
    default:
     break;
   }
  goto ret0;

 L8150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8151;
    }
  goto ret0;

 L8151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8152;
    }
  goto ret0;

 L8152: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 745;
    }
  goto ret0;

 L8168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8169;
    }
  goto ret0;

 L8169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8170;
    }
  goto ret0;

 L8170: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 748;
    }
  goto ret0;

 L8180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8181;
    }
  goto ret0;

 L8181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8182;
    }
  goto ret0;

 L8182: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 750;
    }
  goto ret0;

 L8192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8193;
    }
  goto ret0;

 L8193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8194;
    }
  goto ret0;

 L8194: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 752;
    }
  goto ret0;

 L8210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8211;
    }
  goto ret0;

 L8211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8212;
    }
  goto ret0;

 L8212: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 755;
    }
  goto ret0;

 L8222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8223;
    }
  goto ret0;

 L8223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8224;
    }
  goto ret0;

 L8224: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 757;
    }
  goto ret0;

 L8322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == PLUS)
    goto L8323;
  goto ret0;

 L8323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == PLUS)
    goto L8324;
  goto ret0;

 L8324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8325;
    }
  goto ret0;

 L8325: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L8326;
    }
  goto ret0;

 L8326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 8)
    goto L8327;
  goto ret0;

 L8327: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8328;
  goto ret0;

 L8328: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8329;
  goto ret0;

 L8329: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8330;
  goto ret0;

 L8330: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8331;
  goto ret0;

 L8331: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8332;
  goto ret0;

 L8332: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8333;
  goto ret0;

 L8333: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8334;
  goto ret0;

 L8334: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8335;
  goto ret0;

 L8335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 768;
    }
  goto ret0;

 L8352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == MINUS)
    goto L8353;
  goto ret0;

 L8353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8354;
    }
  goto ret0;

 L8354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8355;
    }
  goto ret0;

 L8355: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 770;
    }
  goto ret0;

 L8382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8383;
    }
  goto ret0;

 L8383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8384;
    }
  goto ret0;

 L8384: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 774;
    }
  goto ret0;

 L8400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8401;
    }
  goto ret0;

 L8401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8402;
    }
  goto ret0;

 L8402: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 777;
    }
  goto ret0;

 L8418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8419;
    }
  goto ret0;

 L8419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8420;
    }
  goto ret0;

 L8420: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 780;
    }
  goto ret0;

 L8430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8431;
    }
  goto ret0;

 L8431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8432;
    }
  goto ret0;

 L8432: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 782;
    }
  goto ret0;

 L8492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L11432;
  goto ret0;

 L11432: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L8493;
    case US_TRUNCATE:
      goto L8509;
    default:
     break;
   }
  goto ret0;

 L8493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8494;
    }
  goto ret0;

 L8494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8495;
  goto ret0;

 L8495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8496;
    }
  goto ret0;

 L8496: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 792;
    }
  goto ret0;

 L8509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8510;
    }
  goto ret0;

 L8510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L8511;
  goto ret0;

 L8511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8512;
    }
  goto ret0;

 L8512: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 794;
    }
  goto ret0;

 L8516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8517;
  goto ret0;

 L8517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8518;
    }
  goto ret0;

 L8518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L8519;
  goto ret0;

 L8519: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L11434;
  goto ret0;

 L11434: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 4:
        goto L8520;
      case 0:
        goto L8578;
      default:
        break;
      }
  goto ret0;

 L8520: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8521;
  goto ret0;

 L8521: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L8522;
  goto ret0;

 L8522: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8523;
  goto ret0;

 L8523: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L8524;
  goto ret0;

 L8524: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8525;
  goto ret0;

 L8525: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L8526;
  goto ret0;

 L8526: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8527;
  goto ret0;

 L8527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8528;
  goto ret0;

 L8528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8529;
    }
  goto ret0;

 L8529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L8530;
  goto ret0;

 L8530: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8531;
  goto ret0;

 L8531: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L8532;
  goto ret0;

 L8532: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8533;
  goto ret0;

 L8533: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L8534;
  goto ret0;

 L8534: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8535;
  goto ret0;

 L8535: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L8536;
  goto ret0;

 L8536: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8537;
  goto ret0;

 L8537: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L8538;
  goto ret0;

 L8538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85
      && (TARGET_MMX))
    {
      return 795;
    }
  goto ret0;

 L8578: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L8579;
  goto ret0;

 L8579: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8580;
  goto ret0;

 L8580: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L8581;
  goto ret0;

 L8581: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8582;
  goto ret0;

 L8582: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L8583;
  goto ret0;

 L8583: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8584;
  goto ret0;

 L8584: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L8585;
  goto ret0;

 L8585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8586;
  goto ret0;

 L8586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8587;
    }
  goto ret0;

 L8587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L8588;
  goto ret0;

 L8588: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4)
    goto L8589;
  goto ret0;

 L8589: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8590;
  goto ret0;

 L8590: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5)
    goto L8591;
  goto ret0;

 L8591: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8592;
  goto ret0;

 L8592: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6)
    goto L8593;
  goto ret0;

 L8593: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8594;
  goto ret0;

 L8594: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7)
    goto L8595;
  goto ret0;

 L8595: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8596;
  goto ret0;

 L8596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85
      && (TARGET_MMX))
    {
      return 798;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_13 PARAMS ((rtx, rtx, int *));
static int
recog_13 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8156;
    case SS_PLUS:
      goto L8174;
    case US_PLUS:
      goto L8186;
    case MINUS:
      goto L8198;
    case SS_MINUS:
      goto L8216;
    case US_MINUS:
      goto L8228;
    case MULT:
      goto L8234;
    case TRUNCATE:
      goto L8240;
    case ASHIFTRT:
      goto L8339;
    case VEC_MERGE:
      goto L8359;
    case UNSPEC:
      goto L11454;
    case EQ:
      goto L8388;
    case GT:
      goto L8406;
    case SMAX:
      goto L8424;
    case SMIN:
      goto L8436;
    case LSHIFTRT:
      goto L8454;
    case ASHIFT:
      goto L8473;
    case VEC_CONCAT:
      goto L8500;
    default:
     break;
   }
  goto ret0;

 L8156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8157;
    }
  goto ret0;

 L8157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8158;
    }
  goto ret0;

 L8158: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 746;
    }
  goto ret0;

 L8174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8175;
    }
  goto ret0;

 L8175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8176;
    }
  goto ret0;

 L8176: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 749;
    }
  goto ret0;

 L8186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8187;
    }
  goto ret0;

 L8187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8188;
    }
  goto ret0;

 L8188: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 751;
    }
  goto ret0;

 L8198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8199;
    }
  goto ret0;

 L8199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8200;
    }
  goto ret0;

 L8200: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 753;
    }
  goto ret0;

 L8216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8217;
    }
  goto ret0;

 L8217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8218;
    }
  goto ret0;

 L8218: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 756;
    }
  goto ret0;

 L8228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8229;
    }
  goto ret0;

 L8229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8230;
    }
  goto ret0;

 L8230: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 758;
    }
  goto ret0;

 L8234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8235;
    }
  goto ret0;

 L8235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8236;
    }
  goto ret0;

 L8236: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 759;
    }
  goto ret0;

 L8240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L8241;
  goto ret0;

 L8241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == MULT)
    goto L8242;
  goto ret0;

 L8242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L11455;
  goto ret0;

 L11455: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L8243;
    case ZERO_EXTEND:
      goto L8253;
    default:
     break;
   }
  goto ret0;

 L8243: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8244;
    }
  goto ret0;

 L8244: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L8245;
  goto ret0;

 L8245: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8246;
    }
  goto ret0;

 L8246: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_MMX))
    {
      return 760;
    }
  goto ret0;

 L8253: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8254;
    }
  goto ret0;

 L8254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L8255;
  goto ret0;

 L8255: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8256;
    }
  goto ret0;

 L8256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 761;
    }
  goto ret0;

 L8339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L11457;
  goto ret0;

 L11457: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L8340;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8443;
    }
  goto ret0;

 L8340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == PLUS)
    goto L8341;
  goto ret0;

 L8341: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8342;
    }
  goto ret0;

 L8342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L8343;
    }
  goto ret0;

 L8343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 4)
    goto L8344;
  goto ret0;

 L8344: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8345;
  goto ret0;

 L8345: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8346;
  goto ret0;

 L8346: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8347;
  goto ret0;

 L8347: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8348;
  goto ret0;

 L8348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 769;
    }
  goto ret0;

 L8443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8444;
    }
  goto ret0;

 L8444: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 784;
    }
  goto ret0;

 L8359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L11460;
  goto ret0;

 L11460: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L8543;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8360;
    }
  goto ret0;

 L8543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8544;
    }
  goto ret0;

 L8544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8545;
  goto ret0;

 L8545: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L11461;
  goto ret0;

 L11461: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 0:
        goto L8546;
      case 2:
        goto L8604;
      default:
        break;
      }
  goto ret0;

 L8546: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8547;
  goto ret0;

 L8547: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8548;
  goto ret0;

 L8548: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8549;
  goto ret0;

 L8549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8550;
  goto ret0;

 L8550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8551;
    }
  goto ret0;

 L8551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8552;
  goto ret0;

 L8552: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8553;
  goto ret0;

 L8553: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8554;
  goto ret0;

 L8554: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8555;
  goto ret0;

 L8555: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8556;
  goto ret0;

 L8556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_MMX))
    {
      return 796;
    }
  goto ret0;

 L8604: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8605;
  goto ret0;

 L8605: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8606;
  goto ret0;

 L8606: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8607;
  goto ret0;

 L8607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8608;
  goto ret0;

 L8608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8609;
    }
  goto ret0;

 L8609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L8610;
  goto ret0;

 L8610: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8611;
  goto ret0;

 L8611: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L8612;
  goto ret0;

 L8612: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8613;
  goto ret0;

 L8613: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L8614;
  goto ret0;

 L8614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5
      && (TARGET_MMX))
    {
      return 799;
    }
  goto ret0;

 L8360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L8361;
  goto ret0;

 L8361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == TRUNCATE)
    goto L8362;
  goto ret0;

 L8362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8363;
    }
  goto ret0;

 L8363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L8364;
    }
  goto ret0;

 L8364: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 771;
    }
  goto ret0;

 L11454: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 41)
    goto L8376;
  goto ret0;

 L8376: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8377;
    }
  goto ret0;

 L8377: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8378;
    }
  goto ret0;

 L8378: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 773;
    }
  goto ret0;

 L8388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8389;
    }
  goto ret0;

 L8389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8390;
    }
  goto ret0;

 L8390: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 775;
    }
  goto ret0;

 L8406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8407;
    }
  goto ret0;

 L8407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8408;
    }
  goto ret0;

 L8408: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 778;
    }
  goto ret0;

 L8424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8425;
    }
  goto ret0;

 L8425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8426;
    }
  goto ret0;

 L8426: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 781;
    }
  goto ret0;

 L8436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8437;
    }
  goto ret0;

 L8437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8438;
    }
  goto ret0;

 L8438: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 783;
    }
  goto ret0;

 L8454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8455;
    }
  goto ret0;

 L8455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8456;
    }
  goto ret0;

 L8456: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 786;
    }
  goto ret0;

 L8473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8474;
    }
  goto ret0;

 L8474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8475;
    }
  goto ret0;

 L8475: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 789;
    }
  goto ret0;

 L8500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8501;
  goto ret0;

 L8501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8502;
    }
  goto ret0;

 L8502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8503;
  goto ret0;

 L8503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8504;
    }
  goto ret0;

 L8504: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 793;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_14 PARAMS ((rtx, rtx, int *));
static int
recog_14 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L11479;
    case SUBREG:
      goto L11480;
    default:
     break;
   }
 L10908: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L7605;
    }
 L10916: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L7846;
    }
  goto ret0;

 L11479: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L7577;
    }
  goto L10908;

 L7577: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L7578;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7578: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 665;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L11480: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L7812;
  goto L10908;

 L7812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L11481;
    case SFmode:
      goto L11482;
    default:
      break;
    }
  goto L10908;

 L11481: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L7813;
    }
  goto L10908;

 L7813: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L11483;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11483: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L7814;
    case IOR:
      goto L7892;
    case XOR:
      goto L7938;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L11486;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11486: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SUBREG:
      goto L11488;
    case NOT:
      goto L7861;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10908;

 L11488: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L7815;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7816;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode)
    goto L11489;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11489: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7817;
 L11490: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7826;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7818;
    }
  goto L11490;

 L7818: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 704;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11490;

 L7826: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 705;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L7862;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7862: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L7863;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7864;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7864: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 710;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7893;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7894;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode)
    goto L11491;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11491: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7895;
 L11492: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7904;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7896;
    }
  goto L11492;

 L7896: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 714;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11492;

 L7904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 715;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7939;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7940;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode)
    goto L11493;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11493: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7941;
 L11494: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7950;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7942;
    }
  goto L11494;

 L7942: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 720;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11494;

 L7950: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 721;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L11482: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L7830;
    }
  goto L10908;

 L7830: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L11495;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11495: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L7831;
    case IOR:
      goto L7909;
    case XOR:
      goto L7955;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L11498;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11498: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SUBREG:
      goto L11500;
    case NOT:
      goto L7870;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10908;

 L11500: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L7832;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7832: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7833;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode)
    goto L11501;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11501: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7834;
 L11502: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7843;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7835;
    }
  goto L11502;

 L7835: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 706;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11502;

 L7843: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 707;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L7871;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7872;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7873;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7873: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 711;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7910;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7911;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode)
    goto L11503;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11503: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7912;
 L11504: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7921;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7913;
    }
  goto L11504;

 L7913: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 716;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11504;

 L7921: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 717;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7956;
  x1 = XEXP (x0, 0);
  goto L10908;

 L7956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7957;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode)
    goto L11505;
  x1 = XEXP (x0, 0);
  goto L10908;

 L11505: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L7958;
 L11506: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7967;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7959;
    }
  goto L11506;

 L7959: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 722;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L11506;

 L7967: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 723;
    }
  x1 = XEXP (x0, 0);
  goto L10908;

 L7605: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L7606;
    }
  x1 = XEXP (x0, 0);
  goto L10916;

 L7606: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && !TARGET_64BIT))
    {
      return 672;
    }
 L7610: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 673;
    }
  x1 = XEXP (x0, 0);
  goto L10916;

 L7846: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L11507;
  goto ret0;

 L11507: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L7847;
    case IOR:
      goto L7925;
    case XOR:
      goto L7971;
    default:
     break;
   }
  goto ret0;

 L7847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L11511;
  goto ret0;

 L11511: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L7878;
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L7848;
    }
  goto ret0;

 L7878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, TImode))
    {
      operands[1] = x3;
      goto L7879;
    }
  goto ret0;

 L7879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7880;
    }
  goto ret0;

 L7880: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && !TARGET_SSE2))
    {
      return 712;
    }
 L7887: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 713;
    }
  goto ret0;

 L7848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7849;
    }
  goto ret0;

 L7849: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && !TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 708;
    }
 L7855: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 709;
    }
  goto ret0;

 L7925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L7926;
    }
  goto ret0;

 L7926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7927;
    }
  goto ret0;

 L7927: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && !TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 718;
    }
 L7933: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 719;
    }
  goto ret0;

 L7971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L7972;
    }
  goto ret0;

 L7972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L7973;
    }
  goto ret0;

 L7973: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE && !TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 724;
    }
 L7979: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 725;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_15 PARAMS ((rtx, rtx, int *));
static int
recog_15 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L8703;
    case MINUS:
      goto L8709;
    case SMAX:
      goto L8739;
    case SMIN:
      goto L8745;
    case MULT:
      goto L8751;
    case VEC_CONCAT:
      goto L8806;
    case FLOAT:
      goto L8869;
    case UNSPEC:
      goto L11541;
    case VEC_SELECT:
      goto L8947;
    default:
     break;
   }
  goto ret0;

 L8703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8704;
    }
  goto ret0;

 L8704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8705;
    }
  goto ret0;

 L8705: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 806;
    }
  goto ret0;

 L8709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L11546;
  goto ret0;

 L11546: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8710;
    }
 L11547: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8716;
    }
  goto ret0;

 L8710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8711;
    }
  x2 = XEXP (x1, 0);
  goto L11547;

 L8711: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 807;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11547;

 L8716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8717;
    }
  goto ret0;

 L8717: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 808;
    }
  goto ret0;

 L8739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8740;
    }
  goto ret0;

 L8740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8741;
    }
  goto ret0;

 L8741: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 812;
    }
  goto ret0;

 L8745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8746;
    }
  goto ret0;

 L8746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8747;
    }
  goto ret0;

 L8747: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 813;
    }
  goto ret0;

 L8751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8752;
    }
  goto ret0;

 L8752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8753;
    }
  goto ret0;

 L8753: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 814;
    }
  goto ret0;

 L8806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L11548;
  goto ret0;

 L11548: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L8807;
    case MINUS:
      goto L8828;
    default:
     break;
   }
  goto ret0;

 L8807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8808;
  goto ret0;

 L8808: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L8809;
    }
  goto ret0;

 L8809: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8810;
  goto ret0;

 L8810: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L8811;
  goto ret0;

 L8811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8812;
  goto ret0;

 L8812: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L8813;
  goto ret0;

 L8813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8814;
  goto ret0;

 L8814: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1)
    goto L8815;
  goto ret0;

 L8815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == PLUS)
    goto L8816;
  goto ret0;

 L8816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8817;
  goto ret0;

 L8817: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L8818;
    }
  goto ret0;

 L8818: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8819;
  goto ret0;

 L8819: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L8820;
  goto ret0;

 L8820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8821;
  goto ret0;

 L8821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L8822;
  goto ret0;

 L8822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8823;
  goto ret0;

 L8823: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1
      && (TARGET_3DNOW))
    {
      return 818;
    }
  goto ret0;

 L8828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8829;
  goto ret0;

 L8829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L8830;
    }
  goto ret0;

 L8830: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8831;
  goto ret0;

 L8831: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L8832;
  goto ret0;

 L8832: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8833;
  goto ret0;

 L8833: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L8834;
  goto ret0;

 L8834: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8835;
  goto ret0;

 L8835: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1)
    goto L8836;
  goto ret0;

 L8836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11550;
  goto ret0;

 L11550: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L8837;
    case PLUS:
      goto L8858;
    default:
     break;
   }
  goto ret0;

 L8837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8838;
  goto ret0;

 L8838: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L8839;
    }
  goto ret0;

 L8839: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8840;
  goto ret0;

 L8840: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L8841;
  goto ret0;

 L8841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8842;
  goto ret0;

 L8842: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L8843;
  goto ret0;

 L8843: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8844;
  goto ret0;

 L8844: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1
      && (TARGET_3DNOW_A))
    {
      return 819;
    }
  goto ret0;

 L8858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8859;
  goto ret0;

 L8859: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L8860;
    }
  goto ret0;

 L8860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8861;
  goto ret0;

 L8861: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L8862;
  goto ret0;

 L8862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8863;
  goto ret0;

 L8863: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L8864;
  goto ret0;

 L8864: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8865;
  goto ret0;

 L8865: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1
      && (TARGET_3DNOW_A))
    {
      return 820;
    }
  goto ret0;

 L8869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L11552;
  goto ret0;

 L11552: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L8870;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8886;
    }
  goto ret0;

 L8870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8871;
  goto ret0;

 L8871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L8872;
  goto ret0;

 L8872: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == VEC_SELECT)
    goto L8873;
  goto ret0;

 L8873: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V2SImode))
    {
      operands[1] = x6;
      goto L8874;
    }
  goto ret0;

 L8874: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == PARALLEL
      && XVECLEN (x6, 0) == 1)
    goto L8875;
  goto ret0;

 L8875: ATTRIBUTE_UNUSED_LABEL
  x7 = XVECEXP (x6, 0, 0);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 0)
    goto L8876;
  goto ret0;

 L8876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8877;
  goto ret0;

 L8877: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L8878;
  goto ret0;

 L8878: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == VEC_SELECT)
    goto L8879;
  goto ret0;

 L8879: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (rtx_equal_p (x6, operands[1]))
    goto L8880;
  goto ret0;

 L8880: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == PARALLEL
      && XVECLEN (x6, 0) == 1)
    goto L8881;
  goto ret0;

 L8881: ATTRIBUTE_UNUSED_LABEL
  x7 = XVECEXP (x6, 0, 0);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 1
      && (TARGET_3DNOW_A))
    {
      return 821;
    }
  goto ret0;

 L8886: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 822;
    }
  goto ret0;

 L11541: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L11554;
    case 2:
      goto L11555;
    default:
      break;
    }
  goto ret0;

 L11554: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 50:
      goto L8896;
    case 53:
      goto L8913;
    default:
      break;
    }
  goto ret0;

 L8896: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8897;
    }
  goto ret0;

 L8897: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 824;
    }
  goto ret0;

 L8913: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8914;
    }
  goto ret0;

 L8914: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 827;
    }
  goto ret0;

 L11555: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 51:
      goto L8901;
    case 52:
      goto L8907;
    case 54:
      goto L8918;
    default:
      break;
    }
  goto ret0;

 L8901: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8902;
    }
  goto ret0;

 L8902: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8903;
    }
  goto ret0;

 L8903: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 825;
    }
  goto ret0;

 L8907: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8908;
    }
  goto ret0;

 L8908: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8909;
    }
  goto ret0;

 L8909: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 826;
    }
  goto ret0;

 L8918: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8919;
    }
  goto ret0;

 L8919: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8920;
    }
  goto ret0;

 L8920: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 828;
    }
  goto ret0;

 L8947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8948;
    }
  goto ret0;

 L8948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8949;
  goto ret0;

 L8949: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L8950;
  goto ret0;

 L8950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_3DNOW_A))
    {
      return 831;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_16 PARAMS ((rtx, rtx, int *));
static int
recog_16 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L10851;
    case CCFPmode:
      goto L10843;
    case CCFPUmode:
      goto L10844;
    case CCmode:
      goto L10845;
    case SImode:
      goto L10846;
    case QImode:
      goto L10855;
    case DImode:
      goto L10862;
    case SFmode:
      goto L10867;
    case DFmode:
      goto L10869;
    case XFmode:
      goto L10871;
    case TFmode:
      goto L10872;
    case TImode:
      goto L10885;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L2;
 L226: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case CCFPmode:
      goto L10892;
    case CCFPUmode:
      goto L10893;
    default:
      break;
    }
 L377: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case STRICT_LOW_PART:
      goto L378;
    case REG:
      goto L10894;
    case PC:
      goto L5853;
    default:
     break;
   }
 L1333: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1334;
    }
 L7516: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L7517;
 L7552: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case V4SFmode:
      goto L10895;
    case V4SImode:
      goto L10896;
    case V8QImode:
      goto L10910;
    case V4HImode:
      goto L10898;
    case V2SImode:
      goto L10899;
    case V2SFmode:
      goto L10900;
    case TImode:
      goto L10901;
    case SImode:
      goto L10909;
    case DImode:
      goto L10912;
    case SFmode:
      goto L10914;
    case CCFPmode:
      goto L10918;
    case CCFPUmode:
      goto L10919;
    default:
      break;
    }
 L8674: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L8675;
 L8701: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case V2SFmode:
      goto L10925;
    case V2SImode:
      goto L10926;
    case V8QImode:
      goto L10927;
    case V4HImode:
      goto L10928;
    default:
      break;
    }
  goto ret0;

 L10851: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10843: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 18)
    goto L146;
  goto L1;

 L146: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L147;
  x1 = XEXP (x0, 0);
  goto L1;

 L147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10959;
    case DFmode:
      goto L10960;
    case XFmode:
      goto L10961;
    case TFmode:
      goto L10962;
    default:
      break;
    }
 L212: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L213;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10959: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L148;
    }
  goto L212;

 L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L149;
    }
  x2 = XEXP (x1, 0);
  goto L212;

 L149: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 19;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L212;

 L10960: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L161;
    }
  goto L212;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L162;
    }
  x2 = XEXP (x1, 0);
  goto L212;

 L162: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 21;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L212;

 L10961: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L174;
    }
  goto L212;

 L174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L175;
    }
  x2 = XEXP (x1, 0);
  goto L212;

 L175: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 23;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L212;

 L10962: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L180;
    }
  goto L212;

 L180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L181;
    }
  x2 = XEXP (x1, 0);
  goto L212;

 L181: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 24;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L212;

 L213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == FLOAT)
    goto L214;
  x1 = XEXP (x0, 0);
  goto L1;

 L214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L215;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L215: ATTRIBUTE_UNUSED_LABEL
  if ((0 && TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (XEXP (SET_SRC (PATTERN (insn)), 1)) == GET_MODE (operands[0])))
    {
      return 29;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10844: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 18)
    goto L198;
  goto L1;

 L198: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L199;
  x1 = XEXP (x0, 0);
  goto L1;

 L199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L200;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L201;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L201: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 27;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10845: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L222;
  goto L1;

 L222: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 10)
    goto L223;
  x1 = XEXP (x0, 0);
  goto L1;

 L223: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L224;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L224: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 31;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L10846: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10855: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10862: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10867: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L592;
    }
 L10868: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L907;
    }
 L10876: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L912;
    }
 L10877: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L917;
    }
 L10886: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L3955;
    }
 L10888: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L4054;
    }
  goto L1;

 L592: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L593;
    }
 L596: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_no_elim_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L597;
    }
  x1 = XEXP (x0, 0);
  goto L10868;

 L593: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 88;
    }
  x1 = XEXP (x0, 1);
  goto L596;

 L597: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 89;
    }
  x1 = XEXP (x0, 0);
  goto L10868;

 L907: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L908;
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L601;
    }
  x1 = XEXP (x0, 0);
  goto L10876;

 L908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L909;
    }
  x1 = XEXP (x0, 0);
  goto L10876;

 L909: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 141;
    }
  x1 = XEXP (x0, 0);
  goto L10876;

 L601: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode))))
    {
      return 90;
    }
  x1 = XEXP (x0, 0);
  goto L10876;

 L912: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L11113;
  x1 = XEXP (x0, 0);
  goto L10877;

 L11113: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L913;
    case NEG:
      goto L3927;
    case ABS:
      goto L4112;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10877;

 L913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L11116;
    case XFmode:
      goto L11117;
    case TFmode:
      goto L11118;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L11116: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L914;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L914: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 142;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L11117: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L932;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L932: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 145;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L11118: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L945;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L945: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 147;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L3927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3928;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L3928: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 355;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L4112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4113;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L4113: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (ABS, SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 374;
    }
  x1 = XEXP (x0, 0);
  goto L10877;

 L917: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L11119;
  x1 = XEXP (x0, 0);
  goto L10886;

 L11119: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L918;
    case FLOAT:
      goto L1111;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10886;

 L918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L919;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L919: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_80387 && TARGET_SSE2))
    {
      return 143;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11121;
    case SImode:
      goto L11122;
    case DImode:
      goto L11123;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L11121: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1112;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L1112: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE))
    {
      return 167;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L11122: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1117;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L1117: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE || TARGET_MIX_SSE_I387)))
    {
      return 168;
    }
 L1122: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 169;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L11123: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1127;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L1127: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE || !TARGET_64BIT || TARGET_MIX_SSE_I387)))
    {
      return 170;
    }
 L1132: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_80387 && (!TARGET_SSE || TARGET_MIX_SSE_I387)))
    {
      return 171;
    }
 L1137: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_SSE))
    {
      return 172;
    }
  x1 = XEXP (x0, 0);
  goto L10886;

 L3955: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L11124;
  x1 = XEXP (x0, 0);
  goto L10888;

 L11124: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L3956;
    case ABS:
      goto L4141;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10888;

 L3956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3957;
    }
  x1 = XEXP (x0, 0);
  goto L10888;

 L3957: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE
   && ix86_unary_operator_ok (NEG, SFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 357;
    }
  x1 = XEXP (x0, 0);
  goto L10888;

 L4141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4142;
    }
  x1 = XEXP (x0, 0);
  goto L10888;

 L4142: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && ix86_unary_operator_ok (ABS, SFmode, operands) && !TARGET_SSE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 376;
    }
  x1 = XEXP (x0, 0);
  goto L10888;

 L4054: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L11126;
  x1 = XEXP (x0, 0);
  goto L1;

 L11126: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1;

 L10869: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L836;
    }
 L10870: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L861;
    }
 L10875: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L866;
    }
 L10878: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L956;
    }
 L10887: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L4013;
    }
 L10889: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L4059;
    }
  goto L1;

 L836: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L837;
  if (general_no_elim_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L612;
    }
  x1 = XEXP (x0, 0);
  goto L10870;

 L837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L838;
    }
  x1 = XEXP (x0, 0);
  goto L10870;

 L838: ATTRIBUTE_UNUSED_LABEL
  if ((0))
    {
      return 128;
    }
  x1 = XEXP (x0, 0);
  goto L10870;

 L612: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES))
    {
      return 92;
    }
 L616: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES))
    {
      return 93;
    }
  x1 = XEXP (x0, 0);
  goto L10870;

 L861: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L862;
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L620;
    }
  x1 = XEXP (x0, 0);
  goto L10875;

 L862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L863;
    }
  x1 = XEXP (x0, 0);
  goto L10875;

 L863: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_80387 || TARGET_SSE2)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 133;
    }
  x1 = XEXP (x0, 0);
  goto L10875;

 L620: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (optimize_size || !TARGET_INTEGER_DFMODE_MOVES)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 94;
    }
 L624: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && !optimize_size && TARGET_INTEGER_DFMODE_MOVES
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 95;
    }
  x1 = XEXP (x0, 0);
  goto L10875;

 L866: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L11153;
  x1 = XEXP (x0, 0);
  goto L10878;

 L11153: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_EXTEND:
      goto L867;
    case FLOAT:
      goto L1141;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10878;

 L867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L868;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L868: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_80387 && TARGET_SSE2
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 134;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L1141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11155;
    case SImode:
      goto L11156;
    case DImode:
      goto L11157;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L11155: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1142;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L1142: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE2))
    {
      return 173;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L11156: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1147;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L1147: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || TARGET_MIX_SSE_I387)))
    {
      return 174;
    }
 L1152: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 175;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L11157: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1157;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L1157: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && (!TARGET_SSE2 || !TARGET_64BIT)))
    {
      return 176;
    }
 L1162: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_80387 && (!TARGET_SSE2 || TARGET_MIX_SSE_I387)))
    {
      return 177;
    }
 L1167: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE2))
    {
      return 178;
    }
  x1 = XEXP (x0, 0);
  goto L10878;

 L956: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L11158;
  x1 = XEXP (x0, 0);
  goto L10887;

 L11158: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L957;
    case NEG:
      goto L3968;
    case ABS:
      goto L4153;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10887;

 L957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case XFmode:
      goto L11161;
    case TFmode:
      goto L11162;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L11161: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L958;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L958: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 149;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L11162: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L971;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L971: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 151;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L3968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3969;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L3969: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (NEG, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 358;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L4153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4154;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L4154: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_unary_operator_ok (ABS, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 377;
    }
  x1 = XEXP (x0, 0);
  goto L10887;

 L4013: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L11163;
  x1 = XEXP (x0, 0);
  goto L10889;

 L11163: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L4014;
    case ABS:
      goto L4199;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10889;

 L4014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4015;
    }
  x1 = XEXP (x0, 0);
  goto L10889;

 L4015: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 361;
    }
 L4027: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 362;
    }
  x1 = XEXP (x0, 0);
  goto L10889;

 L4199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4200;
    }
  x1 = XEXP (x0, 0);
  goto L10889;

 L4200: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 380;
    }
 L4212: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, DFmode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 381;
    }
  x1 = XEXP (x0, 0);
  goto L10889;

 L4059: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L11165;
  x1 = XEXP (x0, 0);
  goto L1;

 L11165: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1;

 L10871: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10872: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L10885: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L2245;
    }
  goto L1;

 L2245: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode
      && GET_CODE (x1) == MULT)
    goto L2246;
  x1 = XEXP (x0, 0);
  goto L1;

 L2246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L11291;
  x1 = XEXP (x0, 0);
  goto L1;

 L11291: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2247;
    case SIGN_EXTEND:
      goto L2283;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2248;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2249;
  x1 = XEXP (x0, 0);
  goto L1;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2250;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2250: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 256;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2284;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2285;
  x1 = XEXP (x0, 0);
  goto L1;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2286;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2286: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 258;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L3;
  x1 = XEXP (x0, 0);
  goto L226;

 L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L11294;
    case SImode:
      goto L11296;
    case HImode:
      goto L11298;
    case QImode:
      goto L11300;
    default:
      break;
    }
 L79: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L80;
    }
 L88: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode)
    goto L11303;
  x1 = XEXP (x0, 0);
  goto L226;

 L11294: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L10;
    case NEG:
      goto L1428;
    case SUBREG:
    case REG:
    case MEM:
      goto L11293;
    default:
      x1 = XEXP (x0, 0);
      goto L226;
   }
 L11293: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L10: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L11;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L11: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L12: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 1;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L1428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1429;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L1429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1430;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L1430: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 204;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5;
    }
 L17: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L18;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L5: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 0;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L17;

 L18: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 2;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L11296: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MINUS)
    goto L29;
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L23;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L29: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L30;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L30: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L31;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 4;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L24;
    }
 L36: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L37;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L24: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 3;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L36;

 L37: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 5;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L11298: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MINUS)
    goto L48;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L42;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L48: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L49;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L49: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L50;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L50: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 7;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L43;
    }
 L55: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L56;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L43: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 6;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L55;

 L56: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode)))
    {
      return 8;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L11300: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MINUS)
    goto L73;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L61;
    }
 L11301: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L98;
  goto L79;

 L73: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L74;
    }
  goto L79;

 L74: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L75;
    }
  goto L79;

 L75: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 11;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L61: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L62;
    }
 L67: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L68;
    }
  x2 = XEXP (x1, 0);
  goto L11301;

 L62: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 9;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L67;

 L68: ATTRIBUTE_UNUSED_LABEL
  if (((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 10;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L11301;

 L98: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L99;
  goto L79;

 L99: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L100;
    }
  goto L79;

 L100: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L101;
  goto L79;

 L101: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L102;
  goto L79;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L103;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L103: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)))
    {
      return 14;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L79;

 L80: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L81;
  x2 = XEXP (x1, 0);
  goto L88;

 L81: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L82;
  x2 = XEXP (x1, 0);
  goto L88;

 L82: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L83;
    }
  x2 = XEXP (x1, 0);
  goto L88;

 L83: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L84;
  x2 = XEXP (x1, 0);
  goto L88;

 L84: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 12;
    }
  x2 = XEXP (x1, 0);
  goto L88;

 L11303: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L89;
    }
 L11304: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L108;
  x1 = XEXP (x0, 0);
  goto L226;

 L89: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L90;
  x2 = XEXP (x1, 0);
  goto L11304;

 L90: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L91;
  x2 = XEXP (x1, 0);
  goto L11304;

 L91: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L92;
    }
  x2 = XEXP (x1, 0);
  goto L11304;

 L92: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L93;
  x2 = XEXP (x1, 0);
  goto L11304;

 L93: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 13;
    }
  x2 = XEXP (x1, 0);
  goto L11304;

 L108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L109;
  x1 = XEXP (x0, 0);
  goto L226;

 L109: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L110;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L110: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L111;
  x1 = XEXP (x0, 0);
  goto L226;

 L111: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L112;
  x1 = XEXP (x0, 0);
  goto L226;

 L112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L113;
    }
 L122: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L123;
    }
 L132: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L133;
  x1 = XEXP (x0, 0);
  goto L226;

 L113: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 15;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L122;

 L123: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 16;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L132;

 L133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L134;
  x1 = XEXP (x0, 0);
  goto L226;

 L134: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L135;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L135: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L136;
  x1 = XEXP (x0, 0);
  goto L226;

 L136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8
      && (ix86_match_ccmode (insn, CCmode)))
    {
      return 17;
    }
  x1 = XEXP (x0, 0);
  goto L226;

 L10892: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L227;
  goto L377;

 L227: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L228;
  x1 = XEXP (x0, 0);
  goto L377;

 L228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L229;
    }
  x1 = XEXP (x0, 0);
  goto L377;

 L229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L230;
    }
 L235: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L236;
    }
  x1 = XEXP (x0, 0);
  goto L377;

 L230: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_CMOVE
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[0])))
    {
      return 32;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L235;

 L236: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[0])))
    {
      return 33;
    }
 L242: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[0])))
    {
      return 34;
    }
  x1 = XEXP (x0, 0);
  goto L377;

 L10893: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L245;
  goto L377;

 L245: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L246;
  x1 = XEXP (x0, 0);
  goto L377;

 L246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L247;
    }
  x1 = XEXP (x0, 0);
  goto L377;

 L247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L248;
    }
 L253: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L254;
    }
  x1 = XEXP (x0, 0);
  goto L377;

 L248: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_CMOVE
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 35;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L253;

 L254: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 36;
    }
 L260: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 37;
    }
  x1 = XEXP (x0, 0);
  goto L377;

 L378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L11305;
    case QImode:
      goto L11307;
    default:
      break;
    }
  goto L7516;

 L11305: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L379;
    }
 L11306: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L391;
    }
  goto L7516;

 L379: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L380;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L11306;

 L380: ATTRIBUTE_UNUSED_LABEL
  if (((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 56;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L11306;

 L391: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L392;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L392: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 57;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L11307: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3024;
    }
 L11308: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L427;
    }
  goto L7516;

 L3024: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L11309;
 L415: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L416;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L11308;

 L11309: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L3025;
    case IOR:
      goto L3412;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case LEU:
    case LTU:
    case GEU:
    case GTU:
    case UNORDERED:
    case ORDERED:
    case UNLE:
    case UNLT:
    case UNGE:
    case UNGT:
    case LTGT:
    case UNEQ:
      goto L11311;
    default:
      goto L415;
   }
 L11311: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L5568;
    }
  goto L415;

 L3025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3026;
  goto L415;

 L3026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3027;
    }
  goto L415;

 L3027: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 299;
    }
  x1 = XEXP (x0, 1);
  goto L415;

 L3412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3413;
  goto L415;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3414;
    }
  goto L415;

 L3414: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 321;
    }
  x1 = XEXP (x0, 1);
  goto L415;

 L5568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5569;
  goto L415;

 L5569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return 487;
    }
  goto L415;

 L416: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_PARTIAL_REG_STALL
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 62;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L11308;

 L427: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L428;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L428: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 63;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L10894: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 17)
    goto L1442;
  goto L1333;

 L1442: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L1443;
  x1 = XEXP (x0, 0);
  goto L1333;

 L1443: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1333;

 L5853: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L11343;
    case DImode:
      goto L11344;
    default:
      break;
    }
 L5584: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L5585;
    case LABEL_REF:
      goto L5850;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7516;

 L11343: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5854;
    }
  goto L5584;

 L5854: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 503;
    }
  x1 = XEXP (x0, 1);
  goto L5584;

 L11344: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5858;
    }
  goto L5584;

 L5858: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 504;
    }
  x1 = XEXP (x0, 1);
  goto L5584;

 L5585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L5586;
    }
 L5617: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L5618;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L5586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L5587;
  goto L5617;

 L5587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5588;
  goto L5617;

 L5588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L5589;
    case PC:
      goto L5598;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5617;

 L5589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L5590;

 L5590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 490;
    }
  x2 = XEXP (x1, 0);
  goto L5617;

 L5598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5599;
  x2 = XEXP (x1, 0);
  goto L5617;

 L5599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 491;

 L5618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L5619;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L5619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L5620;
    }
 L5642: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L5643;
    }
 L5816: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L5817;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L5620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L5621;
    case PC:
      goto L5690;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5642;

 L5621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L5622;

 L5622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 492;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5642;

 L5690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5691;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5642;

 L5691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L5692;

 L5692: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 495;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5642;

 L5643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L5644;
    case PC:
      goto L5714;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5816;

 L5644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L5645;

 L5645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    goto L11345;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5816;

 L11345: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 493;
    }
 L11346: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 494;
    }
 L11347: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 498;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5816;

 L5714: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5715;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5816;

 L5715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L5716;

 L5716: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 496;
    }
 L5740: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 497;
    }
 L5793: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 499;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5816;

 L5817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L5818;
    case PC:
      goto L5844;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7516;

 L5818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L5819;

 L5819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 500;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L5844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5845;
  x1 = XEXP (x0, 0);
  goto L7516;

 L5845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L5846;

 L5846: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 501;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L5850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 502;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PLUS)
    goto L1335;
  x1 = XEXP (x0, 0);
  goto L7516;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1370;
    case MULT:
      goto L1353;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MULT)
    goto L1371;
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1337;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1371: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1372;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1372: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1373;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1374;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L1375;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1375: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])))
    {
      return 200;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1338;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1339;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1339: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 196;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1354;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const248_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1355;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1356;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L1356: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 198;
    }
  x1 = XEXP (x0, 0);
  goto L7516;

 L7517: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L7518;
  x1 = XEXP (x0, 0);
  goto L7552;

 L7518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L7519;
  x1 = XEXP (x0, 0);
  goto L7552;

 L7519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11348;
    case DImode:
      goto L11349;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L7552;

 L11348: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7520;
    }
 L11350: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7534;
    }
  x1 = XEXP (x0, 0);
  goto L7552;

 L7520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L7521;

 L7521: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 653;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11350;

 L7534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L7535;

 L7535: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 655;
    }
  x1 = XEXP (x0, 0);
  goto L7552;

 L11349: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7527;
    }
 L11351: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7541;
    }
  x1 = XEXP (x0, 0);
  goto L7552;

 L7527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7528;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11351;

 L7528: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 654;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11351;

 L7541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L7542;

 L7542: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 656;
    }
  x1 = XEXP (x0, 0);
  goto L7552;

 L10895: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L7553;
    }
 L10902: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L7581;
    }
 L10911: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L7647;
    }
 L10913: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L7657;
    }
  goto L8674;

 L7553: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L11353;
  x1 = XEXP (x0, 0);
  goto L10902;

 L11353: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L11356;
    case VEC_MERGE:
      goto L7682;
    case SUBREG:
    case REG:
    case MEM:
      goto L11352;
    default:
      x1 = XEXP (x0, 0);
      goto L10902;
   }
 L11352: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L7554;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L11356: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L11358;
  x1 = XEXP (x0, 0);
  goto L10902;

 L11358: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 38:
      goto L7614;
    case 39:
      goto L7619;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7614: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7615;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7615: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 674;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7619: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7620;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7620: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 675;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7683;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7684;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L11360;
  x1 = XEXP (x0, 0);
  goto L10902;

 L11360: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 12:
        goto L11362;
      case 3:
        goto L11363;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L10902;

 L11362: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM)))
    {
      return 684;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L11363: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM)))
    {
      return 685;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7554: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 659;
    }
  x1 = XEXP (x0, 0);
  goto L10902;

 L7581: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L7582;
    }
  x1 = XEXP (x0, 0);
  goto L10911;

 L7582: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 666;
    }
  x1 = XEXP (x0, 0);
  goto L10911;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L7648;
  x1 = XEXP (x0, 0);
  goto L10913;

 L7648: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7649;
    }
  x1 = XEXP (x0, 0);
  goto L10913;

 L7649: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 680;
    }
  x1 = XEXP (x0, 0);
  goto L10913;

 L7657: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L11364;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11364: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_MERGE:
      goto L7658;
    case UNSPEC:
      goto L11376;
    case PLUS:
      goto L7721;
    case MINUS:
      goto L7735;
    case MULT:
      goto L7749;
    case DIV:
      goto L7763;
    case SQRT:
      goto L7801;
    case SMAX:
      goto L8076;
    case SMIN:
      goto L8090;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L11382;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11382: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11376: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L11407;
    case 1:
      goto L11408;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L11407: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 41)
    goto L7714;
  x1 = XEXP (x0, 0);
  goto L8674;

 L7714: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7715;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7715: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7716;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7716: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7717;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7717: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 689;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L11408: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 42:
      goto L7777;
    case 43:
      goto L7789;
    case 45:
      goto L7983;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7777: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7778;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7778: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 698;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7789: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7790;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7790: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 700;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7983: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_SSE))
    {
      return 726;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7722;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7723;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7723: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 690;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7736;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7737;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7737: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 692;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7750;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7751;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7751: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 694;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7764;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7765;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7765: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 696;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7802;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7802: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 702;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8077;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L8078;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8078: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 735;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L8091;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L8092;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8092: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 737;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10896: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L7557;
    }
 L10903: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L7585;
    }
  if (register_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L7986;
    }
  goto L8674;

 L7557: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L7558;
    }
  x1 = XEXP (x0, 0);
  goto L10903;

 L7558: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 660;
    }
  x1 = XEXP (x0, 0);
  goto L10903;

 L7585: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L7586;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7586: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 667;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7986: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SImode)
    goto L11412;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11412: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NOT:
      goto L7993;
    case VEC_MERGE:
      goto L8000;
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
    case UNEQ:
    case UNLT:
    case UNLE:
    case LTGT:
    case GE:
    case GT:
      goto L11411;
    default:
      x1 = XEXP (x0, 0);
      goto L8674;
   }
 L11411: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V4SImode))
    {
      operands[3] = x1;
      goto L7987;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (sse_comparison_operator (x2, V4SImode))
    {
      operands[3] = x2;
      goto L7994;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L7995;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L7996;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7996: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 728;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L11415;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11415: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L8009;
  if (sse_comparison_operator (x2, V4SImode))
    {
      operands[3] = x2;
      goto L8001;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8009: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, V4SImode))
    {
      operands[3] = x3;
      goto L8010;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8010: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4SFmode))
    {
      operands[1] = x4;
      goto L8011;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8011: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V4SFmode))
    {
      operands[2] = x4;
      goto L8012;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L8013;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L8014;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 730;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8002;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L8003;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L8004;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_SSE))
    {
      return 729;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7988;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L7989;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7989: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 727;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10910: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L7633;
 L10897: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7561;
    }
 L10906: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L7597;
    }
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L8149;
    }
  goto L8674;

 L7633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11416;
    case DImode:
      goto L11417;
    default:
      break;
    }
  goto L10897;

 L11416: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7634;
    }
  goto L10897;

 L7634: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 32)
    goto L7635;
  x1 = XEXP (x0, 0);
  goto L10897;

 L7635: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7636;
    }
  x1 = XEXP (x0, 0);
  goto L10897;

 L7636: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7637;
    }
  x1 = XEXP (x0, 0);
  goto L10897;

 L7637: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT))
    {
      return 678;
    }
  x1 = XEXP (x0, 0);
  goto L10897;

 L11417: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7641;
    }
  goto L10897;

 L7641: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 32)
    goto L7642;
  x1 = XEXP (x0, 0);
  goto L10897;

 L7642: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7643;
    }
  x1 = XEXP (x0, 0);
  goto L10897;

 L7643: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L7644;
    }
  x1 = XEXP (x0, 0);
  goto L10897;

 L7644: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT))
    {
      return 679;
    }
  x1 = XEXP (x0, 0);
  goto L10897;

 L7561: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L7562;
    }
  x1 = XEXP (x0, 0);
  goto L10906;

 L7562: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 661;
    }
  x1 = XEXP (x0, 0);
  goto L10906;

 L7597: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L7598;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7598: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 670;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8149: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L11418;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11418: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8674;

 L10898: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7565;
    }
 L10905: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L7593;
    }
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L8155;
    }
  goto L8674;

 L7565: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L7566;
    }
  x1 = XEXP (x0, 0);
  goto L10905;

 L7566: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 662;
    }
  x1 = XEXP (x0, 0);
  goto L10905;

 L7593: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L7594;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7594: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 669;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8155: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L11436;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11436: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L8674;

 L10899: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7569;
    }
 L10904: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L7589;
    }
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L8111;
    }
  goto L8674;

 L7569: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L7570;
    }
  x1 = XEXP (x0, 0);
  goto L10904;

 L7570: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 663;
    }
  x1 = XEXP (x0, 0);
  goto L10904;

 L7589: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L7590;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7590: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 668;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8111: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L11463;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11463: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L8112;
    case PLUS:
      goto L8162;
    case MINUS:
      goto L8204;
    case EQ:
      goto L8394;
    case GT:
      goto L8412;
    case ASHIFTRT:
      goto L8448;
    case LSHIFTRT:
      goto L8460;
    case ASHIFT:
      goto L8479;
    case VEC_MERGE:
      goto L8560;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L11472;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11472: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L8113;
    case UNSPEC:
      goto L11474;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8114;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8115;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8115: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L8116;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8116: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1
      && (TARGET_SSE))
    {
      return 740;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L11474: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L8121;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8121: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8122;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8123;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8123: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L8124;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8124: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1
      && (TARGET_SSE))
    {
      return 741;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L11476;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11476: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L8261;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8163;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8262;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8262: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8263;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8263: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8264;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8264: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8265;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8265: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L8266;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8266: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 2)
    goto L8267;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8268;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8268: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8269;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8269: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8270;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8270: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8271;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8271: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L8272;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8272: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 2)
    goto L8273;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == MULT)
    goto L8274;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8275;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8275: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8276;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8276: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L8277;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8277: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8278;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8278: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 1)
    goto L8279;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8279: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 3)
    goto L8280;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L8281;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8281: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L8282;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8282: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L8283;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8283: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L8284;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8284: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 1)
    goto L8285;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8285: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 3
      && (TARGET_MMX))
    {
      return 762;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8164;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8164: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 747;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8204: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8205;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8206;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8206: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 754;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8395;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8396;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8396: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 776;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8413;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8414;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8414: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 779;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8449;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8450;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8450: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 785;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8461;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8462;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 787;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8480;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8481;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8481: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 790;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8561;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8562;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L8563;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8563: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L11477;
  x1 = XEXP (x0, 0);
  goto L8674;

 L11477: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 0:
        goto L8564;
      case 1:
        goto L8622;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8564: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8565;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8566;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8567;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L8568;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8568: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8569;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8569: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8570;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_MMX))
    {
      return 797;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8622: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8623;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8624;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8625;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L8626;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8626: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8627;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8627: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L8628;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1
      && (TARGET_MMX))
    {
      return 800;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10900: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L7573;
    }
 L10907: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L7601;
    }
  goto L8674;

 L7573: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L7574;
    }
  x1 = XEXP (x0, 0);
  goto L10907;

 L7574: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 664;
    }
  x1 = XEXP (x0, 0);
  goto L10907;

 L7601: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L7602;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7602: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 671;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10901: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L8674;

 L10909: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7623;
    }
 L10924: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8671;
    }
  goto L8674;

 L7623: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L11512;
  x1 = XEXP (x0, 0);
  goto L10924;

 L11512: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L11515;
    case VEC_SELECT:
      goto L8136;
    case ZERO_EXTEND:
      goto L8368;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10924;

 L11515: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L7624;
  x1 = XEXP (x0, 0);
  goto L10924;

 L7624: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V4SFmode:
      goto L11516;
    case V8QImode:
      goto L11517;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L11516: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7625;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L7625: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE))
    {
      return 676;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L11517: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7630;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L7630: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 677;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L11518;
  x1 = XEXP (x0, 0);
  goto L10924;

 L11518: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L8137;
    case UNSPEC:
      goto L11520;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8138;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8139;
  x1 = XEXP (x0, 0);
  goto L10924;

 L8139: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 743;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L11520: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L8144;
  x1 = XEXP (x0, 0);
  goto L10924;

 L8144: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8145;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L8146;
  x1 = XEXP (x0, 0);
  goto L10924;

 L8146: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 744;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8369;
  x1 = XEXP (x0, 0);
  goto L10924;

 L8369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8370;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8371;
  x1 = XEXP (x0, 0);
  goto L10924;

 L8371: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8372;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8372: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 772;
    }
  x1 = XEXP (x0, 0);
  goto L10924;

 L8671: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 40)
    goto L8672;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8672: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_MMX))
    {
      return 803;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10912: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7652;
    }
 L10923: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8288;
    }
  goto L8674;

 L7652: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L7653;
  x1 = XEXP (x0, 0);
  goto L10923;

 L7653: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7654;
    }
  x1 = XEXP (x0, 0);
  goto L10923;

 L7654: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE || TARGET_3DNOW_A))
    {
      return 681;
    }
  x1 = XEXP (x0, 0);
  goto L10923;

 L8288: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 45)
    goto L8289;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8289: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L11521;
 L8303: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (TARGET_MMX))
    {
      return 765;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L11521: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case IOR:
      goto L8290;
    case XOR:
      goto L8297;
    case AND:
      goto L8308;
    case LSHIFTRT:
      goto L8467;
    case ASHIFT:
      goto L8486;
    default:
     break;
   }
  goto L8303;

 L8290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8291;
    }
  goto L8303;

 L8291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8292;
    }
  goto L8303;

 L8292: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 763;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8303;

 L8297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8298;
    }
  goto L8303;

 L8298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8299;
    }
  goto L8303;

 L8299: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 764;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8303;

 L8308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L11527;
  goto L8303;

 L11527: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L8316;
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8309;
    }
  goto L8303;

 L8316: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L8317;
    }
  goto L8303;

 L8317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8318;
    }
  goto L8303;

 L8318: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 767;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8303;

 L8309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8310;
    }
  goto L8303;

 L8310: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 766;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8303;

 L8467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8468;
    }
  goto L8303;

 L8468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8469;
    }
  goto L8303;

 L8469: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 788;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8303;

 L8486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8487;
    }
  goto L8303;

 L8487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L8488;
    }
  goto L8303;

 L8488: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 791;
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L8303;

 L10914: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L7707;
    }
  goto L8674;

 L7707: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L7708;
  x1 = XEXP (x0, 0);
  goto L8674;

 L7708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L7709;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L7709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L7710;
  x1 = XEXP (x0, 0);
  goto L8674;

 L7710: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_SSE))
    {
      return 688;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10918: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L8017;
  goto L8674;

 L8017: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (sse_comparison_operator (x1, CCFPmode))
    {
      operands[2] = x1;
      goto L8018;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8019;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L8020;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8021;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8021: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8022;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8023;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8024;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8025;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8025: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE))
    {
      return 731;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L10919: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L8028;
  goto L8674;

 L8028: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (sse_comparison_operator (x1, CCFPUmode))
    {
      operands[2] = x1;
      goto L8029;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8030;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L8031;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8032;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8032: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L8033;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L8034;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L8035;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8036;
  x1 = XEXP (x0, 0);
  goto L8674;

 L8036: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0
      && (TARGET_SSE))
    {
      return 732;
    }
  x1 = XEXP (x0, 0);
  goto L8674;

 L8675: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 44)
    goto L8676;
  x1 = XEXP (x0, 0);
  goto L8701;

 L8676: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_SSE || TARGET_3DNOW_A))
    {
      return 804;
    }
  x1 = XEXP (x0, 0);
  goto L8701;

 L10925: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L8702;
    }
  goto ret0;

 L8702: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L11528;
  goto ret0;

 L11528: ATTRIBUTE_UNUSED_LABEL
  return recog_15 (x0, insn, pnum_clobbers);

 L10926: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L8720;
    }
  goto ret0;

 L8720: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L11559;
  goto ret0;

 L11559: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case GT:
      goto L8721;
    case GE:
      goto L8727;
    case EQ:
      goto L8733;
    case FIX:
      goto L8794;
    case SIGN_EXTEND:
      goto L8799;
    case VEC_SELECT:
      goto L8940;
    default:
     break;
   }
  goto ret0;

 L8721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8722;
    }
  goto ret0;

 L8722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8723;
    }
  goto ret0;

 L8723: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 809;
    }
  goto ret0;

 L8727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8728;
    }
  goto ret0;

 L8728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8729;
    }
  goto ret0;

 L8729: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 810;
    }
  goto ret0;

 L8733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8734;
    }
  goto ret0;

 L8734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L8735;
    }
  goto ret0;

 L8735: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 811;
    }
  goto ret0;

 L8794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L8795;
    }
  goto ret0;

 L8795: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 816;
    }
  goto ret0;

 L8799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L8800;
  goto ret0;

 L8800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == FIX)
    goto L8801;
  goto ret0;

 L8801: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L8802;
    }
  goto ret0;

 L8802: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW_A))
    {
      return 817;
    }
  goto ret0;

 L8940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8941;
    }
  goto ret0;

 L8941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L8942;
  goto ret0;

 L8942: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L8943;
  goto ret0;

 L8943: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0
      && (TARGET_3DNOW_A))
    {
      return 830;
    }
  goto ret0;

 L10927: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L8889;
    }
  goto ret0;

 L8889: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 49)
    goto L8890;
  goto ret0;

 L8890: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8891;
    }
  goto ret0;

 L8891: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8892;
    }
  goto ret0;

 L8892: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_3DNOW))
    {
      return 823;
    }
  goto ret0;

 L10928: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L8923;
    }
  goto ret0;

 L8923: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L8924;
  goto ret0;

 L8924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L8925;
  goto ret0;

 L8925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == PLUS)
    goto L8926;
  goto ret0;

 L8926: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == MULT)
    goto L8927;
  goto ret0;

 L8927: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L8928;
  goto ret0;

 L8928: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L8929;
    }
  goto ret0;

 L8929: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L8930;
  goto ret0;

 L8930: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L8931;
    }
  goto ret0;

 L8931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L8932;
  goto ret0;

 L8932: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L8933;
  goto ret0;

 L8933: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L8934;
  goto ret0;

 L8934: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L8935;
  goto ret0;

 L8935: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768)
    goto L8936;
  goto ret0;

 L8936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16
      && (TARGET_3DNOW))
    {
      return 829;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_17 PARAMS ((rtx, rtx, int *));
static int
recog_17 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L293;
    case PLUS:
      goto L1249;
    case MINUS:
      goto L1927;
    case AND:
      goto L2918;
    case IOR:
      goto L3239;
    case XOR:
      goto L3509;
    case NEG:
      goto L3814;
    case ASHIFT:
      goto L4455;
    case ASHIFTRT:
      goto L4717;
    case LSHIFTRT:
      goto L5053;
    case ROTATE:
      goto L5303;
    case ROTATERT:
      goto L5447;
    default:
     break;
   }
  goto ret0;

 L293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L294;
  goto ret0;

 L294: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L295;
  goto ret0;

 L295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L296;
  goto ret0;

 L296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L297;
  goto ret0;

 L297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L298;
  goto ret0;

 L298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4
      && (!TARGET_64BIT))
    {
      return 42;
    }
  goto ret0;

 L1249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11610;
  goto ret0;

 L11610: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1250;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1469;
    }
  goto ret0;

 L1250: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LTU)
    goto L1251;
  goto ret0;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1252;
  goto ret0;

 L1252: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1253;
  goto ret0;

 L1253: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1254;
    }
  goto ret0;

 L1254: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1255;
    }
  goto ret0;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1256;
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 188;
    }
  goto ret0;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1470;
    }
  goto ret0;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1471;
  goto ret0;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 207;
    }
  goto ret0;

 L1927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1928;
    }
  goto ret0;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1929;
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1975;
    }
  goto ret0;

 L1929: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LTU)
    goto L1930;
  goto ret0;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1931;
  goto ret0;

 L1931: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1932;
  goto ret0;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1933;
    }
  goto ret0;

 L1933: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1934;
  goto ret0;

 L1934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 235;
    }
  goto ret0;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1976;
  goto ret0;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 237;
    }
  goto ret0;

 L2918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2919;
    }
  goto ret0;

 L2919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2920;
    }
  goto ret0;

 L2920: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2921;
  goto ret0;

 L2921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 292;
    }
  goto ret0;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11613;
  goto ret0;

 L11613: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L4431;
    case ASHIFTRT:
      goto L4693;
    case SUBREG:
    case REG:
    case MEM:
      goto L11612;
    default:
      goto ret0;
   }
 L11612: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3240;
    }
  goto ret0;

 L4431: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4432;
  goto ret0;

 L4432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4433;
    }
  goto ret0;

 L4433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L4434;
  goto ret0;

 L4434: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4435;
    }
  goto ret0;

 L4435: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L4436;
  goto ret0;

 L4436: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L4437;
  goto ret0;

 L4437: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L4438;
  goto ret0;

 L4438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4439;
  goto ret0;

 L4439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 407;
    }
  goto ret0;

 L4693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4694;
  goto ret0;

 L4694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4695;
    }
  goto ret0;

 L4695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L4696;
  goto ret0;

 L4696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4697;
    }
  goto ret0;

 L4697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L4698;
  goto ret0;

 L4698: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L4699;
  goto ret0;

 L4699: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L4700;
  goto ret0;

 L4700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4701;
  goto ret0;

 L4701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 425;
    }
  goto ret0;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3241;
    }
  goto ret0;

 L3241: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3242;
  goto ret0;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 310;
    }
  goto ret0;

 L3509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3510;
    }
  goto ret0;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3511;
    }
  goto ret0;

 L3511: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3512;
  goto ret0;

 L3512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 328;
    }
  goto ret0;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3815;
    }
  goto ret0;

 L3815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3816;
  goto ret0;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 347;
    }
  goto ret0;

 L4455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4456;
    }
  goto ret0;

 L4456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4457;
    }
  goto ret0;

 L4457: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4458;
  goto ret0;

 L4458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 408;
    }
  goto ret0;

 L4717: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4718;
    }
  goto ret0;

 L4718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L11615;
 L4778: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4779;
    }
  goto ret0;

 L11615: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4719;
    }
 L11616: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4749;
    }
  goto L4778;

 L4719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4720;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L11616;

 L4720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 426;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L11616;

 L4749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4778;

 L4750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 428;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4778;

 L4779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4780;
  goto ret0;

 L4780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 430;
    }
  goto ret0;

 L5053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5054;
    }
  goto ret0;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5055;
    }
 L5084: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5085;
    }
  goto ret0;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5056;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5084;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 450;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5084;

 L5085: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5086;
  goto ret0;

 L5086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 452;
    }
  goto ret0;

 L5303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5304;
    }
  goto ret0;

 L5304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5305;
    }
 L5334: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5335;
    }
  goto ret0;

 L5305: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5306;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5334;

 L5306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 468;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5334;

 L5335: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5336;
  goto ret0;

 L5336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, SImode, operands)))
    {
      return 470;
    }
  goto ret0;

 L5447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5448;
    }
  goto ret0;

 L5448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5449;
    }
 L5478: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5479;
    }
  goto ret0;

 L5449: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5450;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5478;

 L5450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 478;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5478;

 L5479: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5480;
  goto ret0;

 L5480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, SImode, operands)))
    {
      return 480;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_18 PARAMS ((rtx, rtx, int *));
static int
recog_18 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L11592;
    case ZERO_EXTRACT:
      goto L1769;
    default:
     break;
   }
 L11566: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L292;
    }
 L11567: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L336;
    }
  goto ret0;

 L11592: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L272;
    }
  goto L11566;

 L272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_no_elim_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L273;
    }
  x2 = XEXP (x1, 0);
  goto L11566;

 L273: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L274;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11566;

 L274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L275;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11566;

 L275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (!TARGET_64BIT))
    {
      return 40;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11566;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L1770;
    }
  goto ret0;

 L1770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1771;
  goto ret0;

 L1771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L1772;
  goto ret0;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11593;
  goto ret0;

 L11593: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1773;
    case AND:
      goto L3062;
    case XOR:
      goto L3676;
    default:
     break;
   }
  goto ret0;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1774;
  goto ret0;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1775;
    }
  goto ret0;

 L1775: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1776;
  goto ret0;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1829;
  goto ret0;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1830;
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1778;
    }
 L1803: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1804;
    }
  goto ret0;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1831;
    }
  goto ret0;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1832;
  goto ret0;

 L1832: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L1833;
  goto ret0;

 L1833: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1834;
  goto ret0;

 L1834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 229;
    }
  goto ret0;

 L1778: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1779;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1803;

 L1779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 227;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1803;

 L1804: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1805;
  goto ret0;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 228;
    }
  goto ret0;

 L3062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3063;
  goto ret0;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3064;
    }
  goto ret0;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3065;
  goto ret0;

 L3065: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3114;
  goto ret0;

 L3114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L11596;
 L3066: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3067;
    }
  goto ret0;

 L11596: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L3115;
    case ZERO_EXTRACT:
      goto L3171;
    default:
     break;
   }
  goto L3066;

 L3115: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3116;
    }
 L3143: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3144;
    }
  goto L3066;

 L3116: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3117;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3143;

 L3117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 304;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3143;

 L3144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3145;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3066;

 L3145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 305;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3066;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3172;
    }
  goto L3066;

 L3172: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3173;
  goto L3066;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3174;
  goto L3066;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3066;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 306;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3066;

 L3067: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3068;
  goto ret0;

 L3068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && ((unsigned HOST_WIDE_INT)INTVAL (operands[2]) <= 0xff))
    {
      return 302;
    }
  goto ret0;

 L3676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3677;
  goto ret0;

 L3677: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3678;
    }
  goto ret0;

 L3678: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3679;
  goto ret0;

 L3679: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3680;
  goto ret0;

 L3680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3681;
  goto ret0;

 L3681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3682;
    }
  goto ret0;

 L3682: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3683;
  goto ret0;

 L3683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3684;
  goto ret0;

 L3684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3685;
  goto ret0;

 L3685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 339;
    }
  goto ret0;

 L292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11598;
  x2 = XEXP (x1, 0);
  goto L11567;

 L11598: ATTRIBUTE_UNUSED_LABEL
  tem = recog_17 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L11567;

 L336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11618;
 L302: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L303;
    }
 L312: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L313;
    }
  goto ret0;

 L11618: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L682;
    case MULT:
      goto L2143;
    case DIV:
      goto L2581;
    case UDIV:
      goto L2734;
    case UNSPEC_VOLATILE:
      goto L11624;
    case IF_THEN_ELSE:
      goto L7001;
    case SUBREG:
    case REG:
      goto L11617;
    default:
      goto L302;
   }
 L11617: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L337;
    }
  goto L302;

 L682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L11625;
    case QImode:
      goto L11626;
    default:
      break;
    }
  goto L302;

 L11625: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L683;
    }
  goto L302;

 L683: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L684;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 107;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L11626: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L729;
    }
  goto L302;

 L729: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L730;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11627;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L11627: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11629;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L11629: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11631;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L11631: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 112;
    }
 L11632: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 113;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2144;
    }
  goto L302;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2145;
    }
  goto L302;

 L2145: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2146;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 250;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2582;
    }
  goto L302;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2583;
    }
  goto L302;

 L2583: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2585;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L2586;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2587;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (!optimize_size && !TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 271;
    }
 L2611: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3])
      && (optimize_size || TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 272;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2735;
    }
  goto L302;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2736;
    }
  goto L302;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2737;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2738;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L2739;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2740;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 277;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L11624: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 1)
    goto L5963;
  goto L302;

 L5963: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L5964;
  goto L302;

 L5964: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L5965;
  goto L302;

 L5965: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L5966;
  goto L302;

 L5966: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (symbolic_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L5967;
    }
  goto L302;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == MINUS)
    goto L5968;
  goto L302;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) == PC)
    goto L5969;
  goto L302;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  operands[2] = x6;
  goto L5970;

 L5970: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5971;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L5971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 518;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L7001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LTU)
    goto L7002;
  goto L302;

 L7002: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L7003;
  goto L302;

 L7003: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L7004;
  goto L302;

 L7004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    goto L7005;
  goto L302;

 L7005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L7006;
  goto L302;

 L7006: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7007;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L7007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 615;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L337: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L338;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L339;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 48;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L302;

 L303: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L304;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L312;

 L304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 43;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L312;

 L313: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L314;
  goto ret0;

 L314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) == -1
   && (TARGET_PENTIUM || optimize_size)))
    {
      return 44;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_19 PARAMS ((rtx, rtx, int *));
static int
recog_19 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L365;
    }
 L11580: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1587;
    }
  goto ret0;

 L365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L11634;
  x2 = XEXP (x1, 0);
  goto L11580;

 L11634: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L699;
    case MULT:
      goto L2173;
    case DIV:
      goto L2658;
    case SUBREG:
    case REG:
      goto L11633;
    default:
      x2 = XEXP (x1, 0);
      goto L11580;
   }
 L11633: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L366;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L700;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L701;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11637;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L11637: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11639;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L11639: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11641;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L11641: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 109;
    }
 L11642: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 110;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L11644;
  x2 = XEXP (x1, 0);
  goto L11580;

 L11644: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2202;
    case SIGN_EXTEND:
      goto L2220;
    case SUBREG:
    case REG:
    case MEM:
      goto L11643;
    default:
      x2 = XEXP (x1, 0);
      goto L11580;
   }
 L11643: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2174;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2203;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2204;
  x2 = XEXP (x1, 0);
  goto L11580;

 L2204: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2205;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2205: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2206;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 254;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2221;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2222;
  x2 = XEXP (x1, 0);
  goto L11580;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2223;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2223: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2224;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 255;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2175;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2175: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2176;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 252;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2659;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2660;
    }
  x2 = XEXP (x1, 0);
  goto L11580;

 L2660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2661;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2662;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L2663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2664;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_HIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 274;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L366: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L367;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L368;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_PARTIAL_REG_STALL))
    {
      return 54;
    }
 L375: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && (! TARGET_PARTIAL_REG_STALL))
    {
      return 55;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11580;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L11646;
  goto ret0;

 L11646: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1588;
    case MINUS:
      goto L2053;
    case AND:
      goto L2975;
    case IOR:
      goto L3344;
    case XOR:
      goto L3614;
    case NEG:
      goto L3875;
    case ASHIFT:
      goto L4512;
    case ASHIFTRT:
      goto L4861;
    case LSHIFTRT:
      goto L5167;
    case ROTATE:
      goto L5363;
    case ROTATERT:
      goto L5507;
    default:
     break;
   }
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1589;
    }
  goto ret0;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1590;
    }
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1591;
  goto ret0;

 L1591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11657;
  goto ret0;

 L11657: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11659;
  goto ret0;

 L11659: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11661;
  goto ret0;

 L11661: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 215;
    }
 L11662: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 216;
    }
  goto ret0;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2054;
    }
  goto ret0;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2055;
    }
  goto ret0;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2056;
  goto ret0;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 243;
    }
  goto ret0;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2976;
    }
  goto ret0;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2977;
    }
  goto ret0;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2978;
  goto ret0;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 296;
    }
  goto ret0;

 L3344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3345;
    }
  goto ret0;

 L3345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3346;
    }
  goto ret0;

 L3346: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3347;
  goto ret0;

 L3347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 317;
    }
  goto ret0;

 L3614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3615;
    }
  goto ret0;

 L3615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3616;
    }
  goto ret0;

 L3616: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3617;
  goto ret0;

 L3617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 335;
    }
  goto ret0;

 L3875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3876;
    }
  goto ret0;

 L3876: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3877;
  goto ret0;

 L3877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 351;
    }
  goto ret0;

 L4512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4513;
    }
  goto ret0;

 L4513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4514;
    }
  goto ret0;

 L4514: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4515;
  goto ret0;

 L4515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11663;
  goto ret0;

 L11663: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11665;
  goto ret0;

 L11665: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11667;
  goto ret0;

 L11667: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 412;
    }
 L11668: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 413;
    }
  goto ret0;

 L4861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4862;
    }
  goto ret0;

 L4862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4863;
    }
 L4876: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4877;
    }
  goto ret0;

 L4863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4876;

 L4864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 436;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4876;

 L4877: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4878;
  goto ret0;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 437;
    }
  goto ret0;

 L5167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5168;
    }
  goto ret0;

 L5168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5169;
    }
 L5182: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5183;
    }
  goto ret0;

 L5169: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5170;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5182;

 L5170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 458;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5182;

 L5183: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5184;
  goto ret0;

 L5184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 459;
    }
  goto ret0;

 L5363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5364;
    }
  goto ret0;

 L5364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5365;
    }
 L5378: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5379;
    }
  goto ret0;

 L5365: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5366;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5378;

 L5366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 472;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5378;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5380;
  goto ret0;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, HImode, operands)))
    {
      return 473;
    }
  goto ret0;

 L5507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5508;
    }
  goto ret0;

 L5508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5509;
    }
 L5522: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5523;
    }
  goto ret0;

 L5509: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5510;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5522;

 L5510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 482;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5522;

 L5523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5524;
  goto ret0;

 L5524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, HImode, operands)))
    {
      return 483;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_20 PARAMS ((rtx, rtx, int *));
static int
recog_20 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L539;
    case ZERO_EXTEND:
      goto L757;
    case PLUS:
      goto L1202;
    case MINUS:
      goto L1853;
    case AND:
      goto L2891;
    case IOR:
      goto L3194;
    case XOR:
      goto L3464;
    case NEG:
      goto L3779;
    case ASHIFT:
      goto L4373;
    case ASHIFTRT:
      goto L4594;
    case LSHIFTRT:
      goto L4969;
    case ROTATE:
      goto L5275;
    case ROTATERT:
      goto L5419;
    default:
     break;
   }
  goto ret0;

 L539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L540;
  goto ret0;

 L540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L541;
  goto ret0;

 L541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L542;
  goto ret0;

 L542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L543;
  goto ret0;

 L543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L544;
  goto ret0;

 L544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8
      && (TARGET_64BIT))
    {
      return 80;
    }
  goto ret0;

 L757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L758;
    }
  goto ret0;

 L758: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L759;
  goto ret0;

 L759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 115;
    }
  goto ret0;

 L1202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L11710;
  goto ret0;

 L11710: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1217;
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1203;
    }
  goto ret0;

 L1217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == LTU)
    goto L1218;
  goto ret0;

 L1218: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1219;
  goto ret0;

 L1219: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1220;
  goto ret0;

 L1220: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1221;
    }
  goto ret0;

 L1221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1222;
    }
  goto ret0;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1223;
  goto ret0;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 186;
    }
  goto ret0;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1204;
    }
 L1392: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1393;
    }
  goto ret0;

 L1204: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1205;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1392;

 L1205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 185;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1392;

 L1393: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1394;
  goto ret0;

 L1394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 202;
    }
  goto ret0;

 L1853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1868;
    }
  goto ret0;

 L1868: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L1869;
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1855;
    }
 L1890: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1891;
    }
  goto ret0;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == LTU)
    goto L1870;
  goto ret0;

 L1870: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == CCmode
      && GET_CODE (x5) == REG
      && XINT (x5, 0) == 17)
    goto L1871;
  goto ret0;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0)
    goto L1872;
  goto ret0;

 L1872: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1873;
    }
  goto ret0;

 L1873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1874;
  goto ret0;

 L1874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 231;
    }
  goto ret0;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1856;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1890;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 230;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1890;

 L1891: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1892;
  goto ret0;

 L1892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 232;
    }
  goto ret0;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2892;
    }
  goto ret0;

 L2892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_szext_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2893;
    }
  goto ret0;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2894;
  goto ret0;

 L2894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)))
    {
      return 290;
    }
  goto ret0;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3195;
    }
  goto ret0;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3196;
    }
  goto ret0;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3197;
  goto ret0;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands)))
    {
      return 307;
    }
  goto ret0;

 L3464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3465;
    }
  goto ret0;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3466;
    }
  goto ret0;

 L3466: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3467;
  goto ret0;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands)))
    {
      return 325;
    }
  goto ret0;

 L3779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3780;
    }
 L3791: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3792;
    }
  goto ret0;

 L3780: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3781;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3791;

 L3781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 344;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3791;

 L3792: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3793;
  goto ret0;

 L3793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 345;
    }
  goto ret0;

 L4373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4374;
    }
  goto ret0;

 L4374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4375;
    }
  goto ret0;

 L4375: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4376;
  goto ret0;

 L4376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands)))
    {
      return 403;
    }
  goto ret0;

 L4594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4595;
    }
  goto ret0;

 L4595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L11711;
 L4623: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4624;
    }
  goto ret0;

 L11711: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4596;
    }
 L11712: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4610;
    }
  goto L4623;

 L4596: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4597;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L11712;

 L4597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && INTVAL (operands[2]) == 63 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 418;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L11712;

 L4610: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4611;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4623;

 L4611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 419;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4623;

 L4624: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4625;
  goto ret0;

 L4625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 420;
    }
  goto ret0;

 L4969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4970;
    }
  goto ret0;

 L4970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4971;
    }
 L4984: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4985;
    }
  goto ret0;

 L4971: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4972;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4984;

 L4972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 444;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4984;

 L4985: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4986;
  goto ret0;

 L4986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 445;
    }
  goto ret0;

 L5275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5276;
    }
  goto ret0;

 L5276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5277;
    }
 L5290: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5291;
    }
  goto ret0;

 L5277: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5278;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5290;

 L5278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 466;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5290;

 L5291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5292;
  goto ret0;

 L5292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)))
    {
      return 467;
    }
  goto ret0;

 L5419: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5420;
    }
  goto ret0;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5421;
    }
 L5434: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5435;
    }
  goto ret0;

 L5421: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5422;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5434;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 476;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5434;

 L5435: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5436;
  goto ret0;

 L5436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)))
    {
      return 477;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_21 PARAMS ((rtx, rtx, int *));
static int
recog_21 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1271;
    case MULT:
      goto L2129;
    case DIV:
      goto L2504;
    case UDIV:
      goto L2682;
    case IOR:
      goto L3269;
    case XOR:
      goto L3539;
    case LSHIFTRT:
      goto L3826;
    case ASHIFT:
      goto L4416;
    case ASHIFTRT:
      goto L4678;
    case IF_THEN_ELSE:
      goto L6973;
    case SUBREG:
    case REG:
      goto L11713;
    default:
      goto ret0;
   }
 L11713: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L587;
    }
  goto ret0;

 L1271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11724;
  goto ret0;

 L11724: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1272;
    case MINUS:
      goto L1950;
    case MULT:
      goto L2158;
    case AND:
      goto L2933;
    case IOR:
      goto L3254;
    case XOR:
      goto L3524;
    case ASHIFT:
      goto L4470;
    case ASHIFTRT:
      goto L4732;
    case LSHIFTRT:
      goto L5098;
    case ROTATE:
      goto L5318;
    case ROTATERT:
      goto L5462;
    default:
     break;
   }
  goto ret0;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11735;
  goto ret0;

 L11735: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == PLUS)
    goto L1273;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1484;
    }
  goto ret0;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == LTU)
    goto L1274;
  goto ret0;

 L1274: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == CCmode
      && GET_CODE (x6) == REG
      && XINT (x6, 0) == 17)
    goto L1275;
  goto ret0;

 L1275: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L1276;
  goto ret0;

 L1276: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1277;
    }
  goto ret0;

 L1277: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1278;
    }
  goto ret0;

 L1278: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1279;
  goto ret0;

 L1279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 189;
    }
  goto ret0;

 L1484: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1485;
    }
  goto ret0;

 L1485: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1486;
  goto ret0;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 208;
    }
  goto ret0;

 L1950: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1951;
    }
  goto ret0;

 L1951: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L1952;
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1990;
    }
  goto ret0;

 L1952: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == LTU)
    goto L1953;
  goto ret0;

 L1953: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == CCmode
      && GET_CODE (x6) == REG
      && XINT (x6, 0) == 17)
    goto L1954;
  goto ret0;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 0)
    goto L1955;
  goto ret0;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (general_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1956;
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1957;
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 236;
    }
  goto ret0;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1991;
  goto ret0;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 238;
    }
  goto ret0;

 L2158: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2159;
    }
  goto ret0;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2160;
    }
  goto ret0;

 L2160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2161;
  goto ret0;

 L2161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 251;
    }
  goto ret0;

 L2933: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2934;
    }
  goto ret0;

 L2934: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2935;
    }
  goto ret0;

 L2935: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2936;
  goto ret0;

 L2936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 293;
    }
  goto ret0;

 L3254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3255;
    }
  goto ret0;

 L3255: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3256;
    }
  goto ret0;

 L3256: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3257;
  goto ret0;

 L3257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 311;
    }
  goto ret0;

 L3524: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3525;
    }
  goto ret0;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3526;
    }
  goto ret0;

 L3526: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3527;
  goto ret0;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 329;
    }
  goto ret0;

 L4470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4471;
    }
  goto ret0;

 L4471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4472;
    }
  goto ret0;

 L4472: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4473;
  goto ret0;

 L4473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 409;
    }
  goto ret0;

 L4732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4733;
    }
  goto ret0;

 L4733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11737;
 L4793: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4794;
    }
  goto ret0;

 L11737: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4734;
    }
 L11738: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4764;
    }
  goto L4793;

 L4734: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4735;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11738;

 L4735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 427;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11738;

 L4764: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4765;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4793;

 L4765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 429;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4793;

 L4794: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4795;
  goto ret0;

 L4795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 431;
    }
  goto ret0;

 L5098: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5099;
    }
  goto ret0;

 L5099: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5100;
    }
  goto ret0;

 L5100: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5101;
  goto ret0;

 L5101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 453;
    }
  goto ret0;

 L5318: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5319;
    }
  goto ret0;

 L5319: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5320;
    }
 L5349: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5350;
    }
  goto ret0;

 L5320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5321;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5349;

 L5321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 469;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5349;

 L5350: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5351;
  goto ret0;

 L5351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)))
    {
      return 471;
    }
  goto ret0;

 L5462: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5463;
    }
  goto ret0;

 L5463: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5464;
    }
 L5493: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5494;
    }
  goto ret0;

 L5464: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5465;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5493;

 L5465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 479;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5493;

 L5494: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5495;
  goto ret0;

 L5495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)))
    {
      return 481;
    }
  goto ret0;

 L2129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L11740;
  goto ret0;

 L11740: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2256;
    case SIGN_EXTEND:
      goto L2292;
    case SUBREG:
    case REG:
    case MEM:
      goto L11739;
    default:
      goto ret0;
   }
 L11739: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2130;
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2257;
    }
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2258;
  goto ret0;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2259;
    }
  goto ret0;

 L2259: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2260;
  goto ret0;

 L2260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 257;
    }
  goto ret0;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2293;
    }
  goto ret0;

 L2293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2294;
  goto ret0;

 L2294: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2295;
    }
  goto ret0;

 L2295: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2296;
  goto ret0;

 L2296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 259;
    }
  goto ret0;

 L2130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2131;
    }
  goto ret0;

 L2131: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2132;
  goto ret0;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 249;
    }
  goto ret0;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2505;
    }
  goto ret0;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2506;
    }
  goto ret0;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2507;
  goto ret0;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2508;
    }
  goto ret0;

 L2508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L2509;
  goto ret0;

 L2509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2510;
  goto ret0;

 L2510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 268;
    }
 L2534: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 269;
    }
  goto ret0;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2683;
    }
  goto ret0;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2684;
    }
  goto ret0;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2685;
  goto ret0;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2686;
    }
  goto ret0;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L2687;
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2688;
  goto ret0;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 275;
    }
  goto ret0;

 L3269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3270;
  goto ret0;

 L3270: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3271;
    }
  goto ret0;

 L3271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_zext_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3272;
    }
  goto ret0;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3273;
  goto ret0;

 L3273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 312;
    }
  goto ret0;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3540;
  goto ret0;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3541;
    }
  goto ret0;

 L3541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_zext_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3542;
    }
  goto ret0;

 L3542: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3543;
  goto ret0;

 L3543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 330;
    }
  goto ret0;

 L3826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L11742;
  goto ret0;

 L11742: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NEG:
      goto L3827;
    case ZERO_EXTEND:
      goto L5068;
    case SUBREG:
    case REG:
      goto L11743;
    default:
      goto ret0;
   }
 L11743: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5040;
    }
  goto ret0;

 L3827: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ASHIFT)
    goto L3828;
  goto ret0;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L3829;
    }
  goto ret0;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L3830;
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32)
    goto L3831;
  goto ret0;

 L3831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3832;
  goto ret0;

 L3832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 348;
    }
  goto ret0;

 L5068: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5069;
    }
  goto ret0;

 L5069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5070;
    }
  goto ret0;

 L5070: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5071;
  goto ret0;

 L5071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 451;
    }
  goto ret0;

 L5040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5041;
    }
  goto ret0;

 L5041: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5042;
  goto ret0;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 449;
    }
  goto ret0;

 L4416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4417;
    }
  goto ret0;

 L4417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4418;
    }
  goto ret0;

 L4418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4419;
  goto ret0;

 L4419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 406;
    }
  goto ret0;

 L4678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4679;
    }
  goto ret0;

 L4679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4680;
    }
  goto ret0;

 L4680: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4681;
  goto ret0;

 L4681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 424;
    }
  goto ret0;

 L6973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LTU)
    goto L6974;
  goto ret0;

 L6974: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CCmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L6975;
  goto ret0;

 L6975: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6976;
  goto ret0;

 L6976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    goto L6977;
  goto ret0;

 L6977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6978;
  goto ret0;

 L6978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6979;
  goto ret0;

 L6979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 613;
    }
  goto ret0;

 L587: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L588;
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L589;
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_64BIT))
    {
      return 87;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_22 PARAMS ((rtx, rtx, int *));
static int
recog_22 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1406;
    case NEG:
      goto L1419;
    case MINUS:
      goto L1904;
    case AND:
      goto L2906;
    case IOR:
      goto L3209;
    case XOR:
      goto L3479;
    case NOT:
      goto L4297;
    case ASHIFT:
      goto L4388;
    case ASHIFTRT:
      goto L4637;
    case LSHIFTRT:
      goto L4998;
    case SUBREG:
    case REG:
    case MEM:
      goto L11809;
    default:
      goto ret0;
   }
 L11809: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1436;
    }
  goto ret0;

 L1406: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1407;
    }
  goto ret0;

 L1407: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1408;
    }
  goto ret0;

 L1408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1409;
  goto ret0;

 L1409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1410;
    case CLOBBER:
      goto L1455;
    default:
     break;
   }
  goto ret0;

 L1410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1411;
    }
  goto ret0;

 L1411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L1412;
  goto ret0;

 L1412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1413;
  goto ret0;

 L1413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 203;
    }
  goto ret0;

 L1455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1456;
    }
  goto ret0;

 L1456: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 206;
    }
  goto ret0;

 L1419: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1420;
    }
  goto ret0;

 L1420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1421;
    }
  goto ret0;

 L1421: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1422;
  goto ret0;

 L1422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1423;
    }
  goto ret0;

 L1423: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 204;
    }
  goto ret0;

 L1904: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1905;
    }
  goto ret0;

 L1905: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1906;
    }
  goto ret0;

 L1906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1907;
  goto ret0;

 L1907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1908;
  goto ret0;

 L1908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1909;
    }
  goto ret0;

 L1909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L1910;
  goto ret0;

 L1910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1911;
  goto ret0;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 233;
    }
  goto ret0;

 L2906: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2907;
    }
  goto ret0;

 L2907: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_szext_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2908;
    }
  goto ret0;

 L2908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2909;
  goto ret0;

 L2909: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2910;
  goto ret0;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2911;
    }
  goto ret0;

 L2911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == AND)
    goto L2912;
  goto ret0;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2913;
  goto ret0;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands)))
    {
      return 291;
    }
  goto ret0;

 L3209: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3210;
    }
  goto ret0;

 L3210: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L3211;
    }
  goto ret0;

 L3211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3212;
  goto ret0;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3213;
    case CLOBBER:
      goto L3226;
    default:
     break;
   }
  goto ret0;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3214;
    }
  goto ret0;

 L3214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == IOR)
    goto L3215;
  goto ret0;

 L3215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3216;
  goto ret0;

 L3216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)))
    {
      return 308;
    }
  goto ret0;

 L3226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3227;
    }
  goto ret0;

 L3227: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)))
    {
      return 309;
    }
  goto ret0;

 L3479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3480;
    }
  goto ret0;

 L3480: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L3481;
    }
  goto ret0;

 L3481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3482;
  goto ret0;

 L3482: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3483;
    case CLOBBER:
      goto L3496;
    default:
     break;
   }
  goto ret0;

 L3483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3484;
    }
  goto ret0;

 L3484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == XOR)
    goto L3485;
  goto ret0;

 L3485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3486;
  goto ret0;

 L3486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)))
    {
      return 326;
    }
  goto ret0;

 L3496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3497;
    }
  goto ret0;

 L3497: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)))
    {
      return 327;
    }
  goto ret0;

 L4297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4298;
    }
  goto ret0;

 L4298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4299;
  goto ret0;

 L4299: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4300;
  goto ret0;

 L4300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4301;
    }
  goto ret0;

 L4301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L4302;
  goto ret0;

 L4302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)))
    {
      return 394;
    }
  goto ret0;

 L4388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4389;
    }
  goto ret0;

 L4389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4390;
    }
  goto ret0;

 L4390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4391;
  goto ret0;

 L4391: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4392;
  goto ret0;

 L4392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4393;
    }
  goto ret0;

 L4393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFT)
    goto L4394;
  goto ret0;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4395;
  goto ret0;

 L4395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)))
    {
      return 404;
    }
  goto ret0;

 L4637: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4638;
    }
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11851;
  goto ret0;

 L11851: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4639;
    }
 L11852: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4652;
    }
  goto ret0;

 L4639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4640;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11852;

 L4640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4641;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11852;

 L4641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4642;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11852;

 L4642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4643;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11852;

 L4643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4644;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11852;

 L4644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 421;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11852;

 L4652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4653;
  goto ret0;

 L4653: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4654;
  goto ret0;

 L4654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4655;
    }
  goto ret0;

 L4655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4656;
  goto ret0;

 L4656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4657;
  goto ret0;

 L4657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 422;
    }
  goto ret0;

 L4998: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4999;
    }
  goto ret0;

 L4999: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11853;
  goto ret0;

 L11853: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5000;
    }
 L11854: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5013;
    }
  goto ret0;

 L5000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5001;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11854;

 L5001: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5002;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11854;

 L5002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5003;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11854;

 L5003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5004;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11854;

 L5004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5005;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11854;

 L5005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 446;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11854;

 L5013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5014;
  goto ret0;

 L5014: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5015;
  goto ret0;

 L5015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5016;
    }
  goto ret0;

 L5016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5017;
  goto ret0;

 L5017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5018;
  goto ret0;

 L5018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 447;
    }
  goto ret0;

 L1436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1437;
    }
 L1917: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1918;
    }
  goto ret0;

 L1437: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1438;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1917;

 L1438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1439;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1917;

 L1439: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode)))
    {
      return 205;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1917;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1919;
  goto ret0;

 L1919: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1920;
    }
  goto ret0;

 L1920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L1921;
  goto ret0;

 L1921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1922;
  goto ret0;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 234;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_23 PARAMS ((rtx, rtx, int *));
static int
recog_23 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1499;
    case NEG:
      goto L1526;
    case MINUS:
      goto L2004;
    case AND:
      goto L2949;
    case IOR:
      goto L3286;
    case XOR:
      goto L3556;
    case NOT:
      goto L4319;
    case ASHIFT:
      goto L4486;
    case ASHIFTRT:
      goto L4808;
    case LSHIFTRT:
      goto L5114;
    case SUBREG:
    case REG:
    case MEM:
      goto L11812;
    default:
      goto ret0;
   }
 L11812: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1556;
    }
  goto ret0;

 L1499: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1500;
    }
  goto ret0;

 L1500: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1501;
    }
  goto ret0;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1502;
  goto ret0;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1503;
    case CLOBBER:
      goto L1575;
    default:
     break;
   }
  goto ret0;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11855;
    case DImode:
      goto L11856;
    default:
      break;
    }
  goto ret0;

 L11855: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1504;
    }
  goto ret0;

 L1504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1505;
  goto ret0;

 L1505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1506;
  goto ret0;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 209;
    }
  goto ret0;

 L11856: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1517;
    }
  goto ret0;

 L1517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1518;
  goto ret0;

 L1518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1519;
  goto ret0;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1520;
  goto ret0;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 210;
    }
  goto ret0;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1576;
    }
  goto ret0;

 L1576: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 214;
    }
  goto ret0;

 L1526: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1527;
    }
  goto ret0;

 L1527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1528;
    }
  goto ret0;

 L1528: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L1529;
    case SET:
      goto L1546;
    default:
     break;
   }
  goto ret0;

 L1529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1530;
    }
  goto ret0;

 L1530: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 211;
    }
  goto ret0;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1547;
    }
  goto ret0;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1548;
  goto ret0;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1549;
  goto ret0;

 L1549: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1550;
  goto ret0;

 L1550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 212;
    }
  goto ret0;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11857;
  goto ret0;

 L11857: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2005;
    }
 L11858: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2018;
    }
  goto ret0;

 L2005: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2006;
    }
  x4 = XEXP (x3, 0);
  goto L11858;

 L2006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2007;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11858;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2008;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11858;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2009;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11858;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2010;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11858;

 L2010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11858;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 239;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11858;

 L2018: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2019;
    }
  goto ret0;

 L2019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2020;
  goto ret0;

 L2020: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2021;
  goto ret0;

 L2021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2022;
    }
  goto ret0;

 L2022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2023;
  goto ret0;

 L2023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L2024;
  goto ret0;

 L2024: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2025;
  goto ret0;

 L2025: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 240;
    }
  goto ret0;

 L2949: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11860;
  goto ret0;

 L11860: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L3087;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2950;
    }
  goto ret0;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L3088;
    }
  goto ret0;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L3089;
  goto ret0;

 L3089: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L3090;
  goto ret0;

 L3090: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3091;
    }
  goto ret0;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3092;
  goto ret0;

 L3092: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3093;
  goto ret0;

 L3093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3094;
  goto ret0;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3095;
    }
  goto ret0;

 L3095: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3096;
  goto ret0;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3097;
  goto ret0;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3098;
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3099;
  goto ret0;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3100;
  goto ret0;

 L3100: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3101;
  goto ret0;

 L3101: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3102;
  goto ret0;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && (unsigned HOST_WIDE_INT)INTVAL (operands[2]) <= 0xff))
    {
      return 303;
    }
  goto ret0;

 L2950: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2951;
    }
  goto ret0;

 L2951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2952;
  goto ret0;

 L2952: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2953;
  goto ret0;

 L2953: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11861;
    case DImode:
      goto L11862;
    default:
      break;
    }
  goto ret0;

 L11861: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2954;
    }
  goto ret0;

 L2954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2955;
  goto ret0;

 L2955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2956;
  goto ret0;

 L2956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 294;
    }
  goto ret0;

 L11862: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2967;
    }
  goto ret0;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2968;
  goto ret0;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L2969;
  goto ret0;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2970;
  goto ret0;

 L2970: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 295;
    }
  goto ret0;

 L3286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3287;
    }
  goto ret0;

 L3287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3288;
    }
 L3314: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_zext_immediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3315;
    }
  goto ret0;

 L3288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3289;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3290;
    case CLOBBER:
      goto L3331;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11863;
    case DImode:
      goto L11864;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L11863: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3291;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L3292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3293;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 313;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L11864: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3304;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3305;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == IOR)
    goto L3306;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3307;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 314;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3332;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3332: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 316;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3314;

 L3315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3316;
  goto ret0;

 L3316: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3317;
  goto ret0;

 L3317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3318;
    }
  goto ret0;

 L3318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == IOR)
    goto L3319;
  goto ret0;

 L3319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3320;
  goto ret0;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3321;
  goto ret0;

 L3321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 315;
    }
  goto ret0;

 L3556: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11866;
  goto ret0;

 L11866: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L3737;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3557;
    }
  goto ret0;

 L3737: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L3738;
    }
  goto ret0;

 L3738: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L3739;
  goto ret0;

 L3739: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8)
    goto L3740;
  goto ret0;

 L3740: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3741;
    }
 L3762: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3763;
    }
  goto ret0;

 L3741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3742;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3742: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3743;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3744;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3745;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3746;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3747;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L3748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3749;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3749: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3751;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3751: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 342;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3762;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3764;
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3765;
  goto ret0;

 L3765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3766;
  goto ret0;

 L3766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3767;
    }
  goto ret0;

 L3767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3768;
  goto ret0;

 L3768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L3769;
  goto ret0;

 L3769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L3770;
  goto ret0;

 L3770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3771;
  goto ret0;

 L3771: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3772;
  goto ret0;

 L3772: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3773;
  goto ret0;

 L3773: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8)
    goto L3774;
  goto ret0;

 L3774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 343;
    }
  goto ret0;

 L3557: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3558;
    }
 L3584: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_zext_immediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3585;
    }
  goto ret0;

 L3558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3559;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3560;
    case CLOBBER:
      goto L3601;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11867;
    case DImode:
      goto L11868;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L11867: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3561;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L3562;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3563;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 331;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L11868: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3574;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L3576;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3576: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3577;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3577: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 332;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3602;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3602: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 334;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3584;

 L3585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3586;
  goto ret0;

 L3586: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3587;
  goto ret0;

 L3587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3588;
    }
  goto ret0;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == XOR)
    goto L3589;
  goto ret0;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3590;
  goto ret0;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3591;
  goto ret0;

 L3591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 333;
    }
  goto ret0;

 L4319: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11869;
  goto ret0;

 L11869: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4320;
    }
 L11870: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4331;
    }
  goto ret0;

 L4320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4321;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11870;

 L4321: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4322;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11870;

 L4322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4323;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11870;

 L4323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L4324;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11870;

 L4324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 397;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11870;

 L4331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4332;
  goto ret0;

 L4332: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4333;
  goto ret0;

 L4333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4334;
    }
  goto ret0;

 L4334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L4335;
  goto ret0;

 L4335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L4336;
  goto ret0;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 398;
    }
  goto ret0;

 L4486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11871;
  goto ret0;

 L11871: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4487;
    }
 L11872: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4500;
    }
  goto ret0;

 L4487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4488;
    }
  x4 = XEXP (x3, 0);
  goto L11872;

 L4488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4489;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11872;

 L4489: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4490;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11872;

 L4490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4491;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11872;

 L4491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L4492;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11872;

 L4492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4493;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11872;

 L4493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 410;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11872;

 L4500: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4501;
    }
  goto ret0;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4502;
  goto ret0;

 L4502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4503;
  goto ret0;

 L4503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4504;
    }
  goto ret0;

 L4504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L4505;
  goto ret0;

 L4505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L4506;
  goto ret0;

 L4506: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4507;
  goto ret0;

 L4507: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 411;
    }
  goto ret0;

 L4808: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11873;
  goto ret0;

 L11873: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4809;
    }
 L11874: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4822;
    }
  goto ret0;

 L4809: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11875;
  x4 = XEXP (x3, 0);
  goto L11874;

 L11875: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4810;
    }
 L11876: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4837;
    }
  x4 = XEXP (x3, 0);
  goto L11874;

 L4810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4811;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11876;

 L4811: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4812;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11876;

 L4812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4813;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11876;

 L4813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4814;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11876;

 L4814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11876;

 L4815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 432;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11876;

 L4837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4838;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11874;

 L4838: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4839;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11874;

 L4839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4840;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11874;

 L4840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4841;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11874;

 L4841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4842;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11874;

 L4842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 434;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11874;

 L4822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11877;
  goto ret0;

 L11877: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4823;
    }
 L11878: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4850;
    }
  goto ret0;

 L4823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4824;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4824: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4825;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4826;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L4827;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFTRT)
    goto L4828;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4828: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4829;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 433;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11878;

 L4850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4851;
  goto ret0;

 L4851: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4852;
  goto ret0;

 L4852: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4853;
    }
  goto ret0;

 L4853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L4854;
  goto ret0;

 L4854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFTRT)
    goto L4855;
  goto ret0;

 L4855: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4856;
  goto ret0;

 L4856: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 435;
    }
  goto ret0;

 L5114: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11879;
  goto ret0;

 L11879: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5115;
    }
 L11880: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5128;
    }
  goto ret0;

 L5115: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11881;
  x4 = XEXP (x3, 0);
  goto L11880;

 L11881: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5116;
    }
 L11882: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5143;
    }
  x4 = XEXP (x3, 0);
  goto L11880;

 L5116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5117;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11882;

 L5117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5118;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11882;

 L5118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5119;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11882;

 L5119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5120;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11882;

 L5120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5121;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11882;

 L5121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 454;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11882;

 L5143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5144;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11880;

 L5144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5145;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11880;

 L5145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5146;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11880;

 L5146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5147;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11880;

 L5147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5148;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11880;

 L5148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 456;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11880;

 L5128: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11883;
  goto ret0;

 L11883: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5129;
    }
 L11884: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5156;
    }
  goto ret0;

 L5129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5130;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5130: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5131;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5132;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5133;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5134;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5134: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5135;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 455;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11884;

 L5156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5157;
  goto ret0;

 L5157: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5158;
  goto ret0;

 L5158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5159;
    }
  goto ret0;

 L5159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5160;
  goto ret0;

 L5160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5161;
  goto ret0;

 L5161: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5162;
  goto ret0;

 L5162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 457;
    }
  goto ret0;

 L1556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1557;
    }
 L2031: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2032;
    }
  goto ret0;

 L1557: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1558;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2031;

 L1558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1559;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2031;

 L1559: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000))
    {
      return 213;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2031;

 L2032: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2033;
  goto ret0;

 L2033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11885;
    case DImode:
      goto L11886;
    default:
      break;
    }
  goto ret0;

 L11885: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2034;
    }
  goto ret0;

 L2034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2035;
  goto ret0;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2036;
  goto ret0;

 L2036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 241;
    }
  goto ret0;

 L11886: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2045;
    }
  goto ret0;

 L2045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2046;
  goto ret0;

 L2046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L2047;
  goto ret0;

 L2047: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2048;
  goto ret0;

 L2048: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 242;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_24 PARAMS ((rtx, rtx, int *));
static int
recog_24 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1617;
    case NEG:
      goto L1630;
    case MINUS:
      goto L2068;
    case AND:
      goto L2990;
    case IOR:
      goto L3359;
    case XOR:
      goto L3629;
    case NOT:
      goto L4347;
    case ASHIFT:
      goto L4541;
    case ASHIFTRT:
      goto L4890;
    case LSHIFTRT:
      goto L5196;
    case SUBREG:
    case REG:
    case MEM:
      goto L11815;
    default:
      goto ret0;
   }
 L11815: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1647;
    }
  goto ret0;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1618;
    }
  goto ret0;

 L1618: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1619;
    }
  goto ret0;

 L1619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1620;
  goto ret0;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1621;
    case CLOBBER:
      goto L1666;
    default:
     break;
   }
  goto ret0;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1622;
    }
  goto ret0;

 L1622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1623;
  goto ret0;

 L1623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1624;
  goto ret0;

 L1624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 217;
    }
  goto ret0;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1667;
    }
  goto ret0;

 L1667: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 220;
    }
  goto ret0;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1631;
    }
  goto ret0;

 L1631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1632;
    }
  goto ret0;

 L1632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1633;
  goto ret0;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1634;
    }
  goto ret0;

 L1634: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 218;
    }
  goto ret0;

 L2068: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2069;
    }
  goto ret0;

 L2069: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2070;
    }
  goto ret0;

 L2070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2071;
  goto ret0;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2072;
  goto ret0;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2073;
    }
  goto ret0;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2074;
  goto ret0;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2075;
  goto ret0;

 L2075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 244;
    }
  goto ret0;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2991;
    }
  goto ret0;

 L2991: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2992;
    }
  goto ret0;

 L2992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2993;
  goto ret0;

 L2993: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2994;
  goto ret0;

 L2994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2995;
    }
  goto ret0;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L2996;
  goto ret0;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2997;
  goto ret0;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 297;
    }
  goto ret0;

 L3359: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3360;
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3361;
    }
  goto ret0;

 L3361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3362;
  goto ret0;

 L3362: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3363;
    case CLOBBER:
      goto L3376;
    default:
     break;
   }
  goto ret0;

 L3363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3364;
    }
  goto ret0;

 L3364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == IOR)
    goto L3365;
  goto ret0;

 L3365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3366;
  goto ret0;

 L3366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 318;
    }
  goto ret0;

 L3376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3377;
    }
  goto ret0;

 L3377: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 319;
    }
  goto ret0;

 L3629: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3630;
    }
  goto ret0;

 L3630: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3631;
    }
  goto ret0;

 L3631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3632;
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3633;
    case CLOBBER:
      goto L3646;
    default:
     break;
   }
  goto ret0;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3634;
    }
  goto ret0;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == XOR)
    goto L3635;
  goto ret0;

 L3635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3636;
  goto ret0;

 L3636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 336;
    }
  goto ret0;

 L3646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3647;
    }
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 337;
    }
  goto ret0;

 L4347: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4348;
    }
  goto ret0;

 L4348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4349;
  goto ret0;

 L4349: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4350;
  goto ret0;

 L4350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4351;
    }
  goto ret0;

 L4351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NOT)
    goto L4352;
  goto ret0;

 L4352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 400;
    }
  goto ret0;

 L4541: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4542;
    }
  goto ret0;

 L4542: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4543;
    }
  goto ret0;

 L4543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4544;
  goto ret0;

 L4544: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4545;
  goto ret0;

 L4545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4546;
    }
  goto ret0;

 L4546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L4547;
  goto ret0;

 L4547: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4548;
  goto ret0;

 L4548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 414;
    }
  goto ret0;

 L4890: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4891;
    }
  goto ret0;

 L4891: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11887;
  goto ret0;

 L11887: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4892;
    }
 L11888: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4905;
    }
  goto ret0;

 L4892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4893;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11888;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4894;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11888;

 L4894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4895;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11888;

 L4895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4896;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11888;

 L4896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4897;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11888;

 L4897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 438;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11888;

 L4905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4906;
  goto ret0;

 L4906: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4907;
  goto ret0;

 L4907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4908;
    }
  goto ret0;

 L4908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4909;
  goto ret0;

 L4909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4910;
  goto ret0;

 L4910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 439;
    }
  goto ret0;

 L5196: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5197;
    }
  goto ret0;

 L5197: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11889;
  goto ret0;

 L11889: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5198;
    }
 L11890: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5211;
    }
  goto ret0;

 L5198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5199;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11890;

 L5199: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5200;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11890;

 L5200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5201;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11890;

 L5201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5202;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11890;

 L5202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5203;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11890;

 L5203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 460;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11890;

 L5211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5212;
  goto ret0;

 L5212: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5213;
  goto ret0;

 L5213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5214;
    }
  goto ret0;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5215;
  goto ret0;

 L5215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5216;
  goto ret0;

 L5216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 461;
    }
  goto ret0;

 L1647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1648;
    }
 L2081: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2082;
    }
  goto ret0;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1649;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2081;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1650;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2081;

 L1650: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000))
    {
      return 219;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2081;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2083;
  goto ret0;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2084;
    }
  goto ret0;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2085;
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2086;
  goto ret0;

 L2086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 245;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_25 PARAMS ((rtx, rtx, int *));
static int
recog_25 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1708;
    case NEG:
      goto L1721;
    case MINUS:
      goto L2106;
    case AND:
      goto L3033;
    case IOR:
      goto L3420;
    case XOR:
      goto L3705;
    case NOT:
      goto L4363;
    case ASHIFT:
      goto L4582;
    case ASHIFTRT:
      goto L4944;
    case LSHIFTRT:
      goto L5250;
    case SUBREG:
    case REG:
    case MEM:
      goto L11818;
    default:
      goto ret0;
   }
 L11818: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1738;
    }
  goto ret0;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1709;
    }
  goto ret0;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1710;
    }
  goto ret0;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L1711;
  goto ret0;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1712;
    case CLOBBER:
      goto L1757;
    default:
     break;
   }
  goto ret0;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1713;
    }
  goto ret0;

 L1713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1714;
  goto ret0;

 L1714: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1715;
  goto ret0;

 L1715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 223;
    }
  goto ret0;

 L1757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1758;
    }
  goto ret0;

 L1758: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 226;
    }
  goto ret0;

 L1721: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1722;
    }
  goto ret0;

 L1722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1723;
    }
  goto ret0;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1724;
  goto ret0;

 L1724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1725;
    }
  goto ret0;

 L1725: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 224;
    }
  goto ret0;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2107;
    }
  goto ret0;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2108;
    }
  goto ret0;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L2109;
  goto ret0;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2110;
  goto ret0;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2111;
    }
  goto ret0;

 L2111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2112;
  goto ret0;

 L2112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2113;
  goto ret0;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 247;
    }
  goto ret0;

 L3033: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L11891;
  goto ret0;

 L11891: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3034;
    }
 L11892: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L3047;
    }
  goto ret0;

 L3034: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3035;
    }
  x4 = XEXP (x3, 0);
  goto L11892;

 L3035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3036;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11892;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3037;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11892;

 L3037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3038;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11892;

 L3038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L3039;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11892;

 L3039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3040;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11892;

 L3040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 300;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11892;

 L3047: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3048;
    }
  goto ret0;

 L3048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3049;
  goto ret0;

 L3049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3050;
  goto ret0;

 L3050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L3051;
  goto ret0;

 L3051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3052;
  goto ret0;

 L3052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L3053;
  goto ret0;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3054;
  goto ret0;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 301;
    }
  goto ret0;

 L3420: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L11893;
  goto ret0;

 L11893: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3421;
    }
 L11894: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L3434;
    }
  goto ret0;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3422;
    }
  x4 = XEXP (x3, 0);
  goto L11894;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3423;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3424;
    case CLOBBER:
      goto L3451;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3425;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L3426;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3427;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3427: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 322;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3452;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3452: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 324;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11894;

 L3434: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3435;
    }
  goto ret0;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3436;
  goto ret0;

 L3436: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3437;
  goto ret0;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L3438;
  goto ret0;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3439;
  goto ret0;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L3440;
  goto ret0;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3441;
  goto ret0;

 L3441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return 323;
    }
  goto ret0;

 L3705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3706;
    }
  goto ret0;

 L3706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3707;
    }
  goto ret0;

 L3707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3708;
  goto ret0;

 L3708: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3709;
    case CLOBBER:
      goto L3722;
    default:
     break;
   }
  goto ret0;

 L3709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3710;
    }
  goto ret0;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L3711;
  goto ret0;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3712;
  goto ret0;

 L3712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 340;
    }
  goto ret0;

 L3722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3723;
    }
  goto ret0;

 L3723: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 341;
    }
  goto ret0;

 L4363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4364;
    }
  goto ret0;

 L4364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4365;
  goto ret0;

 L4365: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4366;
  goto ret0;

 L4366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4367;
    }
  goto ret0;

 L4367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NOT)
    goto L4368;
  goto ret0;

 L4368: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 402;
    }
  goto ret0;

 L4582: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4583;
    }
  goto ret0;

 L4583: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4584;
    }
  goto ret0;

 L4584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4585;
  goto ret0;

 L4585: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4586;
  goto ret0;

 L4586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4587;
    }
  goto ret0;

 L4587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFT)
    goto L4588;
  goto ret0;

 L4588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4589;
  goto ret0;

 L4589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 417;
    }
  goto ret0;

 L4944: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4945;
    }
  goto ret0;

 L4945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11895;
  goto ret0;

 L11895: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4946;
    }
 L11896: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4959;
    }
  goto ret0;

 L4946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4947;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11896;

 L4947: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4948;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11896;

 L4948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4949;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11896;

 L4949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11896;

 L4950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4951;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11896;

 L4951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 442;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11896;

 L4959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L4960;
  goto ret0;

 L4960: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4961;
  goto ret0;

 L4961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4962;
    }
  goto ret0;

 L4962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L4963;
  goto ret0;

 L4963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4964;
  goto ret0;

 L4964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 443;
    }
  goto ret0;

 L5250: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5251;
    }
  goto ret0;

 L5251: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L11897;
  goto ret0;

 L11897: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5252;
    }
 L11898: ATTRIBUTE_UNUSED_LABEL
  if (const_int_1_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5265;
    }
  goto ret0;

 L5252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5253;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11898;

 L5253: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5254;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11898;

 L5254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5255;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11898;

 L5255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5256;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11898;

 L5256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5257;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11898;

 L5257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 464;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L11898;

 L5265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L5266;
  goto ret0;

 L5266: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5267;
  goto ret0;

 L5267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5268;
    }
  goto ret0;

 L5268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5269;
  goto ret0;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5270;
  goto ret0;

 L5270: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 465;
    }
  goto ret0;

 L1738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1739;
    }
 L2119: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2120;
    }
  goto ret0;

 L1739: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1740;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2119;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1741;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2119;

 L1741: ATTRIBUTE_UNUSED_LABEL
  if ((ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80))
    {
      return 225;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2119;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2121;
  goto ret0;

 L2121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2122;
    }
  goto ret0;

 L2122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2123;
  goto ret0;

 L2123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2124;
  goto ret0;

 L2124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 248;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_26 PARAMS ((rtx, rtx, int *));
static int
recog_26 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11565;
    case HImode:
      goto L11568;
    case QImode:
      goto L11569;
    case DImode:
      goto L11570;
    case SFmode:
      goto L11573;
    case DFmode:
      goto L11574;
    case XFmode:
      goto L11575;
    case TFmode:
      goto L11576;
    case CCmode:
      goto L11579;
    case TImode:
      goto L11583;
    case CCZmode:
      goto L11584;
    default:
      break;
    }
 L383: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case STRICT_LOW_PART:
      goto L384;
    case REG:
      goto L11591;
    case PC:
      goto L5862;
    default:
     break;
   }
 L7491: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L7492;

 L11565: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L383;

 L11568: ATTRIBUTE_UNUSED_LABEL
  tem = recog_19 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L383;

 L11569: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L408;
    }
 L11581: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1678;
    }
  goto L383;

 L408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L11670;
  x2 = XEXP (x1, 0);
  goto L11581;

 L11670: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2187;
    case DIV:
      goto L2463;
    case UDIV:
      goto L2477;
    case SUBREG:
    case REG:
      goto L11669;
    default:
      x2 = XEXP (x1, 0);
      goto L11581;
   }
 L11669: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L409;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2188;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2189;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2189: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2190;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 253;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2464;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2465;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2466;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L2466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH))
    {
      return 266;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L2477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2478;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2479;
    }
  x2 = XEXP (x1, 0);
  goto L11581;

 L2479: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2480;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_QIMODE_MATH))
    {
      return 267;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L409: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L410;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L411;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 61;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11581;

 L1678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L11673;
  x2 = XEXP (x1, 0);
  goto L383;

 L11673: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1679;
    case MINUS:
      goto L2091;
    case AND:
      goto L3002;
    case IOR:
      goto L3389;
    case XOR:
      goto L3659;
    case NEG:
      goto L3898;
    case ASHIFT:
      goto L4553;
    case ASHIFTRT:
      goto L4915;
    case LSHIFTRT:
      goto L5221;
    case ROTATE:
      goto L5391;
    case ROTATERT:
      goto L5535;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L1679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1680;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1681;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11684;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11684: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11686;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11686: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11688;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11688: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 221;
    }
 L11689: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 222;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2092;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L2092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2093;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L2093: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2094;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L2094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 246;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3003;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3004;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3005;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 298;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3390;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3391;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3391: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3392;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 320;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3660;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3661;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3661: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3662;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 338;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3899;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3899: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3900;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 353;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4554;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4555;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4555: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4556;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11690;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11690: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11692;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11692: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11694;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11694: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 415;
    }
 L11695: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 416;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4916;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4917;
    }
 L4930: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4931;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4917: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4930;

 L4918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 440;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4930;

 L4931: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4932;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 441;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L5221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5222;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L5222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5223;
    }
 L5236: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5237;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L5223: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5224;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5236;

 L5224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 462;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5236;

 L5237: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5238;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 463;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5392;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L5392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5393;
    }
 L5406: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5407;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L5393: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5394;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5406;

 L5394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 474;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5406;

 L5407: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5408;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L5408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATE, QImode, operands)))
    {
      return 475;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L5535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5536;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L5536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5537;
    }
 L5550: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5551;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L5537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5538;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5550;

 L5538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_PENTIUM || TARGET_PENTIUMPRO)))
    {
      return 484;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5550;

 L5551: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5552;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L5552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_binary_operator_ok (ROTATERT, QImode, operands)))
    {
      return 485;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11570: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L518;
    }
 L11571: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L538;
    }
 L11572: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L586;
    }
  goto L383;

 L518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_no_elim_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L519;
    }
  x2 = XEXP (x1, 0);
  goto L11571;

 L519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11571;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L521;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11571;

 L521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (TARGET_64BIT))
    {
      return 78;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11571;

 L538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11696;
  x2 = XEXP (x1, 0);
  goto L11572;

 L11696: ATTRIBUTE_UNUSED_LABEL
  tem = recog_20 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L11572;

 L586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11714;
 L548: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L549;
    }
 L558: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L559;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L11714: ATTRIBUTE_UNUSED_LABEL
  tem = recog_21 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L548;

 L549: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L550;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L558;

 L550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed))
    {
      return 81;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L558;

 L559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L560;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) == -1))
    {
      return 82;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11573: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L605;
    }
 L11577: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L892;
    }
 L11585: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L3920;
    }
 L11586: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L3949;
    }
  goto L383;

 L605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11746;
  x2 = XEXP (x1, 0);
  goto L11577;

 L11746: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L7083;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L606;
    }
  x2 = XEXP (x1, 0);
  goto L11577;

 L7083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L7084;
    case GT:
      goto L7176;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11577;

 L7084: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode)
    goto L11747;
  x2 = XEXP (x1, 0);
  goto L11577;

 L11747: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7085;
    }
 L11748: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7104;
    }
  x2 = XEXP (x1, 0);
  goto L11577;

 L7085: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7086;
    }
  x4 = XEXP (x3, 0);
  goto L11748;

 L7086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7087;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11748;

 L7087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7088;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11748;

 L7088: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7089;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11748;

 L7089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && TARGET_IEEE_FP))
    {
      return 623;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11748;

 L7104: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7105;
    }
  x2 = XEXP (x1, 0);
  goto L11577;

 L7105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7106;
  x2 = XEXP (x1, 0);
  goto L11577;

 L7106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7107;
  x2 = XEXP (x1, 0);
  goto L11577;

 L7107: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7108;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L7108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 624;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L7176: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode)
    goto L11749;
  x2 = XEXP (x1, 0);
  goto L11577;

 L11749: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7177;
    }
 L11750: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7196;
    }
  x2 = XEXP (x1, 0);
  goto L11577;

 L7177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7178;
    }
  x4 = XEXP (x3, 0);
  goto L11750;

 L7178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7179;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11750;

 L7179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7180;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11750;

 L7180: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7181;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11750;

 L7181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && TARGET_IEEE_FP))
    {
      return 629;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11750;

 L7196: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7197;
    }
  x2 = XEXP (x1, 0);
  goto L11577;

 L7197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7198;
  x2 = XEXP (x1, 0);
  goto L11577;

 L7198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7199;
  x2 = XEXP (x1, 0);
  goto L11577;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7200;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L7200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 630;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L606: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L607;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L608;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (reload_completed || !TARGET_SSE))
    {
      return 91;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11577;

 L892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11751;
  x2 = XEXP (x1, 0);
  goto L11585;

 L11751: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT_TRUNCATE:
      goto L893;
    case NEG:
      goto L3942;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11585;

 L893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L11753;
    case XFmode:
      goto L11755;
    case TFmode:
      goto L11756;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11585;

 L11753: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L894;
    }
 L11754: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L902;
    }
  x2 = XEXP (x1, 0);
  goto L11585;

 L894: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L895;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11754;

 L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L896;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11754;

 L896: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && !TARGET_SSE2))
    {
      return 139;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11754;

 L902: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L903;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L904;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && TARGET_SSE2))
    {
      return 140;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L11755: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L925;
    }
  x2 = XEXP (x1, 0);
  goto L11585;

 L925: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L926;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L927;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L927: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 144;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L11756: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L938;
    }
  x2 = XEXP (x1, 0);
  goto L11585;

 L938: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L939;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L940;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L940: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 146;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L3942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3943;
    }
  x2 = XEXP (x1, 0);
  goto L11585;

 L3943: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3944;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L3944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3945;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L3945: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 356;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11585;

 L3920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11757;
  x2 = XEXP (x1, 0);
  goto L11586;

 L11757: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3921;
    case ABS:
      goto L4106;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11586;

 L3921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3922;
    }
  x2 = XEXP (x1, 0);
  goto L11586;

 L3922: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3923;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11586;

 L3923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, SFmode, operands)))
    {
      return 355;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11586;

 L4106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4107;
    }
  x2 = XEXP (x1, 0);
  goto L11586;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4108;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11586;

 L4108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (ABS, SFmode, operands)))
    {
      return 374;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11586;

 L3949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11759;
  x2 = XEXP (x1, 0);
  goto L383;

 L11759: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3950;
    case ABS:
      goto L4127;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L3950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3951;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3952;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && !TARGET_SSE
   && ix86_unary_operator_ok (NEG, SFmode, operands)))
    {
      return 357;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4128;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4128: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case USE:
      goto L4129;
    case CLOBBER:
      goto L4137;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4130;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4130: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 375;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && ix86_unary_operator_ok (ABS, SFmode, operands) && !TARGET_SSE))
    {
      return 376;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11574: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L628;
    }
 L11578: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L949;
    }
 L11587: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L3961;
    }
 L11588: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L4007;
    }
  goto L383;

 L628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11762;
  x2 = XEXP (x1, 0);
  goto L11578;

 L11762: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L7129;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L629;
    }
  x2 = XEXP (x1, 0);
  goto L11578;

 L7129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case LT:
      goto L7130;
    case GT:
      goto L7222;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11578;

 L7130: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DFmode)
    goto L11763;
  x2 = XEXP (x1, 0);
  goto L11578;

 L11763: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L7131;
    }
 L11764: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L7150;
    }
  x2 = XEXP (x1, 0);
  goto L11578;

 L7131: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L7132;
    }
  x4 = XEXP (x3, 0);
  goto L11764;

 L7132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7133;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11764;

 L7133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7134;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11764;

 L7134: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7135;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11764;

 L7135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_IEEE_FP && TARGET_SSE_MATH))
    {
      return 626;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11764;

 L7150: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L7151;
    }
  x2 = XEXP (x1, 0);
  goto L11578;

 L7151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7152;
  x2 = XEXP (x1, 0);
  goto L11578;

 L7152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7153;
  x2 = XEXP (x1, 0);
  goto L11578;

 L7153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7154;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L7154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 627;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L7222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DFmode)
    goto L11765;
  x2 = XEXP (x1, 0);
  goto L11578;

 L11765: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L7223;
    }
 L11766: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L7242;
    }
  x2 = XEXP (x1, 0);
  goto L11578;

 L7223: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L7224;
    }
  x4 = XEXP (x3, 0);
  goto L11766;

 L7224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7225;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11766;

 L7225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7226;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11766;

 L7226: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7227;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11766;

 L7227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_IEEE_FP))
    {
      return 632;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11766;

 L7242: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L7243;
    }
  x2 = XEXP (x1, 0);
  goto L11578;

 L7243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L7244;
  x2 = XEXP (x1, 0);
  goto L11578;

 L7244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[2]))
    goto L7245;
  x2 = XEXP (x1, 0);
  goto L11578;

 L7245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7246;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L7246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_IEEE_FP
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 633;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L629: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L630;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L631;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (reload_completed || !TARGET_SSE2))
    {
      return 96;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11578;

 L949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11767;
  x2 = XEXP (x1, 0);
  goto L11587;

 L11767: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT_TRUNCATE:
      goto L950;
    case NEG:
      goto L3983;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11587;

 L950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case XFmode:
      goto L11769;
    case TFmode:
      goto L11770;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L11587;

 L11769: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L951;
    }
  x2 = XEXP (x1, 0);
  goto L11587;

 L951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L952;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L953;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L953: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387))
    {
      return 148;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L11770: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L964;
    }
  x2 = XEXP (x1, 0);
  goto L11587;

 L964: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L965;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L966;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L966: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387))
    {
      return 150;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L3983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3984;
    }
  x2 = XEXP (x1, 0);
  goto L11587;

 L3984: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3985;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L3985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3986;
    }
 L4002: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4003;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L3986: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 359;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L4002;

 L4003: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 360;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11587;

 L3961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11771;
  x2 = XEXP (x1, 0);
  goto L11588;

 L11771: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3962;
    case ABS:
      goto L4147;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11588;

 L3962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3963;
    }
  x2 = XEXP (x1, 0);
  goto L11588;

 L3963: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3964;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11588;

 L3964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (NEG, DFmode, operands)))
    {
      return 358;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11588;

 L4147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4148;
    }
  x2 = XEXP (x1, 0);
  goto L11588;

 L4148: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4149;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11588;

 L4149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (ix86_unary_operator_ok (ABS, DFmode, operands)))
    {
      return 377;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11588;

 L4007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11773;
  x2 = XEXP (x1, 0);
  goto L383;

 L11773: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L4008;
    case ABS:
      goto L4168;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L4008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4009;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4010;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11775;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11775: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11777;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11777: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11779;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11779: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, DFmode, operands)))
    {
      return 361;
    }
 L11780: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, DFmode, operands)))
    {
      return 362;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4169;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4169: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case USE:
      goto L4170;
    case CLOBBER:
      goto L4195;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4171;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4171: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 378;
    }
 L4188: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 379;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11781;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11781: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11783;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11783: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11785;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11785: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, DFmode, operands)))
    {
      return 380;
    }
 L11786: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, DFmode, operands)))
    {
      return 381;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11575: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L667;
    }
 L11589: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L4031;
    }
  goto L383;

 L667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L668;
    }
  x2 = XEXP (x1, 0);
  goto L11589;

 L668: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L669;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11589;

 L669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L670;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11589;

 L670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 105;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11589;

 L4031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L11787;
  x2 = XEXP (x1, 0);
  goto L383;

 L11787: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L4032;
    case ABS:
      goto L4217;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L4032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L4033;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4033: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4034;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (NEG, XFmode, operands)))
    {
      return 363;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L4218;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4218: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4219;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_80387
   && ix86_unary_operator_ok (ABS, XFmode, operands)))
    {
      return 382;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11576: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L674;
    }
 L11590: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, TFmode))
    {
      operands[0] = x2;
      goto L4043;
    }
  goto L383;

 L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, TFmode))
    {
      operands[1] = x2;
      goto L675;
    }
  x2 = XEXP (x1, 0);
  goto L11590;

 L675: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L676;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11590;

 L676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L677;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11590;

 L677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 106;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11590;

 L4043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TFmode)
    goto L11789;
  x2 = XEXP (x1, 0);
  goto L383;

 L11789: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L4044;
    case ABS:
      goto L4229;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L4044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L4045;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4045: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4046;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && ix86_unary_operator_ok (NEG, TFmode, operands)))
    {
      return 364;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, TFmode))
    {
      operands[1] = x3;
      goto L4230;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L4230: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4231;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L4231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_80387 && ix86_unary_operator_ok (ABS, TFmode, operands)))
    {
      return 383;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11579: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L1237;
  goto L383;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 12)
    goto L1238;
  x2 = XEXP (x1, 0);
  goto L383;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L11791;
    case SImode:
      goto L11792;
    case QImode:
      goto L11793;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L11791: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1239;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1240;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1242;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L1243;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1244;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 187;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11792: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1296;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1296: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1297;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1298;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1299;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1300;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1301;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 190;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11793: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1307;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1307: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1308;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L1308: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1309;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1310;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1312;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 191;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11583: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, TImode))
    {
      operands[0] = x2;
      goto L2236;
    }
  goto L383;

 L2236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == MULT)
    goto L2237;
  x2 = XEXP (x1, 0);
  goto L383;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode)
    goto L11794;
  x2 = XEXP (x1, 0);
  goto L383;

 L11794: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2238;
    case SIGN_EXTEND:
      goto L2274;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L2238: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2239;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L2239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2240;
  x2 = XEXP (x1, 0);
  goto L383;

 L2240: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2241;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L2241: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2242;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L2242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 256;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2275;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2276;
  x2 = XEXP (x1, 0);
  goto L383;

 L2276: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2277;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L2277: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2278;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 258;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11584: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L3802;
  goto L383;

 L3802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCZmode
      && GET_CODE (x2) == COMPARE)
    goto L3803;
  x2 = XEXP (x1, 0);
  goto L383;

 L3803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L11796;
    case SImode:
      goto L11797;
    case HImode:
      goto L11799;
    case QImode:
      goto L11800;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L11796: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NEG:
      goto L3804;
    case LSHIFTRT:
      goto L3857;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L383;

 L3804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3805;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3806;
  x2 = XEXP (x1, 0);
  goto L383;

 L3806: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3807;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3808;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NEG)
    goto L3809;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 346;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3857: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == NEG)
    goto L3858;
  x2 = XEXP (x1, 0);
  goto L383;

 L3858: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ASHIFT)
    goto L3859;
  x2 = XEXP (x1, 0);
  goto L383;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L3860;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 32)
    goto L3861;
  x2 = XEXP (x1, 0);
  goto L383;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L3862;
  x2 = XEXP (x1, 0);
  goto L383;

 L3862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3863;
  x2 = XEXP (x1, 0);
  goto L383;

 L3863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3865;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L3866;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == NEG)
    goto L3867;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3867: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ASHIFT)
    goto L3868;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3868: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L3869;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3869: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L3870;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32
      && (TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 350;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11797: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L3846;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6027;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3846: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3847;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3848;
  x2 = XEXP (x1, 0);
  goto L383;

 L3848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3850;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L3851;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 349;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L6027: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6028;
  x2 = XEXP (x1, 0);
  goto L383;

 L6028: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6029;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L6029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6030;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L6030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 5)
    goto L6031;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L6031: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    {
      return 524;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11799: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L3888;
  x2 = XEXP (x1, 0);
  goto L383;

 L3888: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3889;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3890;
  x2 = XEXP (x1, 0);
  goto L383;

 L3890: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3891;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3892;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3892: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NEG)
    goto L3893;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 352;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L11800: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L3911;
  x2 = XEXP (x1, 0);
  goto L383;

 L3911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3912;
    }
  x2 = XEXP (x1, 0);
  goto L383;

 L3912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L3913;
  x2 = XEXP (x1, 0);
  goto L383;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3914;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3915;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NEG)
    goto L3916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L3916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 354;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L383;

 L384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L11802;
    case QImode:
      goto L11803;
    default:
      break;
    }
  goto L7491;

 L11802: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L385;
    }
  goto L7491;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L386;
    }
  x2 = XEXP (x1, 0);
  goto L7491;

 L386: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size)))
    {
      return 57;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L11803: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L421;
    }
 L11804: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L3016;
    }
  goto L7491;

 L421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L422;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11804;

 L422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L423;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11804;

 L423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 63;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11804;

 L3016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L11805;
  x2 = XEXP (x1, 0);
  goto L7491;

 L11805: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L3017;
    case IOR:
      goto L3404;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L7491;

 L3017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3018;
  x2 = XEXP (x1, 0);
  goto L7491;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3019;
    }
  x2 = XEXP (x1, 0);
  goto L7491;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3020;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L3020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 299;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L3404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3405;
  x2 = XEXP (x1, 0);
  goto L7491;

 L3405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3406;
    }
  x2 = XEXP (x1, 0);
  goto L7491;

 L3406: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3407;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L3407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 321;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L11591: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L1404;
  goto L7491;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L1405;
  x2 = XEXP (x1, 0);
  goto L7491;

 L1405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L11807;
    case SImode:
      goto L11810;
    case HImode:
      goto L11813;
    case QImode:
      goto L11816;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L7491;

 L11807: ATTRIBUTE_UNUSED_LABEL
  tem = recog_22 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L7491;

 L11810: ATTRIBUTE_UNUSED_LABEL
  tem = recog_23 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L7491;

 L11813: ATTRIBUTE_UNUSED_LABEL
  tem = recog_24 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L7491;

 L11816: ATTRIBUTE_UNUSED_LABEL
  tem = recog_25 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L7491;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11899;
    case DImode:
      goto L11900;
    default:
      break;
    }
 L5897: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L5898;
  x2 = XEXP (x1, 0);
  goto L7491;

 L11899: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5863;
    }
  goto L5897;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L5897;

 L5864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5865;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L5897;

 L5865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5866;

 L5866: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 505;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L5897;

 L11900: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5871;
    }
  goto L5897;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L5897;

 L5872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L5873;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L5897;

 L5873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L5874;

 L5874: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 506;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L5897;

 L5898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE)
    goto L5899;
  x2 = XEXP (x1, 0);
  goto L7491;

 L5899: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5900;
    }
  x2 = XEXP (x1, 0);
  goto L7491;

 L5900: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L5901;
  x2 = XEXP (x1, 0);
  goto L7491;

 L5901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L5902;
  x2 = XEXP (x1, 0);
  goto L7491;

 L5902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  goto L5903;

 L5903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L5904;
  x2 = XEXP (x1, 0);
  goto L7491;

 L5904: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5905;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L5905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5906;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L5906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5907;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L5907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5908;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L5908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1
      && (!TARGET_64BIT && TARGET_USE_LOOP)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 507;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L7491;

 L7492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L7493;
  goto ret0;

 L7493: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L7494;
  goto ret0;

 L7494: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L11901;
  goto ret0;

 L11901: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7495;
    }
 L11902: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7508;
    }
  goto ret0;

 L7495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L7496;

 L7496: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11902;

 L7497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L7498;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11902;

 L7498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L7499;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11902;

 L7499: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7500;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11902;

 L7500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7501;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11902;

 L7501: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 651;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L11902;

 L7508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L7509;

 L7509: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7510;
  goto ret0;

 L7510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L7511;
  goto ret0;

 L7511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L7512;
  goto ret0;

 L7512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7513;
  goto ret0;

 L7513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7514;
    }
  goto ret0;

 L7514: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 652;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_27 PARAMS ((rtx, rtx, int *));
static int
recog_27 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
      goto L11924;
    case MEM:
      goto L6635;
    default:
     break;
   }
 L11907: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L279;
    }
 L11910: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1055;
    }
 L11913: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2333;
    }
  goto ret0;

 L11924: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 7)
    goto L5999;
  goto L11907;

 L5999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6000;
  x2 = XEXP (x1, 0);
  goto L11907;

 L6000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L6001;
  x2 = XEXP (x1, 0);
  goto L11907;

 L6001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L6002;
  x2 = XEXP (x1, 0);
  goto L11907;

 L6002: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6003;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 6)
    goto L6004;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L6005;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L6006;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6006: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6007;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6008;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (!TARGET_64BIT))
    {
      return 522;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DImode:
      goto L11925;
    case SImode:
      goto L11926;
    default:
      break;
    }
  goto L11907;

 L11925: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6636;
    }
  goto L11907;

 L6636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6637;
    }
  x2 = XEXP (x1, 0);
  goto L11907;

 L6637: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6638;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6639;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6640;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6641;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L11927;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L11927: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8:
        goto L6642;
      case 4:
        goto L6666;
      default:
        break;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6642: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6643;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 595;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6667;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 597;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L11926: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6648;
    }
  goto L11907;

 L6648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6649;
    }
  x2 = XEXP (x1, 0);
  goto L11907;

 L6649: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6651;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6652;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6653;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L6654;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6654: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6655;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L6655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 596;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11907;

 L279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L280;
  x2 = XEXP (x1, 0);
  goto L11910;

 L280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L281;
  x2 = XEXP (x1, 0);
  goto L11910;

 L281: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L282;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L283;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L284;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L285;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L286;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L286: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L287;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L288;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (!TARGET_64BIT))
    {
      return 41;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11910;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FIX)
    goto L1056;
  x2 = XEXP (x1, 0);
  goto L11913;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1057;
    }
  x2 = XEXP (x1, 0);
  goto L11913;

 L1057: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1058;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11913;

 L1058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1059;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11913;

 L1059: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1060;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11913;

 L1060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1061;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11913;

 L1061: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 159;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11913;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L11929;
  goto ret0;

 L11929: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L2334;
    case DIV:
      goto L2568;
    case UDIV:
      goto L2721;
    case UNSPEC:
      goto L11934;
    case PLUS:
      goto L7267;
    default:
     break;
   }
  goto ret0;

 L2334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2335;
  goto ret0;

 L2335: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L2336;
  goto ret0;

 L2336: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L11935;
  goto ret0;

 L11935: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L2337;
    case SIGN_EXTEND:
      goto L2414;
    default:
     break;
   }
  goto ret0;

 L2337: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L2338;
    }
  goto ret0;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L2339;
  goto ret0;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2340;
    }
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L2341;
  goto ret0;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2342;
  goto ret0;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2343;
    }
  goto ret0;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2344;
  goto ret0;

 L2344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 261;
    }
  goto ret0;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L2415;
    }
  goto ret0;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L2416;
  goto ret0;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2417;
    }
  goto ret0;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32)
    goto L2418;
  goto ret0;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2419;
  goto ret0;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2420;
    }
  goto ret0;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2421;
  goto ret0;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 264;
    }
  goto ret0;

 L2568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11937;
  goto ret0;

 L11937: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2569;
    }
 L11938: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2632;
    }
  goto ret0;

 L2569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2570;
    }
  x3 = XEXP (x2, 0);
  goto L11938;

 L2570: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2571;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2572;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L2573;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2574;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L2575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2575: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2576;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11939;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L11939: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11941;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L11941: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11943;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L11943: ATTRIBUTE_UNUSED_LABEL
  if ((!optimize_size && !TARGET_USE_CLTD))
    {
      return 271;
    }
 L11944: ATTRIBUTE_UNUSED_LABEL
  if ((optimize_size || TARGET_USE_CLTD))
    {
      return 272;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11938;

 L2632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2633;
    }
  goto ret0;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2634;
  goto ret0;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2635;
    }
  goto ret0;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L2636;
  goto ret0;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2637;
  goto ret0;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2638;
  goto ret0;

 L2638: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2639;
  goto ret0;

 L2639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2640;
    }
  goto ret0;

 L2640: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 273;
    }
  goto ret0;

 L2721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2722;
    }
  goto ret0;

 L2722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2723;
    }
  goto ret0;

 L2723: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2724;
  goto ret0;

 L2724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2725;
    }
  goto ret0;

 L2725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L2726;
  goto ret0;

 L2726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2727;
  goto ret0;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2728;
  goto ret0;

 L2728: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2729;
    case USE:
      goto L2768;
    default:
     break;
   }
  goto ret0;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 277;
    }
  goto ret0;

 L2768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 278;
    }
  goto ret0;

 L11934: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 0)
    goto L6930;
  goto ret0;

 L6930: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6931;
  goto ret0;

 L6931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6932;
    }
  goto ret0;

 L6932: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6933;
    }
  goto ret0;

 L6933: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6934;
    }
  goto ret0;

 L6934: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6935;
    }
  goto ret0;

 L6935: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6936;
  goto ret0;

 L6936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6937;
  goto ret0;

 L6937: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6938;
  goto ret0;

 L6938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6939;
    }
  goto ret0;

 L6939: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 611;
    }
  goto ret0;

 L7267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7268;
    }
  goto ret0;

 L7268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7269;
    }
  goto ret0;

 L7269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7270;
  goto ret0;

 L7270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L7271;
  goto ret0;

 L7271: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7272;
  goto ret0;

 L7272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L7273;
  goto ret0;

 L7273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (!TARGET_64BIT))
    {
      return 635;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_28 PARAMS ((rtx, rtx, int *));
static int
recog_28 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L2309;
    case ZERO_EXTEND:
      goto L2359;
    case DIV:
      goto L2491;
    case UDIV:
      goto L2669;
    case ASHIFT:
      goto L4400;
    case ASHIFTRT:
      goto L4662;
    case LSHIFTRT:
      goto L5023;
    case UNSPEC:
      goto L11956;
    case PLUS:
      goto L7278;
    default:
     break;
   }
  goto ret0;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2310;
  goto ret0;

 L2310: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L2311;
  goto ret0;

 L2311: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L11957;
  goto ret0;

 L11957: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L2312;
    case SIGN_EXTEND:
      goto L2389;
    default:
     break;
   }
  goto ret0;

 L2312: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L2313;
    }
  goto ret0;

 L2313: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L2314;
  goto ret0;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L2315;
    }
  goto ret0;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 64)
    goto L2316;
  goto ret0;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2317;
  goto ret0;

 L2317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2318;
    }
  goto ret0;

 L2318: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2319;
  goto ret0;

 L2319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 260;
    }
  goto ret0;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L2390;
    }
  goto ret0;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L2391;
  goto ret0;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L2392;
    }
  goto ret0;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 64)
    goto L2393;
  goto ret0;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2394;
  goto ret0;

 L2394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2395;
    }
  goto ret0;

 L2395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2396;
  goto ret0;

 L2396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 263;
    }
  goto ret0;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == TRUNCATE)
    goto L2360;
  goto ret0;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == LSHIFTRT)
    goto L2361;
  goto ret0;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L2362;
  goto ret0;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L11959;
  goto ret0;

 L11959: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case ZERO_EXTEND:
      goto L2363;
    case SIGN_EXTEND:
      goto L2440;
    default:
     break;
   }
  goto ret0;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (nonimmediate_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L2364;
    }
  goto ret0;

 L2364: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L2365;
  goto ret0;

 L2365: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (nonimmediate_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L2366;
    }
  goto ret0;

 L2366: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L2367;
  goto ret0;

 L2367: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2368;
  goto ret0;

 L2368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2369;
    }
  goto ret0;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2370;
  goto ret0;

 L2370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 262;
    }
  goto ret0;

 L2440: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (nonimmediate_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L2441;
    }
  goto ret0;

 L2441: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L2442;
  goto ret0;

 L2442: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (nonimmediate_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L2443;
    }
  goto ret0;

 L2443: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32)
    goto L2444;
  goto ret0;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2445;
  goto ret0;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2446;
    }
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2447;
  goto ret0;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 265;
    }
  goto ret0;

 L2491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L11961;
  goto ret0;

 L11961: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2492;
    }
 L11962: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2555;
    }
  goto ret0;

 L2492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2493;
    }
  x3 = XEXP (x2, 0);
  goto L11962;

 L2493: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2494;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2495;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L2496;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L2498;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2499;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11963;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L11963: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11965;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L11965: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11967;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L11967: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD))
    {
      return 268;
    }
 L11968: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (optimize_size || TARGET_USE_CLTD)))
    {
      return 269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L11962;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2556;
    }
  goto ret0;

 L2556: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2557;
  goto ret0;

 L2557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2558;
    }
  goto ret0;

 L2558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L2559;
  goto ret0;

 L2559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2560;
  goto ret0;

 L2560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2561;
  goto ret0;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2562;
  goto ret0;

 L2562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L2563;
    }
  goto ret0;

 L2563: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 270;
    }
  goto ret0;

 L2669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2670;
    }
  goto ret0;

 L2670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2671;
    }
  goto ret0;

 L2671: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2672;
  goto ret0;

 L2672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2673;
    }
  goto ret0;

 L2673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L2674;
  goto ret0;

 L2674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2675;
  goto ret0;

 L2675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2676;
  goto ret0;

 L2676: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2677;
    case USE:
      goto L2716;
    default:
     break;
   }
  goto ret0;

 L2677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 275;
    }
  goto ret0;

 L2716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3])
      && (TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 276;
    }
  goto ret0;

 L4400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4401;
    }
  goto ret0;

 L4401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4402;
    }
  goto ret0;

 L4402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4403;
  goto ret0;

 L4403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4404;
    }
  goto ret0;

 L4404: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4405;
  goto ret0;

 L4405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE))
    {
      return 405;
    }
  goto ret0;

 L4662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4663;
    }
  goto ret0;

 L4663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4664;
    }
  goto ret0;

 L4664: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4665;
  goto ret0;

 L4665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4666;
    }
  goto ret0;

 L4666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4667;
  goto ret0;

 L4667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE))
    {
      return 423;
    }
  goto ret0;

 L5023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5024;
    }
  goto ret0;

 L5024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5025;
    }
  goto ret0;

 L5025: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5026;
  goto ret0;

 L5026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5027;
    }
  goto ret0;

 L5027: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5028;
  goto ret0;

 L5028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_CMOVE))
    {
      return 448;
    }
  goto ret0;

 L11956: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 0)
    goto L6959;
  goto ret0;

 L6959: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6960;
  goto ret0;

 L6960: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[5] = x4;
      goto L6961;
    }
  goto ret0;

 L6961: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6962;
    }
  goto ret0;

 L6962: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6963;
    }
  goto ret0;

 L6963: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L6964;
    }
  goto ret0;

 L6964: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6965;
  goto ret0;

 L6965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6966;
  goto ret0;

 L6966: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6967;
  goto ret0;

 L6967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6968;
    }
  goto ret0;

 L6968: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 612;
    }
  goto ret0;

 L7278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7279;
    }
  goto ret0;

 L7279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7280;
    }
  goto ret0;

 L7280: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7281;
  goto ret0;

 L7281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L7282;
  goto ret0;

 L7282: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7283;
  goto ret0;

 L7283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L7284;
  goto ret0;

 L7284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (TARGET_64BIT))
    {
      return 636;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_29 PARAMS ((rtx, rtx, int *));
static int
recog_29 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L11917;
    case DImode:
      goto L11918;
    case HImode:
      goto L11920;
    case SFmode:
      goto L11915;
    case DFmode:
      goto L11916;
    case QImode:
      goto L11921;
    default:
      break;
    }
 L5602: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L5603;
  goto ret0;

 L11917: ATTRIBUTE_UNUSED_LABEL
  tem = recog_27 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L5602;

 L11918: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L6012;
 L11908: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L525;
    }
 L11909: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1018;
    }
 L11912: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2308;
    }
  goto L5602;

 L6012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6013;
  x2 = XEXP (x1, 0);
  goto L11908;

 L6013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L6014;
  x2 = XEXP (x1, 0);
  goto L11908;

 L6014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L6015;
  x2 = XEXP (x1, 0);
  goto L11908;

 L6015: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6016;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L6016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 6)
    goto L6017;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L6017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MEM)
    goto L6018;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L6018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 6)
    goto L6019;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L6019: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6020;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L6020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6021;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L6021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (TARGET_64BIT))
    {
      return 523;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11908;

 L525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11945;
  x2 = XEXP (x1, 0);
  goto L11909;

 L11945: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L526;
    case SIGN_EXTEND:
      goto L784;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11909;

 L526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L527;
  x2 = XEXP (x1, 0);
  goto L11909;

 L527: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L528;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L529;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L530;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L531;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L532;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L532: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L533;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L534;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && (TARGET_64BIT))
    {
      return 79;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L785;
    }
  x2 = XEXP (x1, 0);
  goto L11909;

 L785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L786;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L787;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L787: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L788;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L789;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L789: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 119;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11909;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L1019;
  x2 = XEXP (x1, 0);
  goto L11912;

 L1019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1020;
    }
  x2 = XEXP (x1, 0);
  goto L11912;

 L1020: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1021;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11912;

 L1021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1022;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11912;

 L1022: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1023;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11912;

 L1023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1024;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11912;

 L1024: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 154;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11912;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L11947;
  x2 = XEXP (x1, 0);
  goto L5602;

 L11947: ATTRIBUTE_UNUSED_LABEL
  tem = recog_28 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L5602;

 L11920: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6671;
 L11911: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1092;
    }
 L11914: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2644;
    }
  goto L5602;

 L6671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11969;
    case DImode:
      goto L11970;
    default:
      break;
    }
  goto L11911;

 L11969: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6672;
    }
  goto L11911;

 L6672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L6673;
    }
  x2 = XEXP (x1, 0);
  goto L11911;

 L6673: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6674;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6675;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6676;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6677;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L6678;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6678: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6679;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 598;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L11970: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6684;
    }
  goto L11911;

 L6684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L6685;
    }
  x2 = XEXP (x1, 0);
  goto L11911;

 L6685: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6686;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6687;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6688;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6689;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L6690;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6690: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6691;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L6691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 599;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11911;

 L1092: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == FIX)
    goto L1093;
  x2 = XEXP (x1, 0);
  goto L11914;

 L1093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1094;
    }
  x2 = XEXP (x1, 0);
  goto L11914;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1095;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11914;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1096;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11914;

 L1096: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1097;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11914;

 L1097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1098;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11914;

 L1098: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 164;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11914;

 L2644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L11971;
  x2 = XEXP (x1, 0);
  goto L5602;

 L11971: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L2645;
    case UDIV:
      goto L2788;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5602;

 L2645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2646;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L2646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2647;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L2647: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2648;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2649;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L2650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2651;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2652;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2653;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_HIMODE_MATH))
    {
      return 274;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2789;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L2789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2790;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2791;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2792;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UMOD)
    goto L2793;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2794;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2795;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2796;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L2797;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L2797: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 279;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L11915: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L3932;
    }
 L11922: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L7288;
    }
  goto L5602;

 L3932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L11973;
  x2 = XEXP (x1, 0);
  goto L11922;

 L11973: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3933;
    case ABS:
      goto L4118;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11922;

 L3933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3934;
    }
  x2 = XEXP (x1, 0);
  goto L11922;

 L3934: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3935;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L3935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3936;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L3936: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3937;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 356;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4119;
    }
  x2 = XEXP (x1, 0);
  goto L11922;

 L4119: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L4120;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L4120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4121;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L4121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4122;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L4122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 375;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11922;

 L7288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == IF_THEN_ELSE)
    goto L7289;
  x2 = XEXP (x1, 0);
  goto L5602;

 L7289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L7290;
    }
 L7311: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == EQ)
    goto L7312;
  x2 = XEXP (x1, 0);
  goto L5602;

 L7290: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[4] = x4;
      goto L7291;
    }
  goto L7311;

 L7291: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[5] = x4;
      goto L7292;
    }
  goto L7311;

 L7292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7293;
    }
  x3 = XEXP (x2, 0);
  goto L7311;

 L7293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L7294;
    }
  x3 = XEXP (x2, 0);
  goto L7311;

 L7294: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7295;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7311;

 L7295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[6] = x2;
      goto L7296;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7311;

 L7296: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7297;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7311;

 L7297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE))))
    {
      return 637;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7311;

 L7312: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L7313;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7313: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SFmode))
    {
      operands[4] = x4;
      goto L7314;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7315;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7316;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7316: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7317;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L7317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[5] = x2;
      goto L7318;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L7318: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7319;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L7319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 638;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L11916: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L3973;
    }
 L11923: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L7332;
    }
  goto L5602;

 L3973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L11975;
  x2 = XEXP (x1, 0);
  goto L11923;

 L11975: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L3974;
    case ABS:
      goto L4159;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L11923;

 L3974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L3975;
    }
  x2 = XEXP (x1, 0);
  goto L11923;

 L3975: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3976;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L3976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3977;
    }
 L3993: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3994;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L3977: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3978;
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3993;

 L3978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 359;
    }
  x1 = XVECEXP (x0, 0, 1);
  x2 = XEXP (x1, 0);
  goto L3993;

 L3994: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3995;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L3995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 360;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L4159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4160;
    }
  x2 = XEXP (x1, 0);
  goto L11923;

 L4160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L4161;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonmemory_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4162;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L4162: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L4163;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L4163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L11977;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L11977: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11979;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L11979: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11981;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L11981: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 378;
    }
 L11982: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_SSE2
   && (reload_in_progress || reload_completed
       || (register_operand (operands[0], VOIDmode)
	   && register_operand (operands[1], VOIDmode)))))
    {
      return 379;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11923;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == IF_THEN_ELSE)
    goto L7333;
  x2 = XEXP (x1, 0);
  goto L5602;

 L7333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (sse_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L7334;
    }
 L7355: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == EQ)
    goto L7356;
  x2 = XEXP (x1, 0);
  goto L5602;

 L7334: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[4] = x4;
      goto L7335;
    }
  goto L7355;

 L7335: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[5] = x4;
      goto L7336;
    }
  goto L7355;

 L7336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7337;
    }
  x3 = XEXP (x2, 0);
  goto L7355;

 L7337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L7338;
    }
  x3 = XEXP (x2, 0);
  goto L7355;

 L7338: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7339;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7355;

 L7339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[6] = x2;
      goto L7340;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7355;

 L7340: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7341;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7355;

 L7341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE2
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)
   && (!TARGET_IEEE_FP
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE))))
    {
      return 639;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L7355;

 L7356: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L7357;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7357: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DFmode))
    {
      operands[4] = x4;
      goto L7358;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7359;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7360;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L7360: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7361;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L7361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[5] = x2;
      goto L7362;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L7362: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7363;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L7363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_SSE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 640;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L11921: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6695;
  goto L5602;

 L6695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L11983;
    case DImode:
      goto L11984;
    default:
      break;
    }
  goto L5602;

 L11983: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6696;
    }
  goto L5602;

 L6696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6697;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L6697: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6698;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6699;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6700;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6701;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L6702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6702: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6703;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 600;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L11984: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6708;
    }
  goto L5602;

 L6708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6709;
    }
  x2 = XEXP (x1, 0);
  goto L5602;

 L6709: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6711;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6712;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6713;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L6714;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6715;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L6715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 601;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5602;

 L5603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L5604;
  goto ret0;

 L5604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L5605;
    }
  goto ret0;

 L5605: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L5606;
    }
  goto ret0;

 L5606: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L5607;
    }
 L5629: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L5630;
    }
  goto ret0;

 L5607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L5608;
    case PC:
      goto L5677;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5609;

 L5609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L5610;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5610: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5611;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5612;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5612: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5613;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 492;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L5678;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5678: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5679;

 L5679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5680;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5681;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5681: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5682;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_CMOVE && TARGET_80387
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 495;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5629;

 L5630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L5631;
    case PC:
      goto L5701;
    default:
     break;
   }
  goto ret0;

 L5631: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5632;

 L5632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L5633;
  goto ret0;

 L5633: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5634;
  goto ret0;

 L5634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5635;
  goto ret0;

 L5635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5636;
  goto ret0;

 L5636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode)
    goto L11985;
  goto ret0;

 L11985: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11987;
  goto ret0;

 L11987: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11989;
  goto ret0;

 L11989: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 493;
    }
 L11990: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 494;
    }
  goto ret0;

 L5701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L5702;
  goto ret0;

 L5702: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5703;

 L5703: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5704;
  goto ret0;

 L5704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5705;
  goto ret0;

 L5705: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5706;
  goto ret0;

 L5706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode)
    goto L11991;
  goto ret0;

 L11991: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L11993;
  goto ret0;

 L11993: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L11995;
  goto ret0;

 L11995: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 496;
    }
 L11996: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 497;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_30 PARAMS ((rtx, rtx, int *));
static int
recog_30 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L12006;
    case SImode:
      goto L12007;
    case HImode:
      goto L12008;
    case QImode:
      goto L12009;
    case BLKmode:
      goto L12010;
    default:
      break;
    }
 L5743: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L5744;
  goto ret0;

 L12006: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6382;
 L11999: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L994;
    }
 L12000: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1006;
    }
 L12003: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2538;
    }
  goto L5743;

 L6382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6383;
    }
  goto L11999;

 L6383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MEM)
    goto L6384;
  x2 = XEXP (x1, 0);
  goto L11999;

 L6384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6385;
    }
  x2 = XEXP (x1, 0);
  goto L11999;

 L6385: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6386;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6387;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L6390;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6390: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6391;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6392;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6393;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6394;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8)
    goto L6395;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6396;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L6396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 583;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L11999;

 L994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L995;
  x2 = XEXP (x1, 0);
  goto L12000;

 L995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L996;
    }
  x2 = XEXP (x1, 0);
  goto L12000;

 L996: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L997;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L998;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L998: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1000;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L1001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L1002;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L1002: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 153;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12000;

 L1006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L1007;
  x2 = XEXP (x1, 0);
  goto L12003;

 L1007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1008;
    }
  x2 = XEXP (x1, 0);
  goto L12003;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1009;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L1009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1010;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L1010: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1011;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L1011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1012;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L1012: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1013;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L1013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[4] = x2;
      goto L1014;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L1014: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)))
    {
      return 154;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12003;

 L2538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L12011;
  x2 = XEXP (x1, 0);
  goto L5743;

 L12011: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L2539;
    case UDIV:
      goto L2693;
    case UNSPEC:
      goto L12014;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2540;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2541;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2541: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2542;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2543;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L2544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2545;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2546;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2546: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2547;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L2548;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2548: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2549;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 270;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2694;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2695;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2695: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2696;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2697;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L2698;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2699;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2700;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2701;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3]))
    goto L2702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2702: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2703;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 276;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12014: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 0)
    goto L6944;
  x2 = XEXP (x1, 0);
  goto L5743;

 L6944: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6945;
  x2 = XEXP (x1, 0);
  goto L5743;

 L6945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[5] = x4;
      goto L6946;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6946: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6947;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6947: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6948;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6948: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L6949;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6951;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6952;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6953;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6953: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L6954;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT))
    {
      return 612;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12007: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6400;
 L12001: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1043;
    }
 L12004: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2615;
    }
  goto L5743;

 L6400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L12015;
    case DImode:
      goto L12016;
    default:
      break;
    }
  goto L12001;

 L12015: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6401;
    }
  goto L12001;

 L6401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L6402;
  x2 = XEXP (x1, 0);
  goto L12001;

 L6402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6403;
    }
  x2 = XEXP (x1, 0);
  goto L12001;

 L6403: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6404;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6405;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6406;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6406: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6407;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L6408;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6410;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6411;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6412;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L6413;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6413: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6414;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 584;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L12016: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6419;
    }
  goto L12001;

 L6419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L6420;
  x2 = XEXP (x1, 0);
  goto L12001;

 L6420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6421;
    }
  x2 = XEXP (x1, 0);
  goto L12001;

 L6421: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6422;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6423;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6424;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6425;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L6426;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6426: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6427;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6428;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6429;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6430;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4)
    goto L6431;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6431: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6432;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L6432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 585;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12001;

 L1043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FIX)
    goto L1044;
  x2 = XEXP (x1, 0);
  goto L12004;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1045;
    }
  x2 = XEXP (x1, 0);
  goto L12004;

 L1045: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1046;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L1046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1047;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L1047: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1048;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L1048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1049;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1050;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1051;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L1051: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 158;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12004;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L12017;
  x2 = XEXP (x1, 0);
  goto L5743;

 L12017: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case DIV:
      goto L2616;
    case UDIV:
      goto L2745;
    case UNSPEC:
      goto L12020;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2617;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2618;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2619;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2620;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L2621;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2622;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2623;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2623: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2624;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L2625;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2625: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2626;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 273;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2746;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2747;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2749;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L2750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2751;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2753;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[3]))
    goto L2754;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2755;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 278;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12020: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 0)
    goto L6915;
  x2 = XEXP (x1, 0);
  goto L5743;

 L6915: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6916;
  x2 = XEXP (x1, 0);
  goto L5743;

 L6916: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6917;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6917: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6918;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6919;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6919: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6920;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6920: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6921;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6922;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6922: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L6923;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6924;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6924: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L6925;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT))
    {
      return 611;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12008: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6436;
 L12002: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1080;
    }
 L12005: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2772;
    }
  goto L5743;

 L6436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L12021;
    case DImode:
      goto L12022;
    default:
      break;
    }
  goto L12002;

 L12021: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6437;
    }
  goto L12002;

 L6437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L6438;
  x2 = XEXP (x1, 0);
  goto L12002;

 L6438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6439;
    }
  x2 = XEXP (x1, 0);
  goto L12002;

 L6439: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6440;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6441;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6442;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6443;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L6444;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6445;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6446;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6447;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6448;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L6449;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6449: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6450;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 586;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L12022: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6455;
    }
  goto L12002;

 L6455: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L6456;
  x2 = XEXP (x1, 0);
  goto L12002;

 L6456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6457;
    }
  x2 = XEXP (x1, 0);
  goto L12002;

 L6457: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6458;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6459;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6460;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6461;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L6462;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6462: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6463;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6464;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6465;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6466;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2)
    goto L6467;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6467: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L6468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 587;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12002;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == FIX)
    goto L1081;
  x2 = XEXP (x1, 0);
  goto L12005;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1082;
    }
  x2 = XEXP (x1, 0);
  goto L12005;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1083;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1084;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L1085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1086;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L1086: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L1087;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L1087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L1088;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L1088: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    {
      return 163;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12005;

 L2772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UDIV)
    goto L2773;
  x2 = XEXP (x1, 0);
  goto L5743;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2774;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2775;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2776;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2777;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == UMOD)
    goto L2778;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2779;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2780;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2780: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2781;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L2782;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2782: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2783;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L2783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 279;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12009: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L6472;
  goto L5743;

 L6472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L12023;
    case DImode:
      goto L12024;
    default:
      break;
    }
  goto L5743;

 L12023: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6473;
    }
  goto L5743;

 L6473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L6474;
  x2 = XEXP (x1, 0);
  goto L5743;

 L6474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6475;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6475: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6476;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6477;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L6480;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6480: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6481;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6482;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6483;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6484;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L6485;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6485: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6486;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 588;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12024: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6491;
    }
  goto L5743;

 L6491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L6492;
  x2 = XEXP (x1, 0);
  goto L5743;

 L6492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6493;
    }
  x2 = XEXP (x1, 0);
  goto L5743;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6494;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6495;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6496;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L6497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6497: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L6498;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6498: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6499;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6500;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6501;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6502;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1)
    goto L6503;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6503: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6504;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L6504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)))
    {
      return 589;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L12010: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L8680;
  goto L5743;

 L8680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L8681;
  goto L5743;

 L8681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[0] = x4;
      goto L8682;
    }
  goto L5743;

 L8682: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, DImode))
    {
      operands[4] = x4;
      goto L8683;
    }
  goto L5743;

 L8683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 8
      && XINT (x2, 1) == 13)
    goto L8684;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8684: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 21)
    goto L8685;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8685: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 22)
    goto L8686;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8686: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 23)
    goto L8687;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8687: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 24)
    goto L8688;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8688: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 25)
    goto L8689;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8689: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 26)
    goto L8690;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8690: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 27)
    goto L8691;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8691: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 28)
    goto L8692;
  x2 = XEXP (x1, 0);
  goto L5743;

 L8692: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L8693;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L8693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L8694;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L8694: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L8695;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L8695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8696;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L8696: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L8697;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L8697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LABEL_REF)
    goto L8698;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L8698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L8699;

 L8699: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128))
    {
      return 805;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5743;

 L5744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L5879;
  goto ret0;

 L5879: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE)
    goto L5880;
 L5745: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L5746;
    }
  goto ret0;

 L5880: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5881;
    }
  goto L5745;

 L5881: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1)
    goto L5882;
  goto L5745;

 L5882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L5883;
  x3 = XEXP (x2, 0);
  goto L5745;

 L5883: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  goto L5884;

 L5884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L5885;
  x3 = XEXP (x2, 0);
  goto L5745;

 L5885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5886;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5887;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5888;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5889;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    goto L5890;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5890: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5891;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5892;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5892: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5893;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_USE_LOOP))
    {
      return 507;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L5745;

 L5746: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L5747;
    }
  goto ret0;

 L5747: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L5748;
    }
 L5800: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L5801;
    }
  goto ret0;

 L5748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L5749;
    case PC:
      goto L5775;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5749: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5750;

 L5750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L5751;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5751: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5753;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5753: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5754;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5755;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5755: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5756;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5757;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5757: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 498;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L5776;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5777;

 L5777: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5778;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5779;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5780;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5781;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5782;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5783;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5783: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 499;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5800;

 L5801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      goto L5802;
    case PC:
      goto L5828;
    default:
     break;
   }
  goto ret0;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5803;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L5804;
  goto ret0;

 L5804: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5805;
  goto ret0;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5806;
  goto ret0;

 L5806: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5807;
  goto ret0;

 L5807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5808;
  goto ret0;

 L5808: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5809;
  goto ret0;

 L5809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5810;
    }
  goto ret0;

 L5810: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 500;
    }
  goto ret0;

 L5828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L5829;
  goto ret0;

 L5829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L5830;

 L5830: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5831;
  goto ret0;

 L5831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18)
    goto L5832;
  goto ret0;

 L5832: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L5833;
  goto ret0;

 L5833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCFPmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L5834;
  goto ret0;

 L5834: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L5835;
  goto ret0;

 L5835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[4] = x2;
      goto L5836;
    }
  goto ret0;

 L5836: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))))
    {
      return 501;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_31 PARAMS ((rtx, rtx, int *));
static int
recog_31 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6508;
    }
 L12027: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6719;
    }
  goto ret0;

 L6508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6509;
  x2 = XEXP (x1, 0);
  goto L12027;

 L6509: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6510;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6511;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6512;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L12029;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L12029: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L6513;
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6617;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6513: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[5] = x4;
      goto L6514;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6514: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L12031;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L12031: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 3:
        goto L6515;
      case 2:
        goto L6569;
      default:
        break;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6516;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6516: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6517;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6518;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6519;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ASHIFT)
    goto L6520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6520: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[5]))
    goto L6521;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6521: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3)
    goto L6522;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L6523;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6524;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6525;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6526;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6527;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L6528;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6528: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6529;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L6530;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6530: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6531;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT))
    {
      return 590;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6570;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6570: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6571;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6572;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6573;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ASHIFT)
    goto L6574;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6574: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[5]))
    goto L6575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6575: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6576;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L6577;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6577: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6578;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6579;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6580;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6581;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L6582;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6582: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6583;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L6584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6584: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6585;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT))
    {
      return 592;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[5] = x3;
      goto L6618;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6618: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6619;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6620;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6621;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L6622;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[5]))
    goto L6623;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6623: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6624;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6625;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6626;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6627;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L6628;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6628: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6629;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L6630;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6631;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT))
    {
      return 594;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12027;

 L6719: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6720;
  goto ret0;

 L6720: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6721;
  goto ret0;

 L6721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6722;
    }
  goto ret0;

 L6722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6723;
  goto ret0;

 L6723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L12033;
  goto ret0;

 L12033: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L6724;
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6806;
    }
  goto ret0;

 L6724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[4] = x4;
      goto L6725;
    }
  goto ret0;

 L6725: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L12035;
  goto ret0;

 L12035: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 3:
        goto L6726;
      case 2:
        goto L6768;
      default:
        break;
      }
  goto ret0;

 L6726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6727;
    }
  goto ret0;

 L6727: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6728;
  goto ret0;

 L6728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6729;
  goto ret0;

 L6729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6730;
  goto ret0;

 L6730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6731;
  goto ret0;

 L6731: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6732;
  goto ret0;

 L6732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6733;
    }
  goto ret0;

 L6733: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6734;
  goto ret0;

 L6734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L6735;
  goto ret0;

 L6735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6736;
  goto ret0;

 L6736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT))
    {
      return 602;
    }
  goto ret0;

 L6768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L6769;
    }
  goto ret0;

 L6769: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6770;
  goto ret0;

 L6770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6771;
  goto ret0;

 L6771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6772;
  goto ret0;

 L6772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6773;
  goto ret0;

 L6773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6774;
  goto ret0;

 L6774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6775;
    }
  goto ret0;

 L6775: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6776;
  goto ret0;

 L6776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L6777;
  goto ret0;

 L6777: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6778;
  goto ret0;

 L6778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT))
    {
      return 604;
    }
  goto ret0;

 L6806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[4] = x3;
      goto L6807;
    }
  goto ret0;

 L6807: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6808;
  goto ret0;

 L6808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6809;
  goto ret0;

 L6809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6810;
  goto ret0;

 L6810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6811;
  goto ret0;

 L6811: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6812;
  goto ret0;

 L6812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6813;
    }
  goto ret0;

 L6813: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6814;
  goto ret0;

 L6814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L6815;
  goto ret0;

 L6815: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6816;
  goto ret0;

 L6816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (TARGET_64BIT))
    {
      return 606;
    }
  goto ret0;
 ret0:
  return -1;
}

static int recog_32 PARAMS ((rtx, rtx, int *));
static int
recog_32 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L270;
    case 3:
      goto L7458;
    case 5:
      goto L978;
    case 4:
      goto L7446;
    case 6:
      goto L6506;
    case 7:
      goto L6818;
    case 17:
      goto L8630;
    default:
      break;
    }
  goto ret0;

 L270: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L271;
    case CALL:
      goto L5911;
    case RETURN:
      goto L5950;
    default:
     break;
   }
  goto ret0;

 L271: ATTRIBUTE_UNUSED_LABEL
  return recog_26 (x0, insn, pnum_clobbers);

 L5911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L5912;
  goto ret0;

 L5912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L11903;
  goto ret0;

 L11903: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5913;
    }
 L11904: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L5924;
    }
  goto ret0;

 L5913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L5914;

 L5914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5915;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11904;

 L5915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L5916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11904;

 L5916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11904;

 L5917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11904;

 L5918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5919;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11904;

 L5919: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 508;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L11904;

 L5924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L5925;

 L5925: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5926;
  goto ret0;

 L5926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L5927;
  goto ret0;

 L5927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5928;
  goto ret0;

 L5928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5929;
  goto ret0;

 L5929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5930;
    }
  goto ret0;

 L5930: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 509;
    }
  goto ret0;

 L5950: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L5956;
  goto ret0;

 L5956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5957;
    }
  if (const_int_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5952;
    }
  goto ret0;

 L5957: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 516;
    }
  goto ret0;

 L5952: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 515;
    }
  goto ret0;

 L7458: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L11905;
    case DImode:
      goto L11906;
    default:
      break;
    }
 L277: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == SET)
    goto L278;
  goto ret0;

 L11905: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 3)
    goto L7459;
  goto L277;

 L7459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7460;
    }
  goto L277;

 L7460: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7461;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L7462;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L7463;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7464;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L7465;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7465: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7466;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0])
      && (!TARGET_64BIT && TARGET_STACK_PROBE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 649;
    }
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L11906: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 3)
    goto L7481;
  goto L277;

 L7481: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7482;
    }
  goto L277;

 L7482: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7483;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L7484;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L7485;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7486;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L7487;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7487: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7488;
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L7488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_64BIT && TARGET_STACK_PROBE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 650;
    }
  x1 = XVECEXP (x0, 0, 0);
  goto L277;

 L278: ATTRIBUTE_UNUSED_LABEL
  return recog_29 (x0, insn, pnum_clobbers);

 L978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L979;
  goto ret0;

 L979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L980;
    }
  goto ret0;

 L980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == FIX)
    goto L981;
  goto ret0;

 L981: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L982;
    }
  goto ret0;

 L982: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L983;
  goto ret0;

 L983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L984;
    }
  goto ret0;

 L984: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L985;
  goto ret0;

 L985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L986;
    }
  goto ret0;

 L986: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L987;
  goto ret0;

 L987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L988;
    }
  goto ret0;

 L988: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L989;
  goto ret0;

 L989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[5] = x2;
      goto L990;
    }
  goto ret0;

 L990: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)))
    {
      return 153;
    }
  goto ret0;

 L7446: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L11997;
    case DImode:
      goto L11998;
    default:
      break;
    }
 L992: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == SET)
    goto L993;
  goto ret0;

 L11997: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 3)
    goto L7447;
  goto L992;

 L7447: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7448;
    }
  goto L992;

 L7448: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7449;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L7450;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L7451;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7452;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L7453;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7453: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7454;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L7455;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L7456;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && TARGET_STACK_PROBE))
    {
      return 649;
    }
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L11998: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 3)
    goto L7469;
  goto L992;

 L7469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7470;
    }
  goto L992;

 L7470: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7471;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L7472;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L7473;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7474;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L7475;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7475: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L7476;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L7477;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7477: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L7478;
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L7478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (TARGET_64BIT && TARGET_STACK_PROBE))
    {
      return 650;
    }
  x1 = XVECEXP (x0, 0, 0);
  goto L992;

 L993: ATTRIBUTE_UNUSED_LABEL
  return recog_30 (x0, insn, pnum_clobbers);

 L6506: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L6507;
  goto ret0;

 L6507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L12025;
    case SImode:
      goto L12026;
    default:
      break;
    }
  goto ret0;

 L12025: ATTRIBUTE_UNUSED_LABEL
  return recog_31 (x0, insn, pnum_clobbers);

 L12026: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6535;
    }
 L12028: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6740;
    }
  goto ret0;

 L6535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6536;
  x2 = XEXP (x1, 0);
  goto L12028;

 L6536: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6537;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6538;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6539;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12037;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L12037: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L6540;
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6594;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6541;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6541: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6542;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6543;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6543: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6545;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6546;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L6547;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6547: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[5]))
    goto L6548;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6548: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6549;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6550;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6550: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6551;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6552;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6553;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6554;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L6555;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6555: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6556;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L6557;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6558;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT))
    {
      return 591;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6595;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6595: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6596;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6597;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6598;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6598: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6599;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[5]))
    goto L6600;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6600: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L6601;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6602;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6603;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6604;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[4]))
    goto L6605;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6605: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6606;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[5]))
    goto L6607;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6607: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6608;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT))
    {
      return 593;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12028;

 L6740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6741;
  goto ret0;

 L6741: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L6742;
  goto ret0;

 L6742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6743;
    }
  goto ret0;

 L6743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L6744;
  goto ret0;

 L6744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12039;
  goto ret0;

 L12039: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L6745;
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6787;
    }
  goto ret0;

 L6745: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L6746;
    }
  goto ret0;

 L6746: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2)
    goto L6747;
  goto ret0;

 L6747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6748;
    }
  goto ret0;

 L6748: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6749;
  goto ret0;

 L6749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6750;
  goto ret0;

 L6750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6751;
  goto ret0;

 L6751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6752;
  goto ret0;

 L6752: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6753;
  goto ret0;

 L6753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6754;
    }
  goto ret0;

 L6754: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6755;
  goto ret0;

 L6755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L6756;
  goto ret0;

 L6756: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6757;
  goto ret0;

 L6757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT))
    {
      return 603;
    }
  goto ret0;

 L6787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6788;
    }
  goto ret0;

 L6788: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L6789;
  goto ret0;

 L6789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L6790;
  goto ret0;

 L6790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L6791;
  goto ret0;

 L6791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L6792;
  goto ret0;

 L6792: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6793;
  goto ret0;

 L6793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6794;
    }
  goto ret0;

 L6794: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == USE)
    goto L6795;
  goto ret0;

 L6795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[4]))
    goto L6796;
  goto ret0;

 L6796: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE)
    goto L6797;
  goto ret0;

 L6797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19
      && (!TARGET_64BIT))
    {
      return 605;
    }
  goto ret0;

 L6818: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L6819;
  goto ret0;

 L6819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L6820;
  goto ret0;

 L6820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode)
    goto L12041;
  goto ret0;

 L12041: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case COMPARE:
      goto L6821;
    case IF_THEN_ELSE:
      goto L6863;
    default:
     break;
   }
  goto ret0;

 L6821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6822;
  goto ret0;

 L6822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case SImode:
      goto L12043;
    case DImode:
      goto L12044;
    default:
      break;
    }
  goto ret0;

 L12043: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L6823;
    }
  goto ret0;

 L6823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6824;
  goto ret0;

 L6824: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6825;
    }
  goto ret0;

 L6825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6826;
  goto ret0;

 L6826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L6827;
    }
  goto ret0;

 L6827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6828;
  goto ret0;

 L6828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6829;
    }
  goto ret0;

 L6829: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6830;
  goto ret0;

 L6830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6831;
  goto ret0;

 L6831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L6832;
  goto ret0;

 L6832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6833;
    }
  goto ret0;

 L6833: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L6834;
  goto ret0;

 L6834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6835;
    }
  goto ret0;

 L6835: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L6836;
  goto ret0;

 L6836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6837;
    }
  goto ret0;

 L6837: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 607;
    }
  goto ret0;

 L12044: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, DImode))
    {
      operands[4] = x4;
      goto L6844;
    }
  goto ret0;

 L6844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L6845;
  goto ret0;

 L6845: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[5] = x4;
      goto L6846;
    }
  goto ret0;

 L6846: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6847;
  goto ret0;

 L6847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[6] = x2;
      goto L6848;
    }
  goto ret0;

 L6848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6849;
  goto ret0;

 L6849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6850;
    }
  goto ret0;

 L6850: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6851;
  goto ret0;

 L6851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6852;
  goto ret0;

 L6852: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L6853;
  goto ret0;

 L6853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6854;
    }
  goto ret0;

 L6854: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L6855;
  goto ret0;

 L6855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6856;
    }
  goto ret0;

 L6856: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L6857;
  goto ret0;

 L6857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6858;
    }
  goto ret0;

 L6858: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 608;
    }
  goto ret0;

 L6863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE)
    goto L6864;
  goto ret0;

 L6864: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case SImode:
      goto L12045;
    case DImode:
      goto L12046;
    default:
      break;
    }
  goto ret0;

 L12045: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[6] = x4;
      goto L6865;
    }
  goto ret0;

 L6865: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6866;
  goto ret0;

 L6866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == COMPARE)
    goto L6867;
  goto ret0;

 L6867: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == BLKmode
      && GET_CODE (x4) == MEM)
    goto L6868;
  goto ret0;

 L6868: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L6869;
    }
  goto ret0;

 L6869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == BLKmode
      && GET_CODE (x4) == MEM)
    goto L6870;
  goto ret0;

 L6870: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L6871;
    }
  goto ret0;

 L6871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6872;
  goto ret0;

 L6872: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6873;
  goto ret0;

 L6873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6874;
    }
  goto ret0;

 L6874: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6875;
  goto ret0;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L6876;
  goto ret0;

 L6876: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6877;
  goto ret0;

 L6877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6878;
  goto ret0;

 L6878: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L6879;
  goto ret0;

 L6879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6880;
    }
  goto ret0;

 L6880: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L6881;
  goto ret0;

 L6881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6882;
    }
  goto ret0;

 L6882: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L6883;
  goto ret0;

 L6883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6884;
    }
  goto ret0;

 L6884: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 609;
    }
  goto ret0;

 L12046: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, DImode))
    {
      operands[6] = x4;
      goto L6891;
    }
  goto ret0;

 L6891: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L6892;
  goto ret0;

 L6892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == CCmode
      && GET_CODE (x3) == COMPARE)
    goto L6893;
  goto ret0;

 L6893: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == BLKmode
      && GET_CODE (x4) == MEM)
    goto L6894;
  goto ret0;

 L6894: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[4] = x5;
      goto L6895;
    }
  goto ret0;

 L6895: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == BLKmode
      && GET_CODE (x4) == MEM)
    goto L6896;
  goto ret0;

 L6896: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[5] = x5;
      goto L6897;
    }
  goto ret0;

 L6897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L6898;
  goto ret0;

 L6898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L6899;
  goto ret0;

 L6899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L6900;
    }
  goto ret0;

 L6900: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L6901;
  goto ret0;

 L6901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L6902;
  goto ret0;

 L6902: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE)
    goto L6903;
  goto ret0;

 L6903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 19)
    goto L6904;
  goto ret0;

 L6904: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L6905;
  goto ret0;

 L6905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6906;
    }
  goto ret0;

 L6906: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L6907;
  goto ret0;

 L6907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6908;
    }
  goto ret0;

 L6908: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L6909;
  goto ret0;

 L6909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L6910;
    }
  goto ret0;

 L6910: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 610;
    }
  goto ret0;

 L8630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == UNSPEC_VOLATILE)
    goto L12047;
  goto ret0;

 L12047: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L12049;
  goto ret0;

 L12049: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 31:
      goto L8631;
    case 46:
      goto L8756;
    default:
      break;
    }
  goto ret0;

 L8631: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L8632;
  goto ret0;

 L8632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8633;
  goto ret0;

 L8633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 8)
    goto L8634;
  goto ret0;

 L8634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8635;
  goto ret0;

 L8635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 9)
    goto L8636;
  goto ret0;

 L8636: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L8637;
  goto ret0;

 L8637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 10)
    goto L8638;
  goto ret0;

 L8638: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L8639;
  goto ret0;

 L8639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 11)
    goto L8640;
  goto ret0;

 L8640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L8641;
  goto ret0;

 L8641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 12)
    goto L8642;
  goto ret0;

 L8642: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L8643;
  goto ret0;

 L8643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 13)
    goto L8644;
  goto ret0;

 L8644: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == CLOBBER)
    goto L8645;
  goto ret0;

 L8645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L8646;
  goto ret0;

 L8646: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 8);
  if (GET_CODE (x1) == CLOBBER)
    goto L8647;
  goto ret0;

 L8647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    goto L8648;
  goto ret0;

 L8648: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 9);
  if (GET_CODE (x1) == CLOBBER)
    goto L8649;
  goto ret0;

 L8649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L8650;
  goto ret0;

 L8650: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 10);
  if (GET_CODE (x1) == CLOBBER)
    goto L8651;
  goto ret0;

 L8651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 30)
    goto L8652;
  goto ret0;

 L8652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 11);
  if (GET_CODE (x1) == CLOBBER)
    goto L8653;
  goto ret0;

 L8653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L8654;
  goto ret0;

 L8654: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 12);
  if (GET_CODE (x1) == CLOBBER)
    goto L8655;
  goto ret0;

 L8655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 32)
    goto L8656;
  goto ret0;

 L8656: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 13);
  if (GET_CODE (x1) == CLOBBER)
    goto L8657;
  goto ret0;

 L8657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 33)
    goto L8658;
  goto ret0;

 L8658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 14);
  if (GET_CODE (x1) == CLOBBER)
    goto L8659;
  goto ret0;

 L8659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 34)
    goto L8660;
  goto ret0;

 L8660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 15);
  if (GET_CODE (x1) == CLOBBER)
    goto L8661;
  goto ret0;

 L8661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 35)
    goto L8662;
  goto ret0;

 L8662: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 16);
  if (GET_CODE (x1) == CLOBBER)
    goto L8663;
  goto ret0;

 L8663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 36
      && (TARGET_MMX))
    {
      return 801;
    }
  goto ret0;

 L8756: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L8757;
  goto ret0;

 L8757: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8758;
  goto ret0;

 L8758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 8)
    goto L8759;
  goto ret0;

 L8759: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L8760;
  goto ret0;

 L8760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 9)
    goto L8761;
  goto ret0;

 L8761: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L8762;
  goto ret0;

 L8762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 10)
    goto L8763;
  goto ret0;

 L8763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L8764;
  goto ret0;

 L8764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 11)
    goto L8765;
  goto ret0;

 L8765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L8766;
  goto ret0;

 L8766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 12)
    goto L8767;
  goto ret0;

 L8767: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L8768;
  goto ret0;

 L8768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 13)
    goto L8769;
  goto ret0;

 L8769: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == CLOBBER)
    goto L8770;
  goto ret0;

 L8770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L8771;
  goto ret0;

 L8771: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 8);
  if (GET_CODE (x1) == CLOBBER)
    goto L8772;
  goto ret0;

 L8772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 15)
    goto L8773;
  goto ret0;

 L8773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 9);
  if (GET_CODE (x1) == CLOBBER)
    goto L8774;
  goto ret0;

 L8774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L8775;
  goto ret0;

 L8775: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 10);
  if (GET_CODE (x1) == CLOBBER)
    goto L8776;
  goto ret0;

 L8776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 30)
    goto L8777;
  goto ret0;

 L8777: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 11);
  if (GET_CODE (x1) == CLOBBER)
    goto L8778;
  goto ret0;

 L8778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L8779;
  goto ret0;

 L8779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 12);
  if (GET_CODE (x1) == CLOBBER)
    goto L8780;
  goto ret0;

 L8780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 32)
    goto L8781;
  goto ret0;

 L8781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 13);
  if (GET_CODE (x1) == CLOBBER)
    goto L8782;
  goto ret0;

 L8782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 33)
    goto L8783;
  goto ret0;

 L8783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 14);
  if (GET_CODE (x1) == CLOBBER)
    goto L8784;
  goto ret0;

 L8784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 34)
    goto L8785;
  goto ret0;

 L8785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 15);
  if (GET_CODE (x1) == CLOBBER)
    goto L8786;
  goto ret0;

 L8786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 35)
    goto L8787;
  goto ret0;

 L8787: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 16);
  if (GET_CODE (x1) == CLOBBER)
    goto L8788;
  goto ret0;

 L8788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 36
      && (TARGET_3DNOW))
    {
      return 815;
    }
  goto ret0;
 ret0:
  return -1;
}

int recog PARAMS ((rtx, rtx, int *));
int
recog (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L138;
    case PARALLEL:
      goto L10828;
    case CALL:
      goto L5932;
    case UNSPEC_VOLATILE:
      goto L10832;
    case RETURN:
      goto L10833;
    case CONST_INT:
      goto L10834;
    case TRAP_IF:
      goto L7544;
    case PREFETCH:
      goto L8952;
    default:
     break;
   }
  goto ret0;

 L138: ATTRIBUTE_UNUSED_LABEL
  return recog_16 (x0, insn, pnum_clobbers);

 L10828: ATTRIBUTE_UNUSED_LABEL
  return recog_32 (x0, insn, pnum_clobbers);

 L5932: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L5933;
  goto ret0;

 L5933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (constant_call_address_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L5934;
    }
 L5937: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L12051;
    case DImode:
      goto L12052;
    default:
      break;
    }
  goto ret0;

 L5934: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  return 510;

 L12051: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5938;
    }
  goto ret0;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L5939;

 L5939: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 511;
    }
  goto ret0;

 L12052: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5943;
    }
  goto ret0;

 L5943: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L5944;

 L5944: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 512;
    }
  goto ret0;

 L10832: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1)
    goto L12053;
  goto ret0;

 L12053: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 0:
      goto L5946;
    case 13:
      goto L5991;
    case 31:
      goto L8665;
    case 37:
      goto L8667;
    case 46:
      goto L8790;
    default:
      break;
    }
  goto ret0;

 L5946: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0)
    {
      return 513;
    }
  goto ret0;

 L5991: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L12058;
    case DImode:
      goto L12059;
    default:
      break;
    }
  goto ret0;

 L12058: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5992;
    }
  goto ret0;

 L5992: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT))
    {
      return 520;
    }
  goto ret0;

 L12059: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5995;
    }
  goto ret0;

 L5995: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 521;
    }
  goto ret0;

 L8665: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0
      && (TARGET_MMX)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 16;
      return 801;
    }
  goto ret0;

 L8667: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8668;
    }
  goto ret0;

 L8668: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MMX))
    {
      return 802;
    }
  goto ret0;

 L8790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0
      && (TARGET_3DNOW)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 16;
      return 815;
    }
  goto ret0;

 L10833: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 514;
    }
  goto ret0;

 L10834: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0)
    {
      return 517;
    }
  goto ret0;

 L7544: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 1)
    goto L7545;
  if (comparison_operator (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L7548;
    }
  goto ret0;

 L7545: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 5)
    {
      return 657;
    }
  goto ret0;

 L7548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L7549;
  goto ret0;

 L7549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    goto L7550;
  goto ret0;

 L7550: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      return 658;
    }
  goto ret0;

 L8952: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L8953;
    }
  goto ret0;

 L8953: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT)
    goto L12060;
  goto ret0;

 L12060: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x1, 0) == 0)
    goto L8954;
 L12061: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L8959;
    }
  goto ret0;

 L8954: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L8955;
    }
  x1 = XEXP (x0, 1);
  goto L12061;

 L8955: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PREFETCH_SSE))
    {
      return 832;
    }
  x1 = XEXP (x0, 1);
  goto L12061;

 L8959: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 3
      && (TARGET_3DNOW))
    {
      return 833;
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx split_1 PARAMS ((rtx, rtx));
static rtx
split_1 (x0, insn)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case CCFPmode:
      goto L12067;
    case DImode:
      goto L12068;
    case SFmode:
      goto L12071;
    case DFmode:
      goto L12072;
    case SImode:
      goto L12074;
    case HImode:
      goto L12075;
    case QImode:
      goto L12077;
    default:
      break;
    }
 L9032: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L9033;
    }
 L9036: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case XFmode:
      goto L12079;
    case TFmode:
      goto L12080;
    default:
      break;
    }
 L9524: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case REG:
      goto L12081;
    case STRICT_LOW_PART:
      goto L9949;
    case PC:
      goto L9972;
    default:
     break;
   }
 L9048: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L9049;
    }
 L10804: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case TImode:
      goto L12082;
    case V4SFmode:
      goto L12083;
    case V4SImode:
      goto L12084;
    case V2SImode:
      goto L12085;
    case V4HImode:
      goto L12086;
    case V8QImode:
      goto L12087;
    case V2SFmode:
      goto L12088;
    default:
      break;
    }
 L9052: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L9372;
    }
 L10825: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L10826;
    }
  goto ret0;

 L12067: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 18)
    goto L8962;
  goto L9032;

 L8962: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L8963;
  x1 = XEXP (x0, 0);
  goto L9032;

 L8963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L8964;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L8964: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == FLOAT)
    goto L8965;
  x1 = XEXP (x0, 0);
  goto L9032;

 L8965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L8966;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L8966: ATTRIBUTE_UNUSED_LABEL
  if ((0 && TARGET_80387 && reload_completed))
    {
      return gen_split_845 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L12068: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L8979;
    }
 L12069: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L9282;
    }
 L12070: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L9106;
    }
 L12076: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L9393;
    }
  goto L9032;

 L8979: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (immediate_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8980;
    }
 L8983: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8984;
    }
  x1 = XEXP (x0, 0);
  goto L12069;

 L8980: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (flow2_completed || (reload_completed && !flag_peephole2))
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)))
    {
      return gen_split_855 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L8983;

 L8984: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))))
    {
      return gen_split_856 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12069;

 L9282: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == FIX)
    goto L9283;
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L8988;
    }
  x1 = XEXP (x0, 0);
  goto L12070;

 L9283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9284;
    }
  x1 = XEXP (x0, 0);
  goto L12070;

 L9284: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT)&& 1))
    {
      return gen_split_929 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12070;

 L8988: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))))
    {
      return gen_split_857 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12070;

 L9106: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == ZERO_EXTEND)
    goto L9107;
  if (immediate_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L9002;
    }
  x1 = XEXP (x0, 0);
  goto L12076;

 L9107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_64BIT))
    {
      return gen_split_889 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12076;

 L9002: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && (flow2_completed || (reload_completed && !flag_peephole2))
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)))
    {
      return gen_split_860 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12076;

 L9393: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == ZERO_EXTEND)
    goto L9394;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L9395;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L12089;
  x1 = XEXP (x0, 0);
  goto L9032;

 L12089: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L9396;
    case MULT:
      goto L9413;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9396: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L12092;
  x1 = XEXP (x0, 0);
  goto L9032;

 L12092: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == MULT)
    goto L9433;
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9397;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9433: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L9434;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9434: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const248_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L9435;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9435: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L9436;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L9437;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9437: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT&& reload_completed))
    {
      return gen_split_959 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9397: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L9398;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L9399;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9399: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT&& reload_completed))
    {
      return gen_split_955 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9413: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L9414;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9414: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L9415;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L9416;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9416: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT&& reload_completed))
    {
      return gen_split_957 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L12071: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L9005;
    }
  goto L9032;

 L9005: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L12093;
  x1 = XEXP (x0, 0);
  goto L9032;

 L12093: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L9006;
    }
 L12094: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L9010;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9006: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && GET_CODE (operands[1]) == MEM
   && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
   && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0))))
    {
      return gen_split_862 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L12094;

 L9010: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_863 (operands);
    }
 L9014: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_864 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L12072: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L9017;
    }
 L12073: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L9029;
    }
 L12078: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L10185;
    }
  goto L9032;

 L9017: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L12096;
 L9025: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L9026;
    }
  x1 = XEXP (x0, 0);
  goto L12073;

 L12096: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == FLOAT_EXTEND)
    goto L9155;
  if (register_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L9018;
    }
  goto L9025;

 L9155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9156;
    }
  goto L9025;

 L9156: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_896 (operands);
    }
 L9161: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_897 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L9025;

 L9018: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && reload_completed && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_866 (operands);
    }
 L9022: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && reload_completed && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_867 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L9025;

 L9026: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_868 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12073;

 L9029: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L9030;
    }
  x1 = XEXP (x0, 0);
  goto L12078;

 L9030: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))))
    {
      return gen_split_869 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L12078;

 L10185: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == IF_THEN_ELSE)
    goto L10186;
  x1 = XEXP (x0, 0);
  goto L9032;

 L10186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L10187;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L10187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L10188;

 L10188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L10189;
  x1 = XEXP (x0, 0);
  goto L9032;

 L10189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10190;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L10190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L10191;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L10191: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !ANY_FP_REG_P (operands[0]) && reload_completed))
    {
      return gen_split_1214 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L12074: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L9315;
    }
  goto L9032;

 L9315: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == FIX)
    goto L9316;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9317;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9317: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !reload_completed && !reload_in_progress
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))&& 1))
    {
      return gen_split_936 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L12075: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L9344;
    }
  goto L9032;

 L9344: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == FIX)
    goto L9345;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      return gen_split_943 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L12077: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L9942;
    }
  goto L9032;

 L9942: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L12097;
  x1 = XEXP (x0, 0);
  goto L9032;

 L12097: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NE:
      goto L9943;
    case EQ:
      goto L9958;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9943: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9944;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9944: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9945;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9946;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1133 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9959;
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9960;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9961;
  x1 = XEXP (x0, 0);
  goto L9032;

 L9961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1135 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9032;

 L9033: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L9034;
    }
  x1 = XEXP (x0, 0);
  goto L9036;

 L9034: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == DFmode)
   && (!REG_P (operands[1]) || !ANY_FP_REGNO_P (REGNO (operands[1])))))
    {
      return gen_split_872 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9036;

 L12079: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L9037;
    }
  goto L9524;

 L9037: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L12100;
  x1 = XEXP (x0, 0);
  goto L9524;

 L12100: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == FLOAT_EXTEND)
    goto L9165;
  if (register_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L9038;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12101;
    case DFmode:
      goto L12102;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L12101: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9166;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9166: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_898 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L12102: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L9181;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9181: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_901 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9038: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_873 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L12080: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L9041;
    }
  goto L9524;

 L9041: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TFmode)
    goto L12104;
  x1 = XEXP (x0, 0);
  goto L9524;

 L12104: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == FLOAT_EXTEND)
    goto L9170;
  if (register_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L9042;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L12105;
    case DFmode:
      goto L12106;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L12105: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9171;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9171: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_899 (operands);
    }
 L9176: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_900 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L12106: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L9186;
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9186: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_902 (operands);
    }
 L9191: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_903 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L9042: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_874 (operands);
    }
 L9046: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && ANY_FP_REGNO_P (REGNO (operands[1]))))
    {
      return gen_split_875 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9524;

 L12081: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 17)
    goto L9525;
  goto L9048;

 L9525: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L9526;
  x1 = XEXP (x0, 0);
  goto L9048;

 L9526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case ZERO_EXTRACT:
      goto L9527;
    case AND:
      goto L10340;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9048;

 L9527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L9528;
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L9528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9529;
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L9529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L9530;
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L9530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (ix86_match_ccmode (insn, CCNOmode)))
    {
      return gen_split_1010 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L10340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (aligned_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L10341;
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L10341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L10342;
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L10342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0
      && (! TARGET_PARTIAL_REG_STALL && reload_completed
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1238 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9048;

 L9949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L9950;
    }
  goto L10804;

 L9950: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L12107;
  x1 = XEXP (x0, 0);
  goto L10804;

 L12107: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NE:
      goto L9951;
    case EQ:
      goto L9966;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9952;
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9952: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9953;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9954;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1134 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9967;
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9967: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9968;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9969;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0)
    {
      return gen_split_1136 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9972: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L9973;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case NE:
      goto L9974;
    case EQ:
      goto L9985;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L9975;
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9975: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L9976;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9976: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L9977;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9978;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L9979;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L9980;

 L9980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_1155 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_comparison_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L9986;
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9986: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == REG
      && XINT (x4, 0) == 17)
    goto L9987;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9987: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L9988;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L9989;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L9990;
  x1 = XEXP (x0, 0);
  goto L10804;

 L9990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L9991;

 L9991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_1156 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9049: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L9050;
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L9050: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (GET_MODE (operands[0]) == XFmode || GET_MODE (operands[0]) == TFmode)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))))
    {
      return gen_split_876 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10804;

 L12082: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L10805;
    }
  goto L9052;

 L10805: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, TImode))
    {
      operands[1] = x1;
      return gen_split_1306 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L12083: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L10808;
    }
  goto L9052;

 L10808: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      return gen_split_1307 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L12084: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L10811;
    }
  goto L9052;

 L10811: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4SImode))
    {
      operands[1] = x1;
      return gen_split_1308 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L12085: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L10814;
    }
  goto L9052;

 L10814: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2SImode))
    {
      operands[1] = x1;
      return gen_split_1309 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L12086: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L10817;
    }
  goto L9052;

 L10817: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V4HImode))
    {
      operands[1] = x1;
      return gen_split_1310 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L12087: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L10820;
    }
  goto L9052;

 L10820: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V8QImode))
    {
      operands[1] = x1;
      return gen_split_1311 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L12088: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L10823;
    }
  goto L9052;

 L10823: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      return gen_split_1312 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L9052;

 L9372: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L9373;
    case PLUS:
      goto L9386;
    case IF_THEN_ELSE:
      goto L10309;
    case NOT:
      goto L10353;
    case SUBREG:
    case MEM:
      goto L9053;
    default:
      goto L10094;
   }
 L9053: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L9054;
    }
 L10094: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L10095;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L9373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9374;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L9374: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && FLOAT_MODE_P (GET_MODE (operands[0]))
   && FP_REG_P (operands[0])))
    {
      return gen_split_950 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L9386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L9421;
    case MULT:
      goto L9404;
    default:
     break;
   }
  goto L10094;

 L9421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MULT)
    goto L9422;
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9388;
    }
  goto L10094;

 L9422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L9423;
    }
  goto L10094;

 L9423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L9424;
    }
  goto L10094;

 L9424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L9425;
    }
  goto L10094;

 L9425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L9426;
    }
  goto L10094;

 L9426: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])&& reload_completed))
    {
      return gen_split_958 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10094;

 L9388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L9389;
    }
  goto L10094;

 L9389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L9390;
    }
  goto L10094;

 L9390: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)&& reload_completed))
    {
      return gen_split_954 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10094;

 L9404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L9405;
    }
  goto L10094;

 L9405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const248_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L9406;
    }
  goto L10094;

 L9406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L9407;
    }
  goto L10094;

 L9407: ATTRIBUTE_UNUSED_LABEL
  if (((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)&& reload_completed))
    {
      return gen_split_956 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10094;

 L10309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L10359;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L10360;
 L10310: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L10311;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L10361;
  x3 = XEXP (x2, 0);
  goto L10310;

 L10361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L10362;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10310;

 L10362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L10363;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10310;

 L10363: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1241 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L10310;

 L10311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L10312;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L10313;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L10314;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10314: ATTRIBUTE_UNUSED_LABEL
  if ((SSE_REG_P (operands[0]) && reload_completed
   && (const0_operand (operands[2], GET_MODE (operands[0]))
       || const0_operand (operands[3], GET_MODE (operands[0])))))
    {
      return gen_split_1232 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L10354;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10354: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size)))))
    {
      return gen_split_1240 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L9054: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode || GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
   && CONSTANT_POOL_ADDRESS_P (XEXP (operands[1], 0))
   && (!(SSE_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && SSE_REG_P (SUBREG_REG (operands[0]))))
       || standard_sse_constant_p (get_pool_constant (XEXP (operands[1], 0))))
   && (!(FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && FP_REG_P (SUBREG_REG (operands[0]))))
       || standard_80387_constant_p (get_pool_constant (XEXP (operands[1], 0))))))
    {
      return gen_split_877 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == FLOAT)
    goto L10096;
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L10103;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L10097;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L10098;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10098: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_1181 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == FLOAT)
    goto L10104;
  x1 = XEXP (x0, 0);
  goto L10825;

 L10104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L10105;
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10105: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0]))))
    {
      return gen_split_1182 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10825;

 L10826: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L10827;
    }
  goto ret0;

 L10827: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1])))
    {
      return gen_split_1313 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx split_2 PARAMS ((rtx, rtx));
static rtx
split_2 (x0, insn)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L12109;
    case HImode:
      goto L12110;
    case DImode:
      goto L12111;
    case SFmode:
      goto L12113;
    case DFmode:
      goto L12116;
    default:
      break;
    }
 L9807: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L9808;
 L9448: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9449;
    }
 L9541: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9542;
    }
 L9605: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L9606;
    }
 L9648: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L12119;
    case XFmode:
      goto L12120;
    case TFmode:
      goto L12121;
    default:
      break;
    }
 L10317: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L10346;
    }
  goto ret0;

 L12109: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9058;
    }
  goto L9807;

 L9058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L9059;
  x2 = XEXP (x1, 0);
  goto L9807;

 L9059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L12122;
    case QImode:
      goto L12123;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L9807;

 L12122: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9060;
    }
  x2 = XEXP (x1, 0);
  goto L9807;

 L9060: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9061;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L9061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return gen_split_879 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L12123: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9088;
    }
 L12124: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9102;
    }
  x2 = XEXP (x1, 0);
  goto L9807;

 L9088: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9089;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12124;

 L9089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12125;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12124;

 L12125: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12127;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12124;

 L12127: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12129;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12124;

 L12129: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))))
    {
      return gen_split_885 (operands);
    }
 L12130: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    {
      return gen_split_886 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12124;

 L9102: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9103;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L9103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1])))
    {
      return gen_split_887 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L12110: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L9065;
    }
  goto L9807;

 L9065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L9066;
  x2 = XEXP (x1, 0);
  goto L9807;

 L9066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L12131;
  x2 = XEXP (x1, 0);
  goto L9807;

 L12131: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9067;
    }
 L12132: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9081;
    }
  x2 = XEXP (x1, 0);
  goto L9807;

 L9067: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9068;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12132;

 L9068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L12133;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12132;

 L12133: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L12135;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12132;

 L12135: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L12137;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12132;

 L12137: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))))
    {
      return gen_split_881 (operands);
    }
 L12138: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    {
      return gen_split_882 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L12132;

 L9081: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9082;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L9082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1])))
    {
      return gen_split_883 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L12111: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L9111;
    }
 L12112: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L9118;
    }
 L12118: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L9441;
    }
  goto L9807;

 L9111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L9112;
  x2 = XEXP (x1, 0);
  goto L12112;

 L9112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9113;
    }
  x2 = XEXP (x1, 0);
  goto L12112;

 L9113: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9114;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12112;

 L9114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1])))
    {
      return gen_split_890 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12112;

 L9118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L12139;
  x2 = XEXP (x1, 0);
  goto L12118;

 L12139: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L9119;
    case PLUS:
      goto L9379;
    case MINUS:
      goto L9467;
    case NEG:
      goto L9559;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9120;
    }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9120: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9121;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_891 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9380;
    }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9381;
    }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9381: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9382;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_952 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9468;
    }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9469;
    }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9469: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9470;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_970 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9560;
    }
  x2 = XEXP (x1, 0);
  goto L12118;

 L9560: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9561;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && (!TARGET_64BIT && reload_completed))
    {
      return gen_split_1028 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L12118;

 L9441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L12143;
  x2 = XEXP (x1, 0);
  goto L9807;

 L12143: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L9442;
    case ZERO_EXTEND:
      goto L9458;
    case ASHIFT:
      goto L9865;
    case ASHIFTRT:
      goto L9918;
    case LSHIFTRT:
      goto L9936;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9807;

 L9442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9443;
    }
  x2 = XEXP (x1, 0);
  goto L9807;

 L9443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9444;
    }
  x2 = XEXP (x1, 0);
  goto L9807;

 L9444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L9445;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9807;

 L9445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
      && XINT (x2, 0) == 17