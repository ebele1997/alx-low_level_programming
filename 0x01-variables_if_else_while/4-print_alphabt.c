#include <stdio.h>

/**
 * main - print that alphabets in lowercase followed by a new line, except q and e
 * Return: Always o
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	
	putchar('\n');
	
	return (0);
}
