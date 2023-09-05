#include "lists.h"
/**
*check_cycle - function declaration
*@list: list pointer
*Return: 0 always SUCCESS
*/
int check_cycle(listint_t *list)
{
	listint_t *first, *faster;

	if (list == NULL || list->next == NULL)
		return (0);

	first = list->next;
	faster = list->next->next;
	while (faster && first && faster->next)
	{
		if (first == faster)
			return (1);
		first = first->next;
		faster = faster->next->next;
	}
	return (0);
}
