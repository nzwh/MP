#include <stdio.h>
#include <math.h>

int main(void) {

    int length = 10, height = 10;
    printf("\n\n");

    for(int i = 1; i <= height; i++) {

        if (i%2 == 0) 
            for(int j = 1; j <= length; j++) printf("[ %3d ]", 100-(i*10)+j);
        else    
            for(int j = length; j >= 1; j--) printf("[ %3d ]", (10-i)*10+j);
        
        printf("\n");
    }
     

    return 0;
}
