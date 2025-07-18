#include <stdio.h>

int main() {
    float bill, tipPercent, tipAmount, total;
    int people;
    
    printf("Enter total bill amount: ");
    scanf("%f", &bill);
    
    printf("Enter tip percentage: ");
    scanf("%f", &tipPercent);
    
    printf("Enter number of people: ");
    scanf("%d", &people);
    
    if (people <= 0) {
        printf("Number of people must be at least 1.\n");
        return 1;
    }
    
    tipAmount = (bill * tipPercent) / 100;
    total = bill + tipAmount;
    
    printf("\nTip amount: $%.2f\n", tipAmount);
    printf("Total bill + tip: $%.2f\n", total);
    printf("Each person pays: $%.2f\n", total / people);
    
    return 0;
}
