#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i , num[5]={100,200,300,400,500};
    i = 0;
    while(i<=4)
    {
        printf("num[%d]=%d \n",i,num[i]);
        i++;
    }
    system("pause");
}