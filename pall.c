#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *da;
	(void)counter;

	da = *head;
	if (da == NULL)
		return;
	while (da)
	{
		printf("%d\n", da->n);
		da = da->next;
	}
}