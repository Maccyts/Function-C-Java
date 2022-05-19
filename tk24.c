#include <stdio.h>
int hello(int i);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",hello(n));
}
int hello(int i)
{
    if(i>1)
    {
        printf("%d ",i--);
        hello(i);
       printf("%d ",i++);
       
    }
    return i;
}
