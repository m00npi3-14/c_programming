#include <stdio.h>
#include <stdlib.h>

int from_f1_to_f2 (void *element, const char *fname1, const char *fname2, size_t size);

int main (int argc, const char **argv[]) 
{
    FILE * file_1;
    static char file1_name[100];
    FILE * file_2;
    static char file2_name[100];

    size_t bytesTransf;

    static char element[100000];

    printf("Enter source and destination files:\n");
    scanf("%s %s", file1_name, file2_name);
    
    file_1 = fopen(file1_name, "rb");
    file_2 = fopen(file2_name, "wb");

    fseek (file_1, 0, SEEK_END);
    bytesTransf = ftell (file_1);
    rewind (file_1);

    if (file_1 == NULL )
    {
        printf("Error! %s doesn't exist\n", file1_name);
        return -1;
    }

    fclose(file_1);
    fclose(file_2);


    from_f1_to_f2 (element, file1_name, file2_name, bytesTransf);

    return 0;
}

int from_f1_to_f2 (void *element, const char *fname1, const char *fname2, size_t size)
{
    FILE *f1;
    FILE *f2;
    size_t sz;
    
    f1 = fopen(fname1, "rb");
    sz = fread(element, size, 1, f1);

    f2 = fopen(fname2, "wb");
    sz = fwrite(element, size, 1, f2);

    printf ("Copy done. Transfered %lu bytes.\n",size);

    fclose(f1);
    fclose(f2);


    return 0;
}



    /* Если бы это был текстовый файл:
    while (!feof(file_1))
    {
        fprintf(file_2, "%c", fgetc(file_1));
    }*/

