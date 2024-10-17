#include<stdio.h>
void main(){
    int n,i,j,temp,a[20],count=0;
    printf("Enter the limit");
    scanf("%d",&n);
    count+=2;
    printf("Enter the array elements\n");
    count++;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count+=2;
    }
    count+=2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                count+=3;
            }
            count+=2;
        }
        count+=1;
    }
    printf("The sorted list is:\n");
    count++;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        count+=2;
    }
    printf("\nSpace Complexity: %d\n", (20+(10*4)));
    printf("Time Complexity: %d\n", count);
}
