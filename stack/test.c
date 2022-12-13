#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, const char* argv[])
{
	_stack stack;
	stack_init(&stack);
	printf("after init:");
	print_attris(&stack);	
	putchar('\n');
	
	push(&stack,114514);
	push(&stack,1236234);
	printf("after push two elements:");
	print_attris(&stack);	
	putchar('\n');

	printf("get stack top element:%d\n",get(&stack));
	putchar('\n');
	print_attris(&stack);

	printf("%d\n",	pop(&stack));
	printf("\nafter pop one element:\n");
	print_attris(&stack);

	printf("get stack top element:%d\n",get(&stack));
	putchar('\n');

	clear_stk(&stack);
	srand((unsigned)time(NULL));
	for(int i=0;i<stack.size;++i)
	{
		push(&stack,rand());
	}
	print_attris(&stack);

	while(!is_stk_empty(&stack)){
		printf("%d\n",pop(&stack));
	}
	
	
	return 0;
}
