#include<stdio.h>

void shortarray(int *, int );


int main()
{
    int n ;

    printf("enter limit of array : >> ");
    scanf("%d",&n);

    int arr[n];


    for (int  i = 0; i < n; i++)
    {
    printf("enter the value if array arr[%d]",i);
     scanf("%d",&arr[i]);
    }
    
    shortarray(arr, n);

    printf("the values of array is : >> ");
    for (int i = 0; i < n; i++)
    {
        printf("[%d],",arr[i]);
    }



    return 0;
}

void shortarray(int arr[] , int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 ; j++)
        {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    

}
