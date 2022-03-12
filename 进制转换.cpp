# include<stdio.h>
#include "zhancaozuo.h"

#include<string.h>
void  shuru(int * n,long* shuzi);
void ruzhan(Stack* zhan,long shuzi,int n);
void chuzhan(Stack* zhan);

int main()
{
	Stack xiaochu;
	int n = 0;
	long shuzi = 0;
	InitStack(&xiaochu);
	shuru(&n,&shuzi);
	ruzhan(&xiaochu, shuzi, n);
	chuzhan(&xiaochu);
	return 0;
}

void shuru(int* n,long* shuzi)
{
	printf("请问你想要转换成几进制：\n");
	scanf_s("%d", n);
	printf("输入你要转化的数：\n");
	scanf_s("%ld", shuzi);
}
void  ruzhan(Stack* zhan,long shuzi,int n)
{
	int qq = shuzi;
	int mm = 0;
	while (qq >= n)
	{
		PushStack(zhan, qq % n);
		qq /= n;
	}

	PushStack(zhan, qq % n);

}
void chuzhan(Stack* zhan)
{
	char num[10] = "\0";
	int shu;
	int i = 0;
	while (!EmptyStack(zhan) )
	{
		shu = PopStack(zhan);
		if (shu < 10)
		{
			num[i++] = shu + 48;
		}
		else
		{
			num[i++] = shu - 10 + 65;
		}
	}
	printf("转化为：");
	printf(num);

}


//int main()
//{
//	Stack xiaochu;
//	InitStack(&xiaochu);
//	int i = 0;
//	while (i < 5)
//	{
//		PushStack(&xiaochu, i);
//		printf("%d", i);
//		i++;
//	}
//	PopStack(&xiaochu);
//	PopStack(&xiaochu);
//	PopStack(&xiaochu);
//	PopStack(&xiaochu);
//	PopStack(&xiaochu);
//	PopStack(&xiaochu);
//
//	return 0;
//}