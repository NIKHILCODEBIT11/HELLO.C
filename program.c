#include<stdio.h>
//area of square
int main(){
    int radius;
    printf("enter radius");
    scanf("%d",radius);
    printf("so radius is %d \n",radius);
    int area = 3.14*radius*radius;
    printf("area of circle is %d",area);
    return 0;
}