#include "main.h"
#include "more_numbers.h"

/**
* print_numbers - prints numbers from 0 to 14 ten times
*/

void print_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b % 10 + '0');
				/*Print the first character*/
				_putchar(b / 10 + '0');
				/*Print the second character*/
			}
		}
	} _putchar('\n');
}
