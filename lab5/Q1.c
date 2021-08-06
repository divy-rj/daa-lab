#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int largestsum(int arr[],int n){
    int lsun=-765667845;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(lsun<sum)
        lsun=sum;
        if(sum<0)
            sum=0;
        
    }
    

return lsun;

}
int main(){
    clock_t start ,end;
    double taken;
    start=clock();
int n=55747;
int arr[n];
for (int i = 0; i < n; i++)
{
    arr[i]=rand()%1000000;
}
int lsum=largestsum(arr,n);
end=clock();
 taken=((double)(end-start))/CLOCKS_PER_SEC;
 printf("Maximum sum is %d and time taken is %f",lsum,taken);
}