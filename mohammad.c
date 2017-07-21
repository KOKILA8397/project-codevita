#include<stdio.h>
int main()
{
    int b,a[n][2],c;
    scanf("%d %d",&b,&c);
    {
    for(int i=0;i<n;i++)
			for(int j=0;j<2;j++)
				a[i][j]=b;
    }
				int cuts[b];
				for(int i=0;i<b;i++)
		{
			cuts[i]=a[i][0]-1;				
			cuts[i]+=((a[i][1]-1)*a[i][0]);
		}
		for(int i=0;i<b;i++)
		printf("%d",&cuts[b]);
    
    return 0;
				
    
}
