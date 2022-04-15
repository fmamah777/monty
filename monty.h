#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/types.h>
#include <stdarg.h>
#include <errno.h>
#include <stdlib.h>

#define DELIM "\t\n "


/**
 * struct stack_s - doubly linked list stack
 * @n: pointer
 * @prev: points to previous element in stack
 * @next: points to next element in stack
 */


typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode function
 * @opcode: opcode
 * @f: function to handle the opcode
 * Description: opcode and its function description etc
 */

typedef struct instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct glovar - global variable structs
 * @stackorqueue: value to switch  modes
 * @fp: File description
 * Description: global variables to switch mode
 */

typedef struct glovar
{
  FILE *fp;
  int stackorqueue;
} glovar_t;

glovar_t globales;

void readfile(void);
bool push_validate(char *push_value, int line_n);
int get_opcode(const char *opcode, stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
size_t lililen(stack_t **stack);
void push(stack_t **stack, unsigned int line_number, int push_value);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);

#endif
