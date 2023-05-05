#include "main.h"

/**
 * get_endianness - checks if machine is lil or big endian
 * Return: 0 on  big, 1 on little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
