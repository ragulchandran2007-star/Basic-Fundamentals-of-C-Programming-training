#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
bool isThree(int n){
    int i,count = 0;

    for(i=1;i<=n;i++){
        if (n%i==0){
        count++;
        }
    }

    if(count==3){
        return true;
    } else{
        return false;
    }
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
