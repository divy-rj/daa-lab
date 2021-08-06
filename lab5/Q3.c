#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int findGCD(int a, int b){
    if(b==0)
        return a;
    return findGCD(b, a%b);
}
void lcm_gcd(int arr[],int n) {
    int lcm = arr[0];;
    int  gcd = arr[0];
    for(int i=1; i<n; i++){
      gcd = findGCD(arr[i], lcm);
      lcm = (lcm*arr[i])/gcd;
    }
    
    printf("LCM: %d,gcd = %d", lcm,gcd);
}

int main(){
    clock_t start ,end;
    double taken;
    start=clock();
    int arr[] = {81, 14, 92, 16};
    lcm_gcd(arr,4);
    end=clock();
    taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Total time taken %f",taken);
}
