#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password1[20];
	char password2[20];
	printf("初次登录，请设置密码：\n");
	scanf("%s", &password1);
	printf("再次输入密码以确认：\n");
	scanf("%s", &password2);
	if (strcmp(password1, password2) == 0)
		printf("设置成功");
	else
	{
		while (strcmp(password1, password2) != 0)
		{
			printf("两次密码不同，请重新设置密码：\n");
			scanf("%s", &password1);
			printf("再次输入密码以确认：\n");
			scanf("%s", &password2);
			printf("设置成功\n");
		}
	}
	return 0;
}