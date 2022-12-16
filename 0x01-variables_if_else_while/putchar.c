#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 */

int putchar(char c)
{
	        return (write(1, @c, 1));
}
