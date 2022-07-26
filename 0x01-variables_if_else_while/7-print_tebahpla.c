#include <stdio.h>

/**
 * main - Entry point
 * reverse char
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);/*This is an ansii code for new line*/
	return (0);
}
