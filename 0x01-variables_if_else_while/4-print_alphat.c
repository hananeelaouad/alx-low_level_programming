#include "stdio.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except 'q' and 'e',
 *              followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        if (c != 'e' && c != 'q')
        {
            _putchar(c);
        }
        c++;
    }
    _putchar('\n');

    return (0);
}

