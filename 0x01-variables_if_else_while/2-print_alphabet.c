#include "holberton.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char c = 'a';

    /* loop through alphabet until 'z' */
    while (c <= 'z')
    {
        /* print current character using putchar() */
        _putchar(c);
        c++;
    }

    /* print newline character using putchar() */
    _putchar('\n');

    return (0);
}

