#include <stdlib.h>	/* malloc */

typedef unsigned char char;

typedef struct GO_STR_FILE {
	char *p0, *p1, *p;
	int dummy;
} GO_FILE;

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;
extern struct GOL_STR_MEMMAN GOL_memman, GOL_sysman;
char *GOL_work0;

struct bss_alloc {
	char _stdout[SIZ_STDOUT];
	char _stderr[SIZ_STDERR];
	char syswrk[SIZ_SYSWRK];
	char work[SIZ_WORK];
};

void GOL_sysabort(char termcode);
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, unsigned int size, void *p);
void *GOL_sysmalloc(unsigned int size);
void GOL_callmain(int argc, char **argv);

int main(int argc, char **argv)
/* ���ʤ餺��-o���ץ������դ��� */
/* �����ǡ�-o���ץ������������ */
/* ���������ϥե�����̾�Ͻ�(ɸ�����ϤǤ�size��¬��Ǥ��ʤ�����) */
{
	struct bss_alloc *bss0;
	char **argv1, **p;
	bss0 = (struct bss_alloc *) malloc(sizeof (struct bss_alloc));
	GO_stdout.p0 = GO_stdout.p = bss0->_stdout;
	GO_stdout.p1 = GO_stdout.p0 + SIZ_STDOUT;
	GO_stdout.dummy = ~0;
	GO_stderr.p0 = GO_stderr.p = bss0->_stderr;
	GO_stderr.p1 = GO_stderr.p0 + (SIZ_STDERR - 128); /* �虜�Ⱦ������������Ƥ��� */
	GO_stderr.dummy = ~0;
	GOL_memmaninit(&GOL_sysman, SIZ_SYSWRK, bss0->syswrk);
	GOL_memmaninit(&GOL_memman, SIZ_WORK, GOL_work0 = bss0->work);
	GOL_callmain(argc, argv);
	return 0; /* ���ߡ� */
}
