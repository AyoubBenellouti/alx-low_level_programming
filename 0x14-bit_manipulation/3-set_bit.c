#include "main.h"

/**
**alx programe;
**A set_bit - sets a bit at a given index to 1
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

