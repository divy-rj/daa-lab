#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
         
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
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
    
    bubbleSort(arr, n);
   end=clock();
    taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time taken in best case bubble sort : %f",taken);
    return 0;
}
