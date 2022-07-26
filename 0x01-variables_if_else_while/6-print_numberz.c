#include <stdio.h>

/**
 * main - Entry point
 * print char values
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);/*This is an ansii code new line*/
	return (0);
}
