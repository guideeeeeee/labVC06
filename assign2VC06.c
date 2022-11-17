#include<stdio.h>
#include <stdlib.h>
#include<conio.h>

void main (){
    int i,x[10];
    int k=0,j=0;
    int odd[5]={0,0,0,0,0},even[5]={0,0,0,0,0};
    for (i=0;i<10;i++){
        printf("input %d number:",i+1);
        scanf("%d",&x[i]);
    }
    for (i=0;i<10;i++){
        if (x[i]%2==0){
            even[j]=x[i];
            j++;
            }
        else{
            odd[k]=x[i];
            k++;
            }
    }
    printf("\neven:");
    for (i=0;i<5;i++){
        printf("%d ",even[i]);
    }
    printf("\nodd:");
    for (i=0;i<5;i++){
        printf("%d ",odd[i]);
    }
}