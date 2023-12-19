#include "monty.h"

/* Function to handle the push opcode */
void push(stack_t **stack, unsigned int line_number)
{
    /* Ensure the arguments required for push are present */
    /* Handle validation of arguments and push onto the stack */
    /* Handle errors according to the specifications */

    /* Example: Skeleton structure, you'll need to implement the logic */
    if (/* Check if argument is missing or invalid */)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        /* Handle error exit with EXIT_FAILURE */
    }

    /* Convert argument to integer and push onto the stack */
    /* Allocate memory for a new stack node */
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        /* Handle error exit with EXIT_FAILURE */
    }

    new_node->n = /* Converted integer value */;
    new_node->prev = NULL;

    if (*stack == NULL)
    {
        new_node->next = NULL;
        *stack = new_node;
    }
    else
    {
        new_node->next = *stack;
        (*stack)->prev = new_node;
        *stack = new_node;
    }
}
}

