#include "main.h"

/**
 *  * print_times_table - prints the n times table, starting with 0
 *   * @n: the number of times to print the table, up to 15
 *    */
void print_times_table(int n)
{
	    int i, j;

	        if (n < 0 || n > 15)
			        return;

		    for (i = 0; i <= n; i++) {
			            for (j = 0; j <= n; j++) {
					                if (j == 0)
								                _putchar('0');
							            else
									                    _putchar(',');
								                _putchar(' ');
										            if (i * j < 10)
												                    _putchar(' ');
											                if (i * j < 100)
														                _putchar(' ');
													            if (i * j >= 100)
															                    _putchar(i * j / 100 + '0');
														                if (i * j >= 10)
																	                _putchar(i * j / 10 % 10 + '0');
																            _putchar(i * j % 10 + '0');
																	            }
				            _putchar('\n');
					        }
}

