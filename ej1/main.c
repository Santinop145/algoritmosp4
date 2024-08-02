#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arraysito[10];
    
    for(int i = 1; i <= 10; i++){
        arraysito[i] = i;
        printf("%d\n", arraysito[i]);
    }
    return 0;
}