#include <stdio.h>
#include "main.h"
/**
 * main - prin he nameof the program
 * @argc: number of arguments
 * @argv: array pointing to arguments
 * Return:Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
