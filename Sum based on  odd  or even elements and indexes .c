#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int evenElement=0;
    int oddElement =0;
    int evenIndex  =0;
    int oddIndex =0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenElement += arr[i];
        }
        else{
            oddElement += arr[i];
           
        }
        if(i%2==0){
            evenIndex+= arr[i];            
        }
        else{
            oddIndex+= arr[i];            
        }
    }
    printf("%d %d %d %d",evenElement,oddElement,evenIndex,oddIndex);
    
    return 0;
}
