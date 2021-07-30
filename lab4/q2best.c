#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 

    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{   clock_t start,end;
    double taken;
  start=clock();
    int n=5000;
        int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=i;
    }
    
    selectionSort(arr, n);
   end=clock();
    taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time taken in best case in selection sort : %f",taken);
    return 0;
}