#include "main.h"


/**

 * main - check the code

 *

 * Return: Always 0

 */

int main(void)

{

        _print_rev_recursion("\nColton Walker");

        return (0);

}


1-print_rev_recursion.c

#include "main.h"


/**

 * _print_rev_recursion - reverse

 * @s: pointer to string params

 *

 */


void _print_rev_recursion(char *s)

{

        if (*s)

        {

                _print_rev_recursion(s + 1);

                _putchar(*s);

        }

}
