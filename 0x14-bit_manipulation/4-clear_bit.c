#include "main.h"

/**
**(alx programe 0x14)
**: clear_bit - sets the value of a given bit to 0
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

