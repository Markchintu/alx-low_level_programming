#include "main.h"

/**
 * print_sign - Prints the size of the number
 * @n: The number onto which checking is done
 * Return: 1 for positive number , -1 for anyhting else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return(1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
