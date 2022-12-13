#include "stack.h"
#include <string.h>
#include <stdio.h>

void stack_init(_stack* stk)
{
	stk->size = stack_size;
	stk->length = 0;
	stk->top = -1;	
	memset(stk->data, 0, sizeof(stk->data));	
}


int stklen(_stack* stk);
void print_attris(_stack* stk)
{
	printf("size = %d\nlength = %d\ntop = %d\n",stk->size,stklen(stk),stk->top);
}

void push(_stack* stk,int value)
{
	stk->data[++stk->top] = value;
}


int is_stk_empty(_stack* stk);
int  pop(_stack* stk)
{
	return is_stk_empty(stk) ? 0 : stk->data[stk->top--];
	//return stk->data[stk->top--];
}

int get(_stack* stk)
{
	return stk->data[stk->top];
}

int is_stk_empty(_stack* stk)
{
	return stk->top == -1 ? 1 : 0; 
}

int stklen(_stack* stk)
{
	return stk->top + 1;
}

void clear_stk(_stack* stk)
{
	memset(stk,0,sizeof(stk->data));
	stk->top = -1;
}




