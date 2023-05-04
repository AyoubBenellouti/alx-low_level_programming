#include "main.h"
#include <unistd.h>


/**
 *i love alx programe  :(putchar file)  _putchar - writes the character c to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

