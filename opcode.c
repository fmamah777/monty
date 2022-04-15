#include "monty.h"


/**
 * get_opcode - funstion to get oppcode
 * @opcode: oppcode being used
 * @stack: the stack being pushed
 * @line_number: line number of file
 * Return: nothing
 */

	int get_opcode(const char *opcode, stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t opcode_list[] = {
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"pint", pint},
	{"swap", swap},
	{"nop", nop},
	{"add", add},
};

	int size = sizeof(opcode_list) / sizeof(instruction_t);

	while (i < size)
{
	if (strcmp(opcode, opcode_list[i].opcode) == 0)
{
	opcode_list[i].f(stack, line_number);
	return (0);
}
	i++;
}
	fprintf(stderr, "L%d: unknown instruction %s\12", line_number, opcode);
	exit(EXIT_FAILURE);
}
