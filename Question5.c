#include<stdio.h>
int main(){

    int a[10],i,min;
    printf("Enter the element of array size 10: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        min=a[i]>a[i-1]?a[i-1]:a[i];
    }
    printf("Smallest element of array is %d",min);
    return 0;

}