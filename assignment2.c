#include <stdio.h>
int main()
{
    int n,arr[50];
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        printf("List of even integers= %d\n",arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        printf("List of odd integers=%d\n",arr[i]);
    }

    return 0;

}
