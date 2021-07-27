#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int forCtr (int board);
int whileCtr (int b);
int getNum ();
int input;

int main (int argc, char **argv) 
{
    printf("Enter your number:\n");
    getNum();
    printf("~For loop~\nPrime numbers: ");
    forCtr(input);
    printf("~While loop~\nPrime numbers: ");
    whileCtr(input);
   
    return 0;
}

int getNum () 
{
    int num;
    scanf ("%d", &num);
    printf("You entered %d \n", num);
    input = num;
}

int forCtr (int board) 
{
    for (int i = 2; i <= board; i++)
    {
        bool isPrime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    printf ("\n");
}

int whileCtr (int b)
{
    int ctr = 2;
    while (ctr <= b)
    {
        int j = 2;
        bool isPrime = true;
        while (j<ctr)
        {
           
            if (ctr % j ==0)
            {
                isPrime = false;
                break;
            }
            j++;
        }
        if (isPrime)
        {
            printf("%d ", ctr);
        }
        ctr ++;
        
    }
    printf("\n");
    
}