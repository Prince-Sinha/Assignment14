#include<stdio.h>
int main(){

    int a[10],i,j,k,temp;
    printf("\nEnter the element of array size 10: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
             }
        }
    }
    printf("\nSecond largest elements of an array is %d",a[8]);
return 0;
}