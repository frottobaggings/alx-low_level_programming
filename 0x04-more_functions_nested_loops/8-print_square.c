#include "main.h"
/**
 * print_square - check the code
 * @size: parameter.
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)

		{
		int j = 0;
			while (j < size)
			{
			_putchar('#');
			j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
