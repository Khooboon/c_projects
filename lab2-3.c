#include <stdio.h>
// หา BMI
// m/h^2
 
int main( void){
float  a; // ค่ามวล
float b ; // ค่าสูง
printf( "Enter Weight (kg) >> ");
scanf( "%f" , &a );
printf( "Enter High (cm) >> ");
scanf( "%f" , &b );
a = b/100 ;
float bmi = a/(b*b)  ; // สูตร
printf( "Weight = %.0f \nHigh = %.0f \nBMI = %.2f" ,a , b*100 ,bmi ) ;

if( bmi <= 18.5){
   printf("go get some food");
}

else if(bmi >=18.5 &&bmi <= 24.9){
        printf("normal as hell");
}

else if(bmi >=25.0 && bmi <= 29.9){
    printf("go to the gym bro");
}

else if(bmi >=30.0){
    printf("u fukin fat ");
}
}