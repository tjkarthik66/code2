#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f=1;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("Factorial of %d is %d", n,f);
    return 0;
}
