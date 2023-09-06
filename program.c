#include<stdio.h>
//area of square
int main(){
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    printf("radius is %f \n",radius);
    float area=3.14*radius*radius;
    printf("area of circle is %f",area);
    return 0;
}