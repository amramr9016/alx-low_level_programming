#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');


	return (0);
}
