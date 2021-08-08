#include <stdio.h>
#include <string.h>

char str_sum_digits(const char *cs);

int main ()
{
    char cs[20];
    scanf(" %[^\n]s", &cs);
    printf ("Here's your string: %s\n", cs);

    
    str_sum_digits(cs);
}

char str_sum_digits(const char *cs) 
{
    int sum = 0;
    printf("Your numbers are: ");
    for (int i = 0; i < 20; i++)
    {
        if (cs[i] >= '0' && cs[i] <= '9')
        {
            sum += (cs[i] - 48);
            printf("%d  ", (cs[i] - 48));
        }
    }

    printf ("\nSum = %d", sum);
}