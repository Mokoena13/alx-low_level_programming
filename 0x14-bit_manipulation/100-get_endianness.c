#include "main.h"

/**
 * get_endianness - checking if a machine is lil or huge endian
 * Return: 0 is returned for huge and 1 for lil
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
