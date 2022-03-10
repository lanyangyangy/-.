# include<stdio.h>
#include "zhancaozuo.h"

int main()
{
	Stack xiaochu;
	InitStack(&xiaochu);
	int i = 0;
	while (i < 5)
	{
	PushStack(&xiaochu, i);
	i++;
		}
	PopStack(&xiaochu);
	PopStack(&xiaochu);

	return 0;
}

