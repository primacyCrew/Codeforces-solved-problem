#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a, b, x;
        scanf("%d%d",&a, &b);
        x=a+b;
        printf("%d\n", x);
    }
    return 0;
}
