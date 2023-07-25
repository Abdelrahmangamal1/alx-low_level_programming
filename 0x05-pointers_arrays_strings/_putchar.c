#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @C: the character to print
 *
 * return on sucsess 1
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
