#include<stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("The address of a is:%x\n", &a);
    printf("The address of ptr is:%x\n", &ptr);
    printf("The address of pptr is:%x\n", &pptr);

    printf("The value of a is:%d\n", a);
    printf("The value of ptr is:%x\n", ptr);
    printf("The value of pptr is:%x\n", pptr);

    printf("The value of a is:%d\n", a);
    printf("The value of a is:%d\n", *ptr);
    printf("The value of a is:%d\n", **pptr);
    return 0;
}
