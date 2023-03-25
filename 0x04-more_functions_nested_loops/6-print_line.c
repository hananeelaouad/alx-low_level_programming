#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the number of times to print '_'
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
