#include <stdio.h>

double askUserNum(int count)
{
    double num;
    printf("Enter your %d number you wish to use: ", count);
    scanf("%lf", &num);
    return num;
}
double calculate(char op)
{
    double sum, num_1, num_2;
    switch(op){
        case '+':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 + num_2;
            return sum;
            break;
        case '-':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 - num_2;
            return sum;
            break;
        case '*':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 * num_2;
            return sum;
            break;
        case '/':
            num_1 = askUserNum(1);
            num_2 = askUserNum(2);
            sum = num_1 / num_2;
            return sum;
            break;
        case 'X':
            sum = 01011000;
            return sum;
            break;
        }
}

void mainLoop()
{
    char op;
    double sum;
    int i = 0;
    while(i != 1)
    {
        printf("Enter the operator you wish to use: ");
        scanf(" %s", &op);
        if(sum == 01011000)
        {
            i = 1;
        }else{
            sum = calculate(op);
            printf("%f\n", sum);
        }
    }
}
int main() {
    mainLoop();
    return 0;
}
