#include<stdio.h>
#include<math.h>
int main() 
{
    float x,y,x1,y1,r,sqr;
    printf("Enter the coordinates of the centre(x,y):");
    scanf("%f %f",&x,&y);
    printf("Enter the radius of the circle");
    scanf("%f",&r);
    printf("Enter the coordinates of a point ( x1,y1):");
    scanf("%f %f",&x1,&y1);
    sqr=sqrt((x1-x)*(x1-x) +(y1-y)*(y1-y)); // finding square root
    if(sqr == r)
    {
        printf("The point lies on the circle", x1,y1);   // radius is equal to distance between the centre and the point 

    }
    else if(sqr >r)
    {
        printf("The point lies outside the circle",x1,y1); // radius is greater than distance between centre and the point
    }
    else if(sqr == 0)
    {
        printf("The circle is a point circle "); // distance between centre and the point is zero

    }
    else if(sqr < r)
    {
        printf("The point lies inside the circle",x1,y1); // radius is less than distance between centre and the point 
    }
    else
    printf("The circle is imaginary"); // for other cases 
    return 0;
}