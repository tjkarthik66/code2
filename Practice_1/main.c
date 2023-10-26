#include<stdio.h>

int fac(int n)
{
    int f = 1;
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}

int main(){
    int a;
    printf("Enter any number:");
    scanf("%d", &a);
    int result = fac(a);
    printf("The factorial of %d is %d", a, result);
    return 0;
}
