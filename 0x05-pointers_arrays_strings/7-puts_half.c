#include "main.h"

/**
 * puts_half - prints half of a string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: string to print the characters from
 */
void puts_half(char *str)
{
	int length, n, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}

	}
	_putchar('\n');
}
