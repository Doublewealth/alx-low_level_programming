#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
