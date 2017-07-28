#include <stdio.h>
int main()
{
   int n;
   unsigned long long int i,j,x=1,z=0,p,prime[60000];
   long long int xx[20000],yy[20000];
   prime[0]=2;
   for(i=3;i<=100000;i++){
       if(i%2!=0){
           for(j=3;j<(i/2);j=j+2){
               if(i%j==0){
                   break;
               }
           }
           if(j>=(i/2)){
               prime[x++]=i;
           }
       }
   }
   xx[0]=0;
   yy[0]=0;
   
   while(x>=i){
       for(j=0;j<z+1;j++){
           xx[i]=xx[i-1]+1;
           yy[i]=yy[i-1];
           i++;
       }
       for(j=0;j<z+1;j++){
           xx[i]=xx[i-1];
           yy[i]=yy[i-1]+1;
           i++;
       }
       for(j=0;j<z+2;j++){
           xx[i]=xx[i-1]-1;
           yy[i]=yy[i-1];
           i++;
       }
       for(j=0;j<z+2;j++){
           xx[i]=xx[i-1];
           yy[i]=yy[i-1]-1;
           i++;
       }
       z++;
   }
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
       
       scanf("%d",&p);
       if(prime[x/2]>=p){
           for(j=x/2;j<x;j++){
               if(prime[j]==p){
                   printf("%d %d\n",xx[j],yy[j]);
                   break;
               }
           }
       }else{
           for(j=0;j<x/2;j++){
               if(prime[j]==p){
                   printf("%d %d\n",xx[j],yy[j]);
                   break;
               }
           }
       }
       
       
   }
   return 0;
}
