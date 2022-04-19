#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
void Print()
{
	printf("1.加法\n");
	printf("2.减法\n");
	printf("3.除法\n");
	printf("4.乘法\n");
	printf("0.退出程序\n");
}
void Addition()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a + b;
	printf("结果为：%d\n", x);
}
void Subtraction()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a - b;
	printf("结果为：%d\n", x);
}
void Division()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a / b;
	printf("结果为：%d\n", x);
}
void Multiplication()
{
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d%d", &a, &b);
	x = a * b;
	printf("结果为：%d\n", x);
}
void Choice()
{
	Print();
	int q = 0;
	int w = 0;
	printf("请选择你要进行的运算:");
	scanf("%d", &q);
	while (q)
	{
		if (w > 0 && q < 5)
		{
			Print();
			printf("请选择你要进行的运算:");
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
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}
}
int main()
{
	Choice();
	return 0;
}