#include <stdio.h>
#include <stdlib.h>

int second_highest(int arr[],int length);
int main()
{
    int i,n;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr [n];
    printf("enter the elements of the array :");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int result = second_highest(arr,n);
    printf("second highest %d",result);



    return 0;
}

int second_highest(int arr[],int length)
{
    int max1 ;
    int max2 ;
    if (arr[0]>arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }

    else
    {
        max1=arr[1];
        max2=arr[0];
    }

    for (int i = 2 ; i <length ; i++)
    {
        if (arr[i]>max1)

        {
            max2 = max1;
            max1 = arr[i];
        }

        else if (arr[i]>max2 && arr[i]<max1)
        {
            max2 = arr[i];
        }
    }

    return max2 ;

}
