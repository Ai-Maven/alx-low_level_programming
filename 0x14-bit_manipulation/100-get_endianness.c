#include "main.h"

/**
 * get_endianness - it checks if a machn is little or big end
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

