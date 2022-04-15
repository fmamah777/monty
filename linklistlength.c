#include "monty.h"

/**
 * lililen - linked list length
 * @stack: pointer to list
 * Return: size ?
 **/

	size_t lililen(stack_t **stack)
{
	size_t counter = 0;
	stack_t *tmp;

	if (*stack == NULL)
{
	return (0);
}
	tmp = *stack;
	while (tmp)
{
	tmp = tmp->next;
	counter++;
}
	return (counter);
}
