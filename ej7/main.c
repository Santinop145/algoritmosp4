#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(void){
    int arraysito[40];
    
    for(int i = 40; i >= 1; i--){
        if(i % 2 == 0){
        arraysito[i] = i;
        printf("%d\n", arraysito[i]);
        }
    }
    return 0;
}