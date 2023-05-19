# include <stdio.h>
#include <math.h>
int main(){
    float r,h,pi=3.14,area,volume;
    printf("Enter the radius:");
    scanf("%f",&r);
    area = pi*pow(r,2);
    printf("The area of circle is %f\n",area);
    printf("Enter the height:");
    scanf("%f",&h);
    volume = pi*pow(r,2)*h;
    printf("The volume of cylinder is %f",volume);
    return 0;
}