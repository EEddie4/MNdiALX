#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of variable arguments to sum
 *
 * Return: (sum of the variable arguments)
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
