#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int arraysito[n];
    
    for(int i = 1; i <= n; i++){
        arraysito[i] = i;
        printf("%d\n", arraysito[i]);
    }
    return 0;
}