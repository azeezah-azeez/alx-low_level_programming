#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number to be checked for
 * Return: 1 and print + if n is greater than 0
 * print 0 if n is zero
 * -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
