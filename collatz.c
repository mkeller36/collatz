#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(void){
    uint32_t num = 2;
    while(true){
        uint32_t colNum = num;
        while(colNum > 1){
            if((colNum%2)==0){
                colNum /= 2;
            }
            else{
                colNum = (colNum*3) + 1;
            }
        }
        printf("%d is Collatz compliant. \n", num );
        num++;
    }
    printf("%d is NOT Collatz compliant. \n");
}