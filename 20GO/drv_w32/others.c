/* for w32 */

//	void GOLD_exit(int s);		/* ��λ���� */
int GOLD_getsize(const UCHAR *name); /* �ե����륵�������� */
int GOLD_read(const UCHAR *name, int len, UCHAR *b0);
	/* �ե������ɤ߹��ߡ��Х��ʥ�⡼�ɡ�
		��������ƤӽФ�¦��ľ���˥ե���������å����Ƥ��ơ�
		�ե����륵�����Ԥä�����׵ᤷ�Ƥ��� */

int GOLD_getsize(const UCHAR *name)
{
	HANDLE h;
	int len = -1;
	h = CreateFileA((char *) name, GENERIC_READ, FILE_SHARE_READ,
		NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if (h == INVALID_HANDLE_VALUE)
		goto err;
	len = GetFileSize(h, NULL);
	CloseHandle(h);
err:
	return len;
}

int GOLD_read(const UCHAR *name, int len, UCHAR *b0)
{
	HANDLE h;
	int i;
	h = CreateFileA((char *) name, GENERIC_READ, FILE_SHARE_READ,
		NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if (h == INVALID_HANDLE_VALUE)
		goto err;
	ReadFile(h, b0, len, &i, NULL);
	CloseHandle(h);
	if (len != i)
		goto err;
	return 0;
err:
	return 1;
}