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
    printf("\nSorted order of elements of an array of size 10: ");
    for(k=0;k<10;k++){
        printf("%d ",a[k]);
    }
    return 0;
}