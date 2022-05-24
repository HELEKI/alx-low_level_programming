#include <stdio.h>

void print_something(void) __attribute__ ((constructor));

/**
 *print_something - prints a msg before the main
 */

void print_something(void)
{
	printf("Hey! You see, you ought to know,\n"

	       "I am Heliakim!\n");
}
