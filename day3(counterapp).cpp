#include <stdio.h>

// Function to read the operation count from file
int readOperationCount() {
    FILE *file = fopen("counter.txt", "r");
    int count = 0;
    if (file != NULL) {
        fscanf(file, "%d", &count);
        fclose(file);
    }
    return count;
}

// Function to write the updated operation count to file
void writeOperationCount(int count) {
    FILE *file = fopen("counter.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d", count);
        fclose(file);
    }
}

int main()
{
    int operation, sum, product, diff, quotient, a, b;
    int EXIT = 0;  // Replaced 'false' with 0
    int opCount = readOperationCount();  // Load previous count

    printf(" This is a calculator\n");

    do {
        printf("Enter an option from the list below\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. EXIT\n");

        scanf("%d", &operation);

        switch (operation)
        {
            case 1:
                {
                    printf("Enter the first value\n");
                    scanf("%d", &a);
                    printf("Enter the second value\n");
                    scanf("%d", &b);
                    sum = a + b;
                    printf("The sum of %d and %d is %d\n\n", a, b, sum);

                    // Increment and show operation counter
                    opCount++;
                    writeOperationCount(opCount);
                    printf("*** Counter says: You have done %d operations so far ***.\n\n", opCount);
                }
                break;

            case 2:
                {
                    printf("Enter the first value\n");
                    scanf("%d", &a);
                    printf("Enter the second value\n");
                    scanf("%d", &b);
                    diff = a - b;
                    printf("The difference of %d and %d is %d\n\n", a, b, diff);

                    opCount++;
                    writeOperationCount(opCount);
                    printf("*** Counter says: You have done %d operations so far ***.\n\n", opCount);
                }
                break;

            case 3:
                {
                    printf("Enter the first value\n");
                    scanf("%d", &a);
                    printf("Enter the second value\n");
                    scanf("%d", &b);
                    if (b == 0) {
                        printf("Error: Division by zero is not allowed.\n\n");
                    } else {
                        quotient = a / b;
                        printf("The quotient of %d and %d is %d\n\n", a, b, quotient);

                        opCount++;
                        writeOperationCount(opCount);
                        printf("*** Counter says: You have done %d operations so far ***.\n\n", opCount);
                    }
                }
                break;

            case 4:
                {
                    printf("Enter the first value\n");
                    scanf("%d", &a);
                    printf("Enter the second value\n");
                    scanf("%d", &b);
                    product = a * b;
                    printf("The product of %d and %d is %d\n\n", a, b, product);

                    opCount++;
                    writeOperationCount(opCount);
                    printf("*** Counter says: You have done %d operations so far ***.\n\n", opCount);
                }
                break;

            case 5:
                {
                    printf("You have exited the program!!\n");
                    return 0;
                }
                break;

            default:
                printf("INVALID INPUT! PLS TRY AGAIN\n");
                break;
        }

    } while (!EXIT);

    return 0;
}
