//programe in C to make a calculator using switch.

#include <stdio.h>

int main(){

    char ch;

    int a,b,d;

    printf("Enter an Operator (+, -, *, /): ");

    scanf("%c", &ch);

    printf("Enter two operands: ");

    scanf("%d %d", &a, &b);

    

    switch(ch){

        case '+':

            d = a + b;

            break;

        case '-':

            d = a - b;

            break;

        case '*':

            d = a * b;

            break;

        case '/':

            d = a / b;

            break;

    }

    printf("result = %d", d);

    return 0;

}
