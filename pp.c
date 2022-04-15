#include "monty.h"

/**
 * push - Adds a new node at beginning of list
 * @stack: pointer to stack
 * @line_number: line number
 * @push_value: value pushed
 */

	void push(stack_t **stack, unsigned int line_number, int push_value)
{
	stack_t *new_node;

	(void)line_number;

	if (!stack)
{
	exit(EXIT_FAILURE);
}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
	new_node->n = push_value;
	if (*stack)
{
	(*stack)->prev = new_node;
	new_node->next = *stack;
	new_node->prev = NULL;
}
	*stack = new_node;
}

/**
 * pall - Function that prints all the elements in stack
 * @stack: pointer to the head of list
 * @line_number: line number of .m file
 * Return: Number of nodes
 */

	void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	while (tmp)
{
	printf("%d\n", tmp->n);
	tmp = tmp->next;
}
}

/**
 * pint - Function that prints the value at top of stack
 * @line_number: node value
 * @stack: pointer to the head of lsts
 */

	void pint(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
	value = (*stack)->n;
	printf("%d\n", value);
}

/**
 * pop - removes node at the top of stack
 * @stack: pointer to the head of  stack
 * @line_number: node index ?
 */

	void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL || stack == NULL)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;

}
