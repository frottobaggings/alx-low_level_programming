#include "main.h"
/**
 * print_numbers - prints numbers 1 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
	_putchar(num + '0');
	num++;
	}
	_putchar('\n');
}
