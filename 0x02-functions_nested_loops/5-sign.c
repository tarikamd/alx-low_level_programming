#include "main.h"

/**
 * print_sign - check the code.
 * @n: integer operand
 * Return: Always int.
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
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	return (-1);
}
