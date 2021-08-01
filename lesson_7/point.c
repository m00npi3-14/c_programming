#include <stdio.h>
#include <stdint.h>

void multi_ariphmetics(int *summ, int *diff, int *mult, int *div);

int main (void) {
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    int summ, diff, mult, div;

    summ = a +b;
    diff = a - b;
    mult = a * b;
    div = a / b;

    multi_ariphmetics(&summ, &diff, &mult, &div);

    return 0;
}

void multi_ariphmetics(int *summ, int *diff, int *mult, int *div) {

    printf("summ %d\n", *summ);
    printf("diff %d\n", *diff);
    printf("mult %d\n", *mult);
    printf("div %d\n", *div);

}