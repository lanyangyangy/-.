#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#define MAX 100
typedef int Datatype;
typedef struct Stack
{
	Datatype* base;
    Datatype* top;
	int stacksize;
}Stack;

void  InitStack(Stack* S);
 void ClearStack(Stack* S);
Datatype PopStack(Stack* S);
 void DestoryStack(Stack* S);
 void PushStack(Stack* S, Datatype Data);
 Datatype GetTop(Stack* S);
 int EmptyStack(Stack* S);
int FullStack(Stack* S)
