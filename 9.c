#include<stdio.h>
int main(){
                int i,j,n,t;
                printf("Enter number of element:");
                scanf("%d",&n);
int a[n];
                for(i=0;i<n;i++){
                     printf("Enter element%d:",i+1);
                                scanf("%d",&a[i]);
                }
                for(i=0;i<n;i++){
                             for(j=i+1;j<n;j++) {
                                if(a[i]>a[j]){
                                                t=a[i];
                                                a[i]=a[j];
                                                a[j]=t;
                                }
                             }
                }
                printf("Sorted array :");
                for(i=0;i<n;i++){
                                printf("%d",a[i]);
                }
                return 0;

}

