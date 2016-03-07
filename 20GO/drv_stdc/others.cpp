/* for stdc */

//	void GOLD_exit(int s);		/* ��λ���� */
int GOLD_getsize(const UCHAR *name); /* �ե����륵�������� */
int GOLD_read(const UCHAR *name, int len, UCHAR *b0);
	/* �ե������ɤ߹��ߡ��Х��ʥ�⡼�ɡ�
		��������ƤӽФ�¦��ľ���˥ե���������å����Ƥ��ơ�
		�ե����륵�����Ԥä�����׵ᤷ�Ƥ��� */

#if (defined(USE_SYS_STAT_H))

#include <sys/stat.h>

int GOLD_getsize(const UCHAR *name)
/* �ե����륵�������� */
{
	FILE *fp;
	struct stat st;
	int i;
	fp = fopen(name, "rb");
	if (fp == NULL)
		goto err;
	i = fstat(fileno(fp), &st);
	fclose(fp);
	if (i == -1)
		goto err;
	return st.st_size;
err:
	return -1;
}

#else

int GOLD_getsize(const UCHAR *name)
{
	FILE *fp;
	int len;
	fp = fopen(name, "rb");
	if (fp == NULL)
		goto err;
	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	fclose(fp);
	return len;
err:
	return -1;
}

#endif

int GOLD_read(const UCHAR *name, int len, UCHAR *b0)
{
	FILE *fp;
	int i;
	fp = fopen(name, "rb");
	if (fp == NULL)
		goto err;
	i = fread(b0, 1, len, fp);
	fclose(fp);
	if (len != i)
		goto err;
	return 0;
err:
	return 1;
}
