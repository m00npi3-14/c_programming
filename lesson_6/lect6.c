#include <stdio.h>

int main() 
{
    char a;

    while ((a = getchar()) != '\n')
    {
        if (a >= 'a' && a <= 'z')
            putchar ('|');
        else if (a >= 'A' && a <= 'Z')
            putchar ('u');
        else if (a >= '0' && a <= '9')
            putchar ('d');
        else if (a == 32)
            putchar (0);
        else
            putchar('*');
    }

    
    return 0;
}