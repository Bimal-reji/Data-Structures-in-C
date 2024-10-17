#include<stdio.h>
int main(){
int array[10], limit, key, result, i, low, high, mid, space = 0, count = 0; 
space = 76;
printf("Enter array limit: ");
scanf("%d", &limit);
count+=2;
printf("Enter sorted array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]);
    count+= 2;
}
count+=1; 
printf("Enter search key: ");
scanf("%d", &key);
count+= 2;
low = 0, high = limit - 1, mid = (low + high) / 2;
count+= 3; 
while(low <= high){
count ++; 
   mid = (low + high) / 2;
   count++;

   if(array[mid] == key){
      printf("Element %d is found at position %d", key, (mid + 1));
      count+= 2;
      break;
   }
   if(array[mid] < key){
    low = mid + 1;
    count += 2;
   }
   else
   {
    high = mid - 1;
    count++;
   }
   mid = (low + high) / 2;
   count++;
}
   if(low > high){
     printf("Element %d is not found on the list\n", key);
count+= 2;  
}
count += 5;
printf("\nTime complexity is  %d\n", count);
printf("Space complexity is  %d\n", space);
}
