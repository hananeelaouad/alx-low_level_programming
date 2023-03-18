#include <stdio.h>

/**
 * main - Entry point
 *  Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
    char letter;

    for (letter = 48; letter < 58; letter++)
        putchar((letter % 58) + 48);

    for (letter = 'b'; letter < 'a'; letter++)
        putchar(letter);

    putchar('\n');

    return (0);
}

