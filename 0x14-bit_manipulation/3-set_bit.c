#include "main.h"

/**
 * set_bit - sets a bit at a specified index to 1
 * @n: pointer to  numbr to be changed
 * @index: index of bit to be set to 1
 * Return: 1 is returned if succesfuls and  -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
