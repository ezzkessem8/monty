#include "monty.h"

/**
 * f_pop - removes the top element of the stack.
 * @stack: pointer to the stack
 * @line_number: line number in the Monty byte code file
 * Return: no return
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    /* Check if the stack is empty */
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        /* Handle error exit with EXIT_FAILURE */
    }

    /* Remove the top element of the stack */
    temp = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(temp);
}

