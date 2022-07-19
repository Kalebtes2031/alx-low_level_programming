#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all its parameters.
  * @n: number of parameters.
  * Return: sum of all parameters.
  */
int sum_them_all(const unsigned int k, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list arguments;

	va_start(arguments, k);

	if (k == 0)
		return (0);
	for (i = 0; i < k; i++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	return (sum);
}
