#include "monty.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: pointer to array of args
 * Return: EXIT_SUCCESS else EXIT_FAILURE
 */

	int main(int argc, char *argv[])
{
	if (argc != 2)
{
	fprintf(stderr, "USAGE: monty file\12");
	exit(EXIT_FAILURE);
}

	globales.fp = fopen(argv[1], "r");
	if (!globales.fp)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}
	readfile();
	fclose(globales.fp);
	return (EXIT_SUCCESS);
}
