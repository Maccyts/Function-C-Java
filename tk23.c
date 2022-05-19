#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i,f=1;
    int x=sqrt(n);
    for(i=2;i<=x;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int pali(int n)
{
    int f=1,s=0,t=n;
    while(n)
    {
        s=s*10+n%10;
        n=n/10;
    }
    f=t==s?1:0;
    return f;
}
int main()
{
    int n,l,h;
    scanf("%d",&n);
    l=n-1;h=n+1;
    while(1)
    {
        if(pali(l)&&prime(l))
        {
            printf("%d",l);
            break;
        }
        else
            l--;
        if(pali(h)&&prime(h))
        {
            printf("%d",h);
            break;
        }
        else
            h++;
    }

}
    
