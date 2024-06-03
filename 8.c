
#include <stdio.h>
int main() {
   int marks[10], i, n,si;


  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);


    }
printf("Enter the search item:");

 scanf("%d", &si);
 for(i=0; i < n; ++i){
                if(marks[i]==si){
          printf("Item found at index:%d\n",i+1);
return 0;


            }}
 printf("Item not found.\n");
 return 0;



         }
