#include<stdio.h>
int main() // program to calculate volume and surface area of a cylinder
#define PI 3.14
{
    float height,radius,volume,area;
    printf("Enter the height of the cylinder in cm :");
    scanf("%f",&height); 
    printf("\n Enter the radius of cylinder in cm:");
    scanf("%f",&radius);
volume=  PI *radius*radius*height;
area= 2 * PI * radius*(height * radius);
printf("\n Area of cylinder : %.2f square cm ", area); // round off the answer to two decimal places
printf("\n Volume of cylinder : %.2f cm cube ",volume);
return 0;
}