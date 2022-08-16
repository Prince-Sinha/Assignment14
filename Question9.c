#include<stdio.h>
int main(){

    int i,j,k,temp,n;
    printf("Enter th value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the element of array size n: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
               temp=a[n-1-i];
               a[n-1-i]=a[i];
               a[i]=temp;
             
        
    }
    printf("Array element in reverse order: ");
    for(k=0;k<10;k++){
        printf("%d ",a[k]);
    }
return 0;
}