#ifndef _stack_h
#define _stack_h

#define stack_size 100

typedef struct stack {
	int data[stack_size];
	short size;
	short length;
	int top;
}_stack;


void stack_init(_stack* stk);
void print_attris(_stack* stk);
void push(_stack* stk,int value);
int  pop(_stack* stk);
int get(_stack* stk);
int is_stk_empty(_stack* stk);
void clear_stk(_stack* stk);

#include "stack.c"

#endif
