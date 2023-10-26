#include<stdio.h>

int main(){
    int a = 100;
    int b = 200;
    printf("Value before swapping:%d\n",a);
    printf("Value before swapping:%d\n",b);
    swap(&a,&b);
    printf("Value after swapping:%d\n",a);
    printf("Value after swapping:%d\n",b);
}

void swap(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
