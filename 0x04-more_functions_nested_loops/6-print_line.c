#include "main.h"

/**
 * print_line - print under_score line on the terminal
 * @n: number of times the underscore will be printed
 * Return: Void
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
