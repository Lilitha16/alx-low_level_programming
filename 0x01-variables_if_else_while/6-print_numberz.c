#include <stdio.h>

int main(void)
{
    int c = 0; 

    while (c < 10)
    {
        putchar(c + '0');
        c++;
    }

    putchar('\n');
    return 0;
}
