#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;

	}
	putchar('\n');
	return (0);

}
