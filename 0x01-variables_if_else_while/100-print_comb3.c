<<<<<<< HEAD
nclude <stdio.h>



/**
 *
 *   * main - Prints combination of numbers
 *
 *     *
 *
 *       * Return: Always (Success)
 *
 *         */

int main(void)

{

		int c, i;
		for (c = '0'; c <= '9'; c++)for (c = '0'; c <= '9'; c++)

				{
					for (i = '0'; i <= '9'; i++)
					{
						if (c < i)
						{
							putchar(c);
							putchar(i);
							
				   if (c != '8' || (c == '8' && i != '9'))
				   {
					   putchar(',');
					   putchar(' ');
				   }
						}
					}
				}
		putchar('\n');



			return (0);

=======
#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
>>>>>>> 64dd316d338658066da98e0ab8c69ce2ad70cd15
}
