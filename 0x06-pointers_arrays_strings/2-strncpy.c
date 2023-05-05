#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: return pointer to sestination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = s1;
	
	s1 = 0;

	i = 0;

	while (src[i++])
	{
	s1++;
	}

	for (i = 0; src [i] && i < n; i++)
	{
		dest [i] = '\0';
	}
	return (dest);
}
