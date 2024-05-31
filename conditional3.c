#include<stdio.h>
int main()
{
    int year;
    printf("enter a year :");
    scanf("%d", &year);

    if(year%400==0){
        printf("Leap year",year);
    }
    else if(year%100==0){
        printf("not leap year",year);
        }
    else if(year%4==0){
        printf("Leap year",year);
    }
    else{
        printf("Not a leap year",year);
    }
    return 0;
}
