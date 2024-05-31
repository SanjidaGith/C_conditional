#include<stdio.h>
int main()
{
    int year;
    printf("Enter age : ");
    scanf("%d",&year);

    if(year>=18){
        printf("Congratulation!You are eligible for casting your vote",year);
    }
    else{
        printf("sorry!You are not eligible for casting your vote",year);
    }
    return 0;
}
