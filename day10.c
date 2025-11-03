#include <stdio.h>

int main() {
    int totalCustomers, items, code, qty;
    float price, bill, finalBill;
    float totalSales = 0;
    int totalItems = 0;

    printf("===== Smart Canteen Billing System =====\n");
    printf("Enter total customers: ");
    scanf("%d", &totalCustomers);

    for (int c = 1; c <= totalCustomers; c++) {
        bill = 0;

        printf("\nCustomer %d\n", c);
        printf("Enter number of items: ");
        scanf("%d", &items);

        for (int i = 1; i <= items; i++) {
            printf("\nEnter item code: ");
            scanf("%d", &code);
            printf("Enter quantity: ");
            scanf("%d", &qty);

            switch(code) {
                case 1: price = 50; break; // Pizza
                case 2: price = 30; break; // Sandwich
                case 3: price = 20; break; // Tea
                case 4: price = 60; break; // Burger
                case 5: price = 40; break; // Juice
                default: 
                    printf("Invalid code! Skipped.\n");
                    continue;
            }

            bill += price * qty;
            totalItems += qty;
        }

        // Discount
        finalBill = (bill > 500) ? bill * 0.95 : bill;
        totalSales += finalBill;

        // Customer Bill Display
        printf("\n--- Customer %d Bill ---\n", c);
        printf("Total Bill: %.2f\n", bill);
        if (bill > 500) printf("Discount: 5%% Applied\n");
        printf("Final Bill: %.2f\n", finalBill);
    }

    // Summary
    printf("\n===== Canteen Summary =====\n");
    printf("Customers Served: %d\n", totalCustomers);
    printf("Total Items Sold: %d\n", totalItems);
    printf("Total Sales: %.2f\n", totalSales);

    return 0;
}