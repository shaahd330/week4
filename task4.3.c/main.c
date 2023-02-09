#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void print_unique (int arr[], int length);

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
    print_unique(arr,n);



    return 0;
}
void print_unique (int arr[], int length)
{
    for(int i=0 ; i<length; i++)
    {
        bool match_found = false ;
        for(int j =0 ; j<length ; j++)
        {
            if (arr[i]==arr[j]&&i != j)
                match_found = true ;
            if (!match_found) printf("%d\n",arr[i]);

        }
    }
}
