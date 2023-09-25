#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the NEW element
 *
 * Return: pointer to the NEW node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NEW;
	listint_t *temp = *head;

	NEW = malloc(sizeof(listint_t));
	if (!NEW)
		return (NULL);

	NEW->n = n;
	NEW->next = NULL;

	if (*head == NULL)
	{
		*head = NEW;
		return (NEW);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = NEW;

	return (NEW);
}

