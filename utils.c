#include "main.h"

/**
 * print_number - print integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * count_digits - digits count
 * @i: integer
 * Return: int
 */
int count_digits(int i)
{
	int count = 0;
	int num;

	if (i < 0)
		num = i * -1;
	else
		num = i;

	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void print_rev_recursion(char *s)
{
	if (*s)
	{
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
