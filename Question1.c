#include<stdio.h>
int main(){

    int a[10],i,sum=0;
    printf("Enter the element of array size 10: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of all array element is %d",sum);
    return 0;

}