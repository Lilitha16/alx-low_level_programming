#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(c + '0');
c++;
}
putchar('\n');
return (0);
}
