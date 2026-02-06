#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("*");
      }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
