#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int arraysito[6];
    
    for(int i = 6; i >= 1; i--){
        arraysito[i] = i;
        printf("%d\n", arraysito[i]);
    }
    return 0;
}