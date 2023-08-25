#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the use of pointers and array
 * manipulation to indirectly modify the value of an array element.
 * It initializes an array, a pointer, and uses the pointer to change the
 * value of an array element. The modified array element is then printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

    /*
     * write your line of code here...
     * Remember:
     * - you are not allowed to use a
     * - you are not allowed to modify p
     * - only one statement
     * - you are not allowed to code anything else than this line of code
     */
	*(p + 5) = 98;  /* Add this line */

    /* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

