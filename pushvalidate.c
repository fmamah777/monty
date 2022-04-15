#include "monty.h"


/**
 * push_validate - validation to push
 * @push_value: function being used
 * @line_n: line number of the file
 * Return: true else false
 */

	bool push_validate(char *push_value, int line_n)
{
	int i = 0;
	bool test = true;

	while (push_value[i])
{

	if ((push_value[i] >= 48 && push_value[i] <= 57) || push_value[i] == 45)
	test = true;
	else
{
	test = false;
	break;
}
	i++;
}

	if (test == false)
{
	fprintf(stderr, "L%d: usage: push integer\12", line_n);
	exit(EXIT_FAILURE);
}
	return (test);
}
