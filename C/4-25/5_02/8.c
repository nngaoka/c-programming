#include <stdio.h>

int main(void) {
    int i,n;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
        printf("%4d",i*j);
        }
        printf("\n");
    }

    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
        printf("%d*%d=%d\n",i*j);
        }
    }
    return 0;
}