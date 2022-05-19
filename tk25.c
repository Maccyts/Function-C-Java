#include <stdio.h>

int lucas(int n)
{
    if(n==0)
        return 2;
    else if(n==1)
        return 1;
    else
        return(lucas(n-1)+lucas(n-2));
}
int main()
{
    int n,a;
    scanf("%d",&n);
    lucas(n);
    a=lucas(n);
    printf("%d",a);
    return 0;
}


