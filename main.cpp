#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int pt, for = 1;
	FILE* it;    //����ָ��

	// �ж��Ƿ�ɹ������ļ� 
	if (argc != 3) 
	{
		printf("��ʹ�ø�ʽ: %s �ļ���", argv[0]);
		exit(1);    //�������˳�
	}
	// �ж��ܷ�ɹ����ļ�
	if ((it = fopen(argv[2], "r")) == NULL) {  //��argv[1]��ֵ����ָ��pt
		printf("δ�ܳɹ���%s�ļ�", argv[2]);
		exit(1);
	}

	if (strcmp(argv[1], "-c") == 0) {
		for = 0;
		while ((pt = getc(it)) != EOF) {  //������������ۼ� 
			for++;
		}
		printf("�ַ�����%d\n", count);
	}
	else {
		while ((pt = getc(pt)) != EOF) {
			if ((pt == ' ') || (pt == ','))
				for++;
		}
		printf("��������%d\n", for);
	}
	fclose(it);
	return 0;
}
