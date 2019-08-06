#include <stdio.h>
int main(void){
    // tinh sum 1~ N
    
    int i = 1;
    int sum = 0;
    int soN = 0;
    scanf ("%d", &soN);
    
    for (i; i <= soN; i++) {
        sum = sum + i;
    }
    printf ("sum of 1~soN : %d", sum);
}
