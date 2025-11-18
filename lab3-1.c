#include <stdio.h>

void main(void){
    int i=0;
    while(i < 10){  //เงื่อนไขในการทำซ้ำ
       printf("Hello World %d \n" , i);
       i++;  //เพิ่มค่าiทีละ1
    }

    int n =10;
    while(n > 0){
        //ให้นเขียนนับลงจาก 10 ถึง 0
        printf("Kello World %d \n", n);
        n--;
    }
}