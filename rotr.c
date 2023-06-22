#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *rotr;

	rotr = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (rotr->next)
	{
		rotr = rotr->next;
	}
	rotr->next = *head;
	rotr->prev->next = NULL;
	rotr->prev = NULL;
	(*head)->prev = rotr;
	(*head) = rotr;
}
