#include "main.h"

/**
 * get_endianness - checks if machine is lil or big endian
 * Return: 0 for big and 1 for lil
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
