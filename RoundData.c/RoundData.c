#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 11000

#include<stdio.h>

#include<string.h>

struct Round    //��������ṹ��
{
	double x;
	double y;
	double r;
};

struct Total   //����ȡ�����걣������������
{
	struct Round date[MAX];
};

int main()
{
	FILE* fp;
	fp = fopen("init_xyr.dat", "r");
	if (fp == NULL)     //�ж��Ƿ��ܴ򿪸��ļ�
	{
		printf("Can't open file");
		return 0;
	}
	struct Round data[MAX];   //����һ��������д��ÿһ���������Ϣ
	int size = 0;

	do {
		fscanf(fp, "%lf %lf %lf", &(data[size].x), &(data[size].y), &(data[size].r));   //����ȡ��ÿ���������η���data����������
		if (feof(fp))   //�ж��Ƿ����EOF��������������ֹ��ȡ�ļ�
		{
			strcpy(&data[size].x, 0);
			strcpy(&data[size].y, 0);
			strcpy(&data[size].r, 0);
			break;
		}

		printf("(%.12lf,%.12lf,%.12lf)\n", data[size].x, data[size].y, data[size].r);
		size++;
	} while (!feof(fp));

	fclose(fp);
	fp = NULL;

	return 0;
}