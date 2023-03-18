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
        putchar(letter);

    for (letter = 97; letter < 103; letter++)
        putchar(letter);

    putchar('\n');

    return (0);
}

