#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
void Print()
{
	printf("1.�ӷ�\n");
	printf("2.����\n");
	printf("3.����\n");
	printf("4.�˷�\n");
	printf("0.�˳�����\n");
}
void Addition()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a + b;
	printf("���Ϊ��%d\n", x);
}
void Subtraction()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a - b;
	printf("���Ϊ��%d\n", x);
}
void Division()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a / b;
	printf("���Ϊ��%d\n", x);
}
void Multiplication()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a * b;
	printf("���Ϊ��%d\n", x);
}
void Choice()
{
	Print();
	int q = 0;
	int w = 0;
	printf("��ѡ����Ҫ���е�����:");
	scanf("%d", &q);
	while (q)
	{
		if (w > 0 && q < 5)
		{
			Print();
			printf("��ѡ����Ҫ���е�����:");
			scanf("%d", &q);
		}
		w++;
		system("cls");
		switch (q)
		{
		case 1:
			Addition();
			break;
		case 2:
			Subtraction();
			break;
		case 3:
			Division();
			break;
		case 4:
			Multiplication();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	}
}
int main()
{
	Choice();
	return 0;
}