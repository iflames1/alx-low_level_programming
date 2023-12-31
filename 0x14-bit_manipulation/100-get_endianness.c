#include "main.h"

/**
 *get_endianness - function that checks the endianness.
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *)&num;

	/* If the first byte (lowest address) is 1, it's little endian. */
	/* If the last byte (highest address) is 1, it's big endian. */
	if (*endian_check == 1)
		return (1);
	else
		return (0);
}
