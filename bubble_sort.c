#include<stdio.h>
void main(){
    int n,i,j,temp,count=0,space=0;
    space+=6*4;
    printf("Enter the no.of elements");
    scanf("%d",&n);
    count+=2;
    int a[n];
    space+=n*4;
    printf("Enter the elements of the list\n");
    count++;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        count+=2;
    }
    count+=2;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                count+=3;
            }
            count+=2;
        }
        count+=1;
    }
    printf("The sorted list is:");
    count++;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        count+=2;
    }
    printf("\nSpace Complexity: %d\n", space);
    count+=2;
    printf("Time Complexity: %d\n", count);
}
