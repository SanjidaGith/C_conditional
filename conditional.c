#include<stdio.h>
int main()
{
    int number1,number2;
    printf("number1=");
    scanf("%d", &number1);
    printf("number2=");
    scanf("%d", &number2);

    if(number1==number2){
        printf("number1 and number2 are equal");
    }
    else{
        printf("number1 and number2 are not equal");
    }
    return 0;

}
