#include "monty.h"

/**
 * free_stack - Free the  srtack
 * @stack: pointer to stack to free
 * Return: 0
 */

void free_stack(stack_t *stack)
{
	stack_t *tmp = NULL;

	while (stack != NULL)
{
	tmp = stack;
	stack = stack->next;
	free(tmp);
}
	free(stack);
}
