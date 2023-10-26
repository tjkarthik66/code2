#include<stdio.h>
#include<stdint.h>

int main(){
    char a;
    long double *b,*c;
    uint16_t p;
    uint16_t *x;
    b=NULL;c=NULL;
    char *ptr;

    a = 'G';
    p = 102;
    x = &p;
     ptr = &a;
    printf("Value of variable 'a': %c\n",a);
    printf("Address of variable 'a': %p\n",&a);
    printf("Size of variable 'a': %lu\n",sizeof(a));
    printf("Size of variable 'ptr: %d\n",sizeof(ptr));
    printf("Size of variable *ptr': %d\n",sizeof(*ptr));
    printf("Value of variable *X': %d\n",sizeof(x));
    printf("Size of variable P': %d\n",sizeof(p));
    printf("Address of variable ptr': %p\n",&ptr);
    return 0;
}
