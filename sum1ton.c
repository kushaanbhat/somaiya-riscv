#include <stdio.h>

int main(){
    int i,  sum=0 , n=100;
    for(i=0, i<=n; i++){
        sum = sum  + i;
    }
    printf("Sum of numbers 0 to %d is %d ", n, sum);
    return 0;
}