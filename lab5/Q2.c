#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int maxd(int arr[], int n)
{
int ldiff = arr[1] - arr[0];
int min = arr[0];
int i;
for(i = 1; i < n; i++)
{	
	if (arr[i] - min > ldiff)							
	ldiff = arr[i] - min;
	if (arr[i] < min)
		min = arr[i];					
}
return ldiff;
}

int main()
{
   clock_t start ,end;
    double taken;
    start=clock();
int n=55747;
int arr[n];
for (int i = 0; i < n; i++)
{
    arr[i]=rand()%1000000;
}
int ldiff=max(arr,n);
end=clock();
 taken=((double)(end-start))/CLOCKS_PER_SEC;
 printf("Maximum diffrence is %d and time taken is %f",ldiff,taken);
}
