#include "monty.h"

/* Function to handle the pall opcode */
void pall(stack_t **stack, unsigned int line_number)
{
    /* Check if the stack is empty */
    if (*stack == NULL)
        return;

    /* Traverse the stack and print all values */
    stack_t *current = *stack;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

