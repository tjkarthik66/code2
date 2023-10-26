#include <stdio.h>


//reverse function
int reverseandadd(int a)
{
    int b=a;
    int  reverse = 0, remainder;
    while (a != 0) {
    remainder = a % 10;
    reverse = reverse * 10 + remainder;
    a /= 10;
  }
  //int reversedsum=reverse+b;

  return reverse;
}
//palindrome check function
int palind_check(int ip, int op)
{
    if (ip!=op)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

int sum(int a, int b )
{

    return a+b;
}


int main()
{
    int inp,count=0,oup;
    printf("enter your number: ");
    scanf("%d",&inp);

   //first reverse this and add it to original

   while (1)
   {
    oup=reverseandadd(inp); //oup has the reversed number

    int sumd=sum(inp,oup);
    int sumdr=reverseandadd(sumd);

    int res=palind_check(sumd,sumdr);
    count++;

    if (res==1)
    {
        printf("%d %d",count,sumd);
        break;
    }
    else
    {
        inp=sumd;
    }

}

    return 0;
}
