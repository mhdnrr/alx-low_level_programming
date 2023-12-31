#include "lists.h"

/**
 * add_nodeint - adds a NEW node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that NEW node
 *
 * Return: pointer to the NEW node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NEW;

	NEW = malloc(sizeof(listint_t));
	if (!NEW)
		return (NULL);

	NEW->n = n;
	NEW->next = *head;
	*head = NEW;

	return (NEW);
}

