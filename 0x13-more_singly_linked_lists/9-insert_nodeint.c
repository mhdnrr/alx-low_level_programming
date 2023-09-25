#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a NEW node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the NEW node is added
 * @n: data to insert in the NEW node
 *
 * Return: pointer to the NEW node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *NEW;
	listint_t *temp = *head;

	NEW = malloc(sizeof(listint_t));
	if (!NEW || !head)
		return (NULL);

	NEW->n = n;
	NEW->next = NULL;

	if (idx == 0)
	{
		NEW->next = *head;
		*head = NEW;
		return (NEW);
	}

	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			NEW->next = temp->next;
			temp->next = NEW;
			return (NEW);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

