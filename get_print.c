#include "main.h"

/**
 * get_print - get functions by flags
 * @c: flag
 * Return: function
 */

int (*get_print(char c))(va_list)
{

	ph handlers[] = {
			{'c', print_char},
			{'d', print_int},
			{'s', print_string},
			{'i', print_int},
			{'o', print_octal},
			{'u', print_unsigned},
			{'p', print_address},
			{'x', print_hexa},
			{'r', print_reverse_string},
			{'X', print_hexa_in_uppercase},
			{'b', print_binary},
			{'%', print_percent},
	};
	int i = 0;

	while (handlers[i].c)
	{
		if (handlers[i].c == c)
		{
			return (handlers[i].f);
		}
		i++;
	}

	return (NULL);
}
