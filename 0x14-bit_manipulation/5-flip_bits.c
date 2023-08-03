#include "main.h"

/**
 * flip_bits - counts numbr of bits to be  changed
 * getting from one numbr to another
 * @n: the 1st numbr
 * @m: the 2nd numbr
 * Return: numbr of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
