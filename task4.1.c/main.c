#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,order,temp ;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr [n];
    printf("enter the elements of the array :");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("for ascending order enter 0 and for descending order enter 1:");
    scanf("%d",&order);
    if(order==0)
    {

        for(i=0 ; i<n ; i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    else
    {
         for(i=0 ; i<n ; i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    printf("Array elemnts :");
    for(i=0 ; i<n ; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
