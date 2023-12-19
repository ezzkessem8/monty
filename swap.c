#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack.
 * @stack: pointer to the stack
 * @line_number: line number in the Monty byte code file
 * Return: no return
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
    int temp;

    /* Check if the stack has less than two elements */
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        /* Handle error exit with EXIT_FAILURE */
    }

    /* Swap the top two elements of the stack */
    temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}

