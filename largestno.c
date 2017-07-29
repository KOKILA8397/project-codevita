#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b>c)
    {
        printf("b is the largest number");
    }
   if(a<c&&b<c)
    {
        printf("c is the largest number");
    }
    else
    {
        printf("a is the largest number");
    }
    return 0;
}
