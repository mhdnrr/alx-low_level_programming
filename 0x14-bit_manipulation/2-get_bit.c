#include "main.h"

/**
 * get_bit - returns the value
 * @n: number
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
