#include<stdio.h>
int main(){

    int i,j,k,temp,n;
    printf("Enter th value of n: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\nEnter the element of array size n: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The element of an another array is: ");
    for(j=0;j<n;j++){
        temp=a[j];
        b[j]=temp;
        printf("%d ",b[j]);
    }

    return 0;
}