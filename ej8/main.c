#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char *argv[]){
    int g = 1;
    int f = 0;
    int temp = 0;
    int n = atoi(argv[1]);
    int arraysito[n];
    for(int i = 0; i < n; i++){
        arraysito[i] = f;
        printf("%d\n", arraysito[i]);
        temp = g + f;
        g = f;
        f = temp;
    }
    return 0;
}