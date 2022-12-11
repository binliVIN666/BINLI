#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 11000

#include<stdio.h>

#include<string.h>

struct Round    //创建坐标结构体
{
	double x;
	double y;
	double r;
};

struct Total   //将读取的坐标保存至此数组中
{
	struct Round date[MAX];
};

int main()
{
	FILE* fp;
	fp = fopen("init_xyr.dat", "r");
	if (fp == NULL)     //判断是否能打开该文件
	{
		printf("Can't open file");
		return 0;
	}
	struct Round data[MAX];   //创建一个数组进行存放每一个坐标的信息
	int size = 0;

	do {
		fscanf(fp, "%lf %lf %lf", &(data[size].x), &(data[size].y), &(data[size].r));   //将读取的每个坐标依次放入data坐标数组中
		if (feof(fp))   //判断是否读到EOF，若读到即刻终止读取文件
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