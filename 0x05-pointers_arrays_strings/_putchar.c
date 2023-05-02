#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Rerurn: On Success 1
 * On error: -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(i, &c, 1));
}
