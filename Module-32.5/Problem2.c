#include<stdio.h>
int digitsum(int arr[], int n)
{
    int sum=0;
    if(n==0)
        return 1;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
            {
                sum+=arr[i]%10;
            }
            digitsum(arr+1,n-1);
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = digitsum(arr,n);
    printf("%d\n",sum);
}
