// Online C compiler to run C program online
#include <stdio.h>

double toC(double temp, double temp2){
    return temp - temp2;
}

double toF(double temp, double temp2){
    return temp + temp2;
}


int main() {
    int choice;
    double result;
    double temp2 = 273;
    double temp;
    
    printf("Temperature converter\n");
    printf("Select unit to convert to\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    scanf("%d", &choice);
    
    printf("Input temperature\n");
    scanf("%lf",&temp);
    
    switch(choice){
        case 1:
        result = toC(temp, temp2);
        printf("%.2lf fahrenheit to Celcius = %.2lf", temp, result);
        break;
        
        case 2:
        result = toF(temp, temp2);
        printf("%.2lf celsius to Fahrenheit = %.2lf", temp, result);
        break;
        
        default:
        printf("invalid input\n");
    }
    

    return 0;
}