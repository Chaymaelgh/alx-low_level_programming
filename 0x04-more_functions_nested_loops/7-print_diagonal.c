#include "main.h"

/**
 * print_diagnol - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' shoulde be printed
 * Return: a diagolal
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
