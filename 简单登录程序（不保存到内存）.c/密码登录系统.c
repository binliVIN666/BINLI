#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password1[20];
	char password2[20];
	printf("���ε�¼�����������룺\n");
	scanf("%s", &password1);
	printf("�ٴ�����������ȷ�ϣ�\n");
	scanf("%s", &password2);
	if (strcmp(password1, password2) == 0)
		printf("���óɹ�");
	else
	{
		while (strcmp(password1, password2) != 0)
		{
			printf("�������벻ͬ���������������룺\n");
			scanf("%s", &password1);
			printf("�ٴ�����������ȷ�ϣ�\n");
			scanf("%s", &password2);
			printf("���óɹ�\n");
		}
	}
	return 0;
}