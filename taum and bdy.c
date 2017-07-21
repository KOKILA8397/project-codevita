#include<stdio.h>
int main()
{
    int t,b,w,x,y,z,sum,n,n1;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d",&b,&w);
        scanf("\n%d %d %d",&x,&y,&z);
        if(x<=z&&y<=z)
        {
            sum=(b*x)+(w*y);
            printf("%d\n",sum);
        }
        else if(x<=z||y<=z&&x<y)
        {
            n1=z+x;
            sum=(b*x)+(w*n1);
            printf("%d\n",sum);
        }
        else
        {
            n1=z+y;
            sum=(b*n1)+(w*y);
            printf("%d\n",sum);
        }
        t--;
    }
    return 0;
}

