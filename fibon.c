#include<stdio.h>
int fibon1()
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fib1(n-1)+fib1(n-2);
}
int fibon2()
{
    arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main()
{
    printf("%ld  ", fibon1(40));
    printf("%ld  ", fibon2(40));
}
