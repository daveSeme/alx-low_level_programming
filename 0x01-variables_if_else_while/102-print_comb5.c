#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * numbers should range from 0 to 99
 *  numbers should be printed with two digits-1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * Return: 0 (success)
 */
int main(void)
{

	int i, j;

	for (i = 0; i < 100; i++)

	{
		for (j = 0; j < 100; j++)

		{
			if (i < j)

			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)

				{

					putchar(',');
					putchar(' ');

				}

			}

		}

	}

	putchar('\n');
	return (0);
}
