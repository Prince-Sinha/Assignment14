#include<stdio.h>
int main(){

    int a[10],i,odd=0,even=0;
    printf("Enter the element of array size 10: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2)
           odd=odd+a[i];
        else
          even=even+a[i];
    }
    printf("\nSum of even element of array is %d",even);
    printf("\nSum of odd element of array is %d",odd);
    return 0;

}