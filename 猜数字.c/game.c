#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("***********************************\n");
	printf("******    1.play  0.exit    *******\n");
	printf("***********************************\n");
}
int Judge(char* s)
{
	char* p = s;
	while (*p)
	{
		if (*p < 0 || *p>9)
		{
			return 0;
		}
		p++;
	}
	return 1;
 }

void game()
{
	int a = 0;
	char s[20];
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	printf("�������\n");
	scanf("%s",s);
	while((Judge(s) == 1))
	{
		printf("����ֵ�����������������룺\n");
		scanf("%s",s);
		Judge(s);
	}
	a = s - '0';
	while (a != ret)
	{
		if (a > ret)
		{ 
			printf("�´���\n");
		}
		else if (a < ret)
		{
			printf("��С��\n");
		}
		scanf("%d", &a);
	}
	printf("�¶���\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input);
	return 0;
}