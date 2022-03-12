# include<stdio.h>
#include "zhancaozuo.h"
#include<string.h>
void  shuru(int* m,int * n,char* shuzi);
long zhuanhuan(char* shuzi,int m);
void ruzhan(Stack* zhan,long shuzi,int n);
void chuzhan(Stack* zhan);

int main()
{
	Stack xiaochu;
	int n = 0,m;
	char shuzi[10] ;
	InitStack(&xiaochu);
	shuru(&m,&n,shuzi);
	
	long shu = zhuanhuan(shuzi,m);
	ruzhan(&xiaochu, shu, n);
	chuzhan(&xiaochu);
	return 0;
}

void shuru(int * m,int* n,char* shuzi)
{

	printf("输入的是几进制？\n");
	scanf_s("%d", m);
	int a=getchar();
	printf("请问你想要转换成几进制：\n");
	scanf_s("%d", n);
	int b = getchar();
	printf("输入你要转化的数：\n");
	gets_s(shuzi, 10);
}
long zhuanhuan(char* shuzi,int m)
{
	long shu = 0,tidai=0;
	for (int i =0 ; i <strlen(shuzi) ; i++)
	{
		if (shuzi[i] >= 48 && shuzi[i] <= 58)
		{
			tidai= shuzi[i] - 48;
		}
		else if (shuzi[i] >= 65 && shuzi[i] <= 91)
		{
			tidai = shuzi[i] - 65+10;	

		}	
		shu *= m;
		shu += tidai;
		tidai = 0;
	}

	return shu;
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



