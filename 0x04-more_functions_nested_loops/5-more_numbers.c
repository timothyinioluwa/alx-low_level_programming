#include "main.h"

/**
 Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

Prototype: void more_numbers(void);
You can only use _putchar three times in your code
 */
void more_numbers(void)
{
	int i;
	for (i=0;i<=14;i++)
	{      
		_putchar(i*10);
	}
	_putchar('\n');
}
