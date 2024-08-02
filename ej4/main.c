#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int arraysito[100];
    
    for(int i = 0; i < 100; i++){
        int random = rand() % 101;
        arraysito[i] = random;
        printf("%d\n", arraysito[i]);
        suma += random;
    }
    printf("%.2f\n", suma / 100)
    return 0;
}