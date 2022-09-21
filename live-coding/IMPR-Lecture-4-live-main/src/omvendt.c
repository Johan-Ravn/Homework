#include <stdio.h> 

/*

Expected output
0
1      *
2     **
3    ***
4   ****
5  *****
6 ******
7*******

 */

int main(void){
    for (int i = 0; i < 8; i++){
        for (int n = 8; n > i; n--){
            printf(" ");
        }
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}