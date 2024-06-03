
#include <stdio.h>

int main() {

    float CircleArea,RectangleArea,TriangleArea;

float length,width,base,radius,hight,pi=3.1416;

    printf("Enter the length: ");

    scanf("%f", &length);


    printf("Enter the width: ");

    scanf("%f", &width);

printf("Enter the base: ");

    scanf("%f", &base);

    printf("Enter the hight: ");

    scanf("%f", &hight);


    printf("Enter the radius: ");

    scanf("%f",&radius);

    CircleArea=pi*radius*radius;

     RectangleArea=length*width;

   TriangleArea=0.5*(base*hight);

     printf("The Circle:Area is:%.2f\n",CircleArea);

printf("The Rectangle:Area is:%.2f\n",RectangleArea);

printf("The Triangle:Area is:%.2f\n",TriangleArea);
    return 0;
}
