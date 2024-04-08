#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x==0 || x == 2){
        printf("no\n");
    }
    else if(x%2 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
