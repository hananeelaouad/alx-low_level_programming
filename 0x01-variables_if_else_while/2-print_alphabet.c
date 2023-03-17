#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main() {
    char c;
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; ++i) {
        c = alphabet[i];
        putchar(c);
    }
    putchar('\n');
    return 0;
}

