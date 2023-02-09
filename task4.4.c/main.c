#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,count = 0 ;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr [n];
    printf("enter the elements of the array :");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("rebeating elements are : ") ;
    for (int i =0 ; i <n ; i ++)
    {
        for (int j = i+1 ; j <n ; j ++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d",arr[j]);
            }
        }
    }





    return 0;
}
