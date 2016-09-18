#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float meal_cost;
    scanf("%f",&meal_cost); 
    int tip;
    scanf("%d",&tip); 
    int tax;
    scanf("%d",&tax); 
    printf("The total meal cost is %d dollars.",(int)round(meal_cost*(1+(float)(tip+tax)/100)));
    return 0;
}
