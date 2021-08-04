#include <stdio.h>
#include <stdint.h>

int print_arr(int *array, int size);
/*1. На стандартном потоке ввода задан текст, состоящий из латинских букв и цифр и оканчивающийся точкой. 
    На стандартный поток вывода вывести цифру, наиболее часто встречающуюся в тексте 
    (если таких цифр несколько, вывести любую из них).*/
char mostFrequent();

/*2. Циклически сдвинуть массив влево на 1 элемент(Первый элемент становится вторым, второй - третим и так далее. 
    Последний становится первым).*/
int array_shift(int *array, int size);

/*3.Сделать реверс массива*/
int array_reverse(int *array, int size);

/*4. Отсортировать массив по возрастанию.*/
int array_sort_minToMax(int *array, int size);



int main() {

    mostFrequent();
    

    printf("How many numbers do you want in your array?\n");
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    

    for (int i = 0; i < sz; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }


    printf("Reversed array: \n");

    array_reverse(arr, sz);
    print_arr(arr, sz);

    printf("Shifted array: \n");

    array_shift(arr, sz);
    print_arr(arr, sz);

    printf("Sorted array: \n");

    array_sort_minToMax(arr, sz);
    print_arr(arr, sz);


    return 0;
}


int array_sort_minToMax(int *array, int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
            
        }
        
    }

}


int array_reverse(int *array, int size) {

    for (int i = 0; i < size/2; i++)
    {
        int tmp = array[size - i-1];
        array[size - i - 1] = array[i];
        array[i] = tmp;
    }
}


int array_shift(int *array, int size) {
    for (int i = 0; i < size; i++)
    {
        int tmpr;
        if (i == 0)
        {
            tmpr = array[size-1];
            array[size - i] = 0;

        }
        else{
            int tmp = array[size - i-1];
            array[size - i - 1] = array[size - i];
            array[size - i] = tmp;
        }
        array[0] == tmpr;
    }
    
}


char mostFrequent(void){
    printf("Enter some text. Put a dot in the end: \n");
    char text[20];
    scanf(" %[^\n]s", text);
    char most_freq;
    int maxCount = 0;

    for (int i = 0; i < 20 && text[i]!='.'; i++)
    {
        
        int count = 0;
        for (int j = i+1; j < 20; j++)
        {
            if (text[i] >= '0' && text[i] <= '9' && text[i] == text[j]){
                count ++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            most_freq = text[i];
        }
        
    }
    printf("Most frequent number in text: %c", most_freq);
    printf("\n");
    //printf ("Here's your string: %s\n", text);
}


int print_arr(int *array, int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}