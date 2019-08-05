#include <stdio.h>

int main(void){



int mang[8] = {7,9,34,18,1,23,3,6} ;

int max1=0 ;

int max2=0 ;

int max3=0 ;


for (int i=0 ;i <8; i++) {

    if ( mang [i] > max1 ) {

        max3 = max2 ;

        max2 = max1 ;

        max1 = mang[i];

    }
 else if(mang[i]> max2){

        max3=max2 ;

        max2 = mang[i];

    }
 else if(mang[i]>max3){

        max3=mang[i];
    
    }

}
    
printf ("số lớn thứ 2  là %d\n",max2);

printf("số lớn thứ 3 là %d\n",max3);
   


}
