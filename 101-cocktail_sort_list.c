#include "sort.h"

/**
 * insertion_sort_list - Entry point
 * @list: gkfhgdfhfgd
 *
 * Return: Always 0
 */


void cocktail_sort_list(listint_t **list)
{
	listint_t *sorted = NULL, *p = NULL, *tmp = NULL;

	if (!list || !(*list)->next || !(*list))
		return;
	p = (*list);
	if (p->next)
		sorted = p->next;
	while (sorted)
	{
		p = sorted->prev;
		tmp = p;
		while (sorted->n < p->n)
		{
			p->next = sorted->next;
			sorted->prev = p->prev;
			if (p->prev)
				p->prev->next = sorted;
			if (sorted->next)
				sorted->next->prev = p;
			sorted->next = p;
			p->prev = sorted;
			if (sorted->prev)
				p = sorted->prev;
			else
			{
				(*list) = sorted;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		if (sorted->n < tmp->n)
			sorted = tmp->next;
		else if (tmp->next)
			sorted = tmp->next->next;
		else
			sorted = tmp->next;
	}
}
