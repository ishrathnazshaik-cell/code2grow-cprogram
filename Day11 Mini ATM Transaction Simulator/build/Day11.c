#include <stdio.h>

int main() {
    int choice, amount, balance = 10000, transactions = 0;

    printf("===== Mini ATM =====\n");

    while (transactions < 5) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: ₹%d\n", balance);
                transactions++;
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited successfully!\n");
                    transactions++;
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter withdraw amount: ");
                scanf("%d", &amount);
                if (amount > 0 && balance - amount >= 500) {
                    balance -= amount;
                    printf("Withdraw successful! Remaining: ₹%d\n", balance);
                    transactions++;
                } else {
                    printf("Invalid or insufficient balance (min balance ₹500)!\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    printf("\n===== Transaction Summary =====\n");
    printf("Total Transactions: %d\nFinal Balance: ₹%d\nSession Ended.\n", transactions, balance);

    return 0;
}