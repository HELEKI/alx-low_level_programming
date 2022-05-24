#include <stdio.h>

void print_something(void) __attribute__ ((constructor));

/**
 * print_something - prints a msg before the main
 */

void print_something(void)
{

	printf("Sanity with alittle arrogance,\n"

	       "Ni kujilombotove tu!\n");
}
