#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int pt, for = 1;
	FILE* it;    //定义指针

	// 判断是否成功输入文件 
	if (argc != 3) 
	{
		printf("请使用格式: %s 文件名", argv[0]);
		exit(1);    //非正常退出
	}
	// 判断能否成功打开文件
	if ((it = fopen(argv[2], "r")) == NULL) {  //将argv[1]的值赋给指针pt
		printf("未能成功打开%s文件", argv[2]);
		exit(1);
	}

	if (strcmp(argv[1], "-c") == 0) {
		for = 0;
		while ((pt = getc(it)) != EOF) {  //如果不结束则累加 
			for++;
		}
		printf("字符数：%d\n", count);
	}
	else {
		while ((pt = getc(pt)) != EOF) {
			if ((pt == ' ') || (pt == ','))
				for++;
		}
		printf("单词数：%d\n", for);
	}
	fclose(it);
	return 0;
}
