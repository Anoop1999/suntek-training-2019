#include <stdio.h>
#include <stdlib.h>
int recgcd(int n1,int n2);
int main()
{
    int a,b,f;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    f=recgcd(a,b);
    printf("GCD od %d and %d is %d",a,b,f);
}
int recgcd(int n1,int n2)
{
    if(n1==0)
        return n2;
    else
        return (recgcd(n2%n1,n1));
}
