#include<stdio.h>
int main(){

    int a[10],i,max;
    printf("Enter the element of array size 10: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        if(a[i]>a[i-1])
            max=a[i];
        else
           max=a[i-1];
    }
    printf("Greatest element of array is %d",max);
    return 0;

}