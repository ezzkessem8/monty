#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack.
 * @stack: pointer to the stack
 * @line_number: line number in the Monty byte code file
 * Return: no return
 */
void f_pint(stack_t **stack, unsigned int line_number)
{
    /* Check if the stack is empty */
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        /* Handle error exit with EXIT_FAILURE */
    }

    /* Print the value at the top of the stack */
    printf("%d\n", (*stack)->n);
}

