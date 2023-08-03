#include "main.h"

/**
 * clear_bit - sets value of specified bit to 0
 * @n: pointer to numbr to be changed
 * @index: index of the bit to be cleared
 * Return: 1 is returned if successfull and -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
