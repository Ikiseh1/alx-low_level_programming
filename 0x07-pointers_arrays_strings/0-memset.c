#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `c`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = c;
		count++;
	}

	return (s);
}
