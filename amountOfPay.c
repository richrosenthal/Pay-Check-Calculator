// Author Richard Rosenthal
// Date 7-6-19
// A simple tax program to figure out income taxes based on the following facts
// Basic pay rate = $12.00/hr
// Overtime (in excess of 40 hours) = time and a half
// Tax rate: 15% of the first $300, 20% of the next $150, 25% of the rest


#include <stdio.h>
#include <stdlib.h>

int main(){

float hourlypay = 12.00;
float overtime = hourlypay * 1.5;
float hoursworked = 0.0;
float netPay = 0.0;
float grossPay;

float tax15percent = 300 * 0.15;
float tax20percent = 150 * 0.20;
float tax25percent = 0.25;
float taxesPaid;

printf("Please enter the amount of hours you worked.\n");
scanf("%g", &hoursworked);


if (hoursworked <= 40){
    grossPay= hourlypay * hoursworked;
    taxesPaid = (tax15percent)+(tax20percent)+(30*tax25percent);
    netPay = grossPay - taxesPaid;
    printf("Your gross pay is $%g\n",grossPay);
    printf("Your net pay is $%g\n", netPay);
    printf("You paid $%g in taxes. \n",taxesPaid);
}
else
{
    grossPay = ((hoursworked - 40)* overtime)+(hourlypay * 40);
    taxesPaid = (tax15percent)+(tax20percent)+ ((grossPay - 450)* tax25percent);
    netPay = grossPay - taxesPaid; 
    printf("Your gross pay is $%g\n", grossPay);
    printf("Your net pay is $%g\n", netPay);
    printf("You paid $%g in taxes. \n", taxesPaid);
}


return 0;

    
}