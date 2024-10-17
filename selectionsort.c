#include<stdio.h>
void main(){
    int n,i,j,temp,min,space=0,count=0;
    space+=7*4;
    printf("Enter the limit");
    scanf("%d",&n);
    count+=2;
    int a[n];
    space+=n*4;
    printf("Enter the elements of the list\n");
    count++;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count+=2;
    }
    for(i=0;i<n-1;i++){
        min = i;
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                min = j;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                count+=4;
            }
            count+=2;
        }
        count+=2;
    }
    printf("The sorted array is");
    count++;
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
        count+=2;
    }
    printf("\nSpace complexity is %d\n",space);
    count+=2;
    printf("\nTime complexity is %d\n",count);

}
