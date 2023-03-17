#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except q and e.
 *              followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
