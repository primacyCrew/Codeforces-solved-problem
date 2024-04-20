#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d",&a);
    b=a/5;
    d= b+1;
    double c;
    c=a/5.0;
    if(b==c)
        printf("%d\n",b);
    else if(c>b)
        printf("%d\n",d);
    return 0;
}
