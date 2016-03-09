#include <cstdio>
#include <cstring>
#include <memory>

#if (DEBUG)
	#include "go.hpp"
#endif

typedef unsigned char UCHAR;
typedef unsigned int  UINT;

// on 64 bit sizeof(char*) is 8 and sizeof(int) is 4
// on 32 bit sizeof(char*) is 4 and sizeof(int) is 4
// Suck
typedef union {
	UINT integer;
	UCHAR byte[4];
} nask32bitInt;

// See also: http://en.cppreference.com/w/cpp/string/byte/memcpy
static nask32bitInt* ucharToNask32bitIntPtr(UCHAR* uchar) {
	nask32bitInt* t;
	std::memcpy(t->byte, uchar, sizeof t->byte);
	return t;
};

constexpr unsigned int INVALID_DELTA = 0x40000000;
constexpr size_t       MAXSIGMAS     = 4;

constexpr unsigned int VFLG_ERROR    = 0x01; /* �G���[ */
constexpr unsigned int VFLG_SLFREF   = 0x02; /* ���ȎQ�ƃG���[ */
constexpr unsigned int VFLG_UNDEF    = 0x04; /* ����`�G���[ */
constexpr unsigned int VFLG_EXTERN   = 0x10; /* �O�����x�� */
constexpr unsigned int VFLG_CALC     = 0x20; /* �v�Z�� */
constexpr unsigned int VFLG_ENABLE   = 0x40; /* STR_LABEL�ŗL���Ȃ��Ƃ����� */

struct STR_SIGMA {
	int scale;
	unsigned int subsect, terms;
     	STR_SIGMA& operator=(std::unique_ptr<STR_SIGMA>& value) {
		this->scale = value->scale;
		this->subsect = value->subsect;
		this->terms = value->terms;
		return *this;
     	}
};

struct STR_VALUE {
	int min;
	unsigned int delta, flags;
	std::array<int, 2> scale;
	std::array<unsigned int, 2> label;
	std::array<struct STR_SIGMA, MAXSIGMAS> sigma;

     	STR_VALUE& operator=(std::unique_ptr<STR_VALUE>& value) {
		this->min = value->min;
		this->delta = value->delta;
		this->flags = value->flags;
		this->scale = value->scale;
		this->label = value->label;
		this->sigma = value->sigma;
		return *this;
     	}
	STR_VALUE& assign_sigma(size_t index, std::unique_ptr<STR_SIGMA>& value) {
		this->sigma[index] = value;
		return *this;
	}
};

struct STR_LABEL {
	struct STR_VALUE value;
	UCHAR *define; /* ���ꂪNULL���ƁAextlabel */
	STR_LABEL& assign_value(std::unique_ptr<STR_VALUE>& value) {
		this->value = value;
		return *this;
	}
};

struct STR_SUBSECTION {
	unsigned int min, delta, unsolved; /* unsolved == 0 �Ȃ�œK���̕K�v�Ȃ� */
	UCHAR *sect0, *sect1;
};

static struct STR_LABEL* label0;
static struct STR_SUBSECTION* subsect0;

static std::array<UCHAR, 7> table98typlen = { 0x38, 0x38, 0x39, 0x39, 0x3b, 0x3b, 0x38 };
static std::array<UCHAR, 7> table98range  = { 0x00, 0x02, 0x00, 0x03, 0x00, 0x03, 0x03 };

struct STR_LL_VB {
	UCHAR *expr, typlen, range;
};

UCHAR *LL_skip_expr(UCHAR *p);
UCHAR *LL_skip_mc30(UCHAR *s, UCHAR *bytes, char flag);
UCHAR *LL_skipcode(UCHAR *p);

unsigned int solve_subsection(struct STR_SUBSECTION *subsect, char force);
UCHAR *skip_mc30(UCHAR *s, UCHAR *bytes, char flag);
void init_value(STR_VALUE* value);
void calcsigma(std::unique_ptr<STR_VALUE>& value);
void addsigma(std::unique_ptr<STR_VALUE>& value, struct STR_SIGMA sigma);
void calc_value0(std::unique_ptr<STR_VALUE>& value, UCHAR **pexpr);

/* ���x���̒�`���@:
	��ʎ�
	80 variable-sum, 0000bbaa(aa:����-1, bb:�ŏ��̔ԍ�),
	84�`87 sum, i - 1, expr, expr, ...

  �E80�`8f:LL�����������p�Ɏg��
	80�`83:variable�Q��(1�`4�o�C�g)
	88�`8f:sum(variable), (1�`4, 1�`4) : �ŏ��͍���-1, ���͍ŏ��̔ԍ�
		{ "|>", 12, 18 }, { "&>", 12, 17 },
		{ "<<", 12, 16 }, { ">>", 12, 17 },
		{ "//", 14,  9 }, { "%%", 14, 10 },
		{ "+",  13,  4 }, { "-",  13,  5 },
		{ "*",  14,  6 }, { "/",  14,  7 },
		{ "%",  14,  8 }, { "^",   7, 14 },
		{ "&",   8, 12 }, { "|",   6, 13 },
		{ "",    0,  0 }

	s+
	s-
	s~

	+, -, *, <<, /u, %u, /s, %s
	>>u, >>s, &, |, ^


	< ���@ >

�ŏ��̓w�b�_�B
�E�w�b�_�T�C�Y(DW) = 12
�E�o�[�W�����R�[�h(DW)
�E���x������(DW)


  �E38:���̒l��DB�ɂ��Đݒu
  �E39:���̒l��DW�ɂ��Đݒu
  �E3a:���̒l��3�o�C�g�Őݒu
  �E3b:���̒l��DD�ɂ��Đݒu
  �ȉ��A�E3f�܂ł���B
  �E40�`47:�u���b�N�R�}���h�Bif���Ȃǂ̌㑱�����u���b�N������(2�`9)�B
  �E48:�o�C�g�u���b�N�i�u���b�N�����o�C�g�Ō㑱�j�B
  �E49:���[�h�u���b�N�B
  �E4a:�o�C�g�u���b�N�B
  �E4b:�_�u�����[�h�u���b�N�B
  �E4c:�r���Iif�J�n�B
  �E4d:�I��Iif�J�n�B
  �E4e:�I��I�o�E���_���[if�J�n�B�ϐ��ݒ�̒���A�o�E���_���[�l�������B
  �E4f:endif�B
  �r���Iif�́Aendif������܂ł��������ׂ���Bendif������܂ŁA
  �S��else-if�Ƃ��Ĉ�����B�Ō��else����肽����΁A������萔1�ɂ���B
  �E�^�[�~�l�[�^�[�̓��x����`��0xffffffff�B

  �E58:ORG

  �E60:�A���C���B�o�C�g�̖��ߕ��͌ʂɐݒ肷��B�E�E�E����͔r���Iif�ł��L�q�ł���B

  �E70�`77:�ϒ��o�C�g�錾(���@��ł�40�`4b���㑱���邱�Ƃ��������A�T�|�[�g���Ă��Ȃ��B�������̂�30�`3f)
  �E78�`7f:�ϒ��o�C�g�Q��

  �E80�`8f:LL�����������p�Ɏg��
	80�`83:variable�Q��(1�`4�o�C�g)
	88�`8f:sum(variable), (1�`4, 1�`4) : �ŏ��͍���-1, ���͍ŏ��̔ԍ�


  if�����ł́A�ϒ��o�C�g�錾�����ł��Ȃ��B

	ORG�ɂ��āB�{�������͎��ł����Ă悢���A���̃o�[�W�����ł͒萔�������肵�Ă���B




*/

/* ibuf, obuf�̊�b�\�� */
/* �V�O�l�`���[8�o�C�g, ����4�o�C�g, ���U�[�u4�o�C�g */
/* ���C���f�[�^�����O�X4B, ���C���f�[�^�X�^�[�g4B */

/* ������������₱�������Ƃ͂��Ȃ� */
/* �X�L�b�v�R�}���h������đΏ����� */
