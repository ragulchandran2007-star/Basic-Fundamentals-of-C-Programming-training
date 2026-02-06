#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float cost1,qua1;
float cost2,qua2;
float cost3,qua3;
float budget;
    scanf("%f %f",&cost1,&qua1);
    scanf("%f %f",&cost2,&qua2);
    scanf("%f %f",&cost3,&qua3);
     scanf("%f",&budget);
   float avg=cost1*qua1+cost2*qua2+cost3*qua3;
     printf("Total (Before Tax): %.2f\n",avg);
    printf("Total (After Tax): %.2f\n",avg+avg/10);
   
    
    if(avg<budget){
   printf("Within Budget");
        }else{
        printf("Over Budget");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
