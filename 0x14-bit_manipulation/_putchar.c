#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: character to print
 * Return: On success to return 1.
 * On error to return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
