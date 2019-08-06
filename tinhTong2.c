#include <stdio.h>
int main(void){
    // tinh sum 1~ N
    
    int sum = 0;
    int soN = 0;
    scanf ("%d", &soN);
    
    if (soN % 2 == 0) {
        sum = soN * soN/2 + soN/2;
    }
    else {
        sum = (soN - 1) * (soN - 1)/2 + (soN - 1)/2 + soN;
    }
    printf ("sum of 1~soN : %d", sum);
    
}
