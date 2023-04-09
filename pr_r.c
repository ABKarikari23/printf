#include "main.h"
/**
 * print_rev_string - Print reverses string.
 * @args: Arguments
 * Return: Lenght of the output
 */
int print_rev_string(va_list args)
{

	int count_fun = 0, a = 0;
	char *k = va_arg(args, char *);

	if (!k)
		k = "(null)";
	while (k[a])
	{
		a++;
	}
	while (a >= 0)
	{
		count_fun += _putchar(k[a]);
		a--;
	}
	count_fun--;
	return (count_fun);
}
