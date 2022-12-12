#include<stdio.h>
int display(int num)
{
    if(num<=0) return;
    else
    {
        printf("%d ",num);
        display(num-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    return 0;
}
