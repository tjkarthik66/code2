#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f=fopen("C:\\Users\\HOME\\Documents\\Code Blocks\\Test1.txt","w");
    if(f==NULL)
        printf("Error!");
    else{
        fprintf(f,"%s\n","This is the first program in file handling");
        fputc('A',f);
        fputs("\nDemonstration of fputs function",f);
    }
    fclose(f);
 return 0;
}
