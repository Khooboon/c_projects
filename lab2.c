#include <stdio.h>

int main(void){
    int age=16;
    char name[50]="Khooboon Panachaiphatsakorn";
    char gender = 'F';
    float gpa=3.56;

    printf("My name %s", name);  //แสดงข้อความ String
    printf("I'm %d \n", age);   //เลชจำนวนเต็ม %d Decimal
    printf("Grade %f \n" , gpa);   //แสดงเลขทศนิยม %f float
    printf("Gender %c \n" ,gender);    //แสดง %c = char
    return 0;
}

////     %f float, %c = char