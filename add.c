#include "monty.h"

/**
 * add - adds the first two ints from a stack_t list
 * @stack: pointer to the head of the list
 * @line_number: line no\umber opcode was found in
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(7, "add");

	n = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = n;
}

/**
 * sub - subs the first int from the next, held in a stack_t
 * doubly linked list
 * @stack: pointer to the head of the list
 * @line_number: line no\umber opcode was found in
 * Return: Nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(7, "sub");

	n = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = n;
}

/**
 * div - subs the first int from the next, held in a stack_t
 * doubly linked list
 * @stack: pointer to the head of the list
 * @line_number: line no\umber opcode was found in
 * Return: Nothing
 */
void div(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(7, "div");

	if ((*stack)->n == 0)
		error_handler(8, NULL);

	n = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = n;
}

/**
 * mod - subs the first int from the next, held in a stack_t
 * doubly linked list
 * @stack: pointer to the head of the list
 * @line_number: line no\umber opcode was found in
 * Return: Nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(7, "mod");

	if ((*stack)->n == 0)
		error_handler(8, NULL);

	n = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = n;
}

/**
 * mul - subs the first int from the next, held in a stack_t
 * doubly linked list
 * @stack: pointer to the head of the list
 * @line_number: line no\umber opcode was found in
 * Return: Nothing
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL || (*stack)->next == NULL)
		error_handler(7, "mul");

	n = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = n;
}
