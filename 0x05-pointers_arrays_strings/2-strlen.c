#include "main.h"

/**
 *  _strlen - returns the string length
 *  @s: string whose length is to printed
 *  Return: length of the string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char p1 = s[0];

	while (p1 != '\0')
	{
		sum++;
		p1 = s[i++];
	}
	return (sum);
}
