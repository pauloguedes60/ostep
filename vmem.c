#include <stdio.h>
#include <stdlib.h>

int a;
int b=2;

int main(int argc, char *argv[]){

    printf("location of code                        : %p\n", (void *) main);
    printf("location of global variables            : %p\n", (void *) &a);
    printf("location of initialized global variables: %p\n", (void *) &b);

    printf("location of heap                        : %p\n", (void *) malloc(1));
    int x = 3;
    printf("location of stack                       : %p\n", (void *) &x);

    return x;
}
