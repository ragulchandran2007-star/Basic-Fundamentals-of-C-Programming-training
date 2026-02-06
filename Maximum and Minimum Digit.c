#include <stdio.h>

int main(){
    int num, digit;
    int max = 0;   
    int min = 9;   
    scanf("%d", &num);
    if (num < 0) num = -num;
    if (num == 0){
        max = min = 0;
    } else{
        while(num>0){
            digit=num % 10; 
            if (digit>max){
              max = digit;   
            }
            if (digit<min){
                min=digit; 
            } 
            num = num / 10; 
        }
    }
printf("%d ", max);
printf("%d", min);
  return 0;
}
