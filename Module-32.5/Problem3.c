#include<stdio.h>
int display(int num)
{
    if(num==0) return 1;
    display(num-1);

    printf("%d ",num);
}
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    return 0;
}
