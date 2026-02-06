#include <stdio.h>

int main() {
    // your code goes here
int n, r= 0,remain;
scanf("%d", &n);
    while (n != 0){
        remain= n % 10;       
        r= r* 10 + remain;
        n /= 10;                   
    }
    printf("%d\n",r);
}

