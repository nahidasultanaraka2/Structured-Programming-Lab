#include<stdio.h>
int main(){
                char str1[50];
                char str2[50];
                printf("Enter the string : ");
                scanf("%s",&str1);
                int i=0,L=0,j;
                while(str1[i]!='\0'){
                                i++;
                                L++;
                }



                for(j=0,i=L-1;i>=0;i--,j++){
                                str2[j]=str1[i];
                }
                str2[j]='\0';
                printf("str1 =%s\n",str1);

                printf("str2 =%s\n",str2);

                int A=strcmp(str1,str2);

                if(A==0){
                                printf("String is  palindromes");
                }
                else
                                printf("String is not palindromes");
                getch();

}
