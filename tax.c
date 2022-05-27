#include<stdio.h>

int main(){
    float amount;
    float tax=0;

    printf("Enter the amount of income : \n");
    scanf("%f", &amount);

    if (amount<=150000)
    {
        tax=0;
    }else if (amount>150000 &&amount<=300000)
    {
        tax= amount*0.1;
    }else if (amount>300000 && amount<=500000)
    {
        tax = amount*0.2;
    }else{
        tax =amount*0.3;
    }
    if (tax == 0)
    {
        printf("\n No tax. \n");
    }else{
        printf("\nThe tax = $ %0.2f\n",tax);
    }
    
    return 0;
    
}