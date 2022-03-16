#include"zhancaozuo.h"

void  InitStack(Stack* S)
{

	//Stack hao,* S=&hao;
	S->base = (Datatype*)malloc(MAX * sizeof(Datatype));
	if (S->base == NULL)
	{
		printf("ÉęÇëĘ§°Ü\n");
		exit(-1);
	}
	S->stacksize = MAX;
	S->top = S->base - 1;
	//return S;
}
void ClearStack(Stack* S)
{
	S->top = S->base - 1;
}

void DestoryStack(Stack* S)
{
	free(S->base);
	S->base = NULL;
}

void PushStack(Stack* S, Datatype Data)
{
	if (FullStack(S))
	{
		S->base = (Datatype*)realloc(S->base, 2 * MAX * sizeof(Datatype));
		if (S->base)  exit(-1);
		S->top = S->base + S->stacksize;
		S->stacksize += MAX;
	}
	else {
		*(++S->top) = Data;
	}
}

Datatype GetTop(Stack* S)
{
	assert(S);
	if (S->top < S->base)
	{
		return -1;
	}
	else
	{
		return  *S->top;
	}

}
Datatype PopStack(Stack* S)
{
	Datatype yy = 0;
	if (S->top >= S->base)
	{
		yy = *S->top--;
	//	printf("%d  ", yy);
		return yy;
	}
}
int EmptyStack(Stack* S)
{
	if (S->top == S->base-1)
		return 1;
	else
		return 0;
}
int FullStack(Stack* S)
{
	if (S->top - S->base == S->stacksize-1)
		return 1;
	else
		return 0;
}
