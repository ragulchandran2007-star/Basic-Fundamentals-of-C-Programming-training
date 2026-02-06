#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a + b > c && b + c >a && c + a > b){
         if(a==b && b==c){
            printf("Equilateral Triangle\n");
        }
         else if(a==b || b==c || c==a){
            printf("Isosceles Triangle\n");
            }
         else if(a!=b && b!=c && c!=a){
            printf("Scalene Triangle\n");
        }
    }
        else{
            printf("Not a valid triangle\n");
        }
    


    return 0;
}
