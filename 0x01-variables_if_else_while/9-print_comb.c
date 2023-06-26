#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10 || i < 'g'; i++)
{
if (i < 10)
putchar(i + '0');
else
putchar(i);
if (i < 'f')
putchar(", ");
putchar(' ');
}
putchar("$\n");
return (0);
}
