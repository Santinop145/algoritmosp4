#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int arraysito[5];
    int menor = INT_MAX;
    int mayor = INT_MIN;
    
    for(int i = 0; i < 5; i++){
        int random = rand() % 101;
        arraysito[i] = random;
        menor = random < menor ? random : menor;
        mayor = random > mayor ? random : mayor;
        printf("%d\n", arraysito[i]);
    }
    printf("Mayor: %d\nMenor: %d\n", mayor, menor);
    return 0;
}
