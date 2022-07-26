#include <stdio.h>

/**
 * main -> Entry point
 * print reults
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);/*This is an ansii caode for new line*/
	return (0);
}
