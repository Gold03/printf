#include "main.h"

/**
 * print_address - memory address
 * @arguments: arg's
 * Return: lenght
 */

int print_address(va_list arguments)
{
	int len = 0;
	unsigned long int variable = va_arg(arguments, unsigned long int);

	if (!variable)
	{
		return (_puts("(nil)"));
	}

	len += _puts("0x");
	return (_puts(string_to_base(variable, 16, false)) + len);
}
