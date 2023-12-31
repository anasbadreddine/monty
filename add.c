#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *da;
	int lnt = 0, aux;

	da = *head;
	while (d)
	{
		da = da->next;
		lnt++;
	}
	if (lnt < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	da = *head;
	aux = da->n + da->next->n;
	da->next->n = aux;
	*head = da->next;
	free(da);
}
