#include <stdio.h>

int main()
{
    float price, gross, discount, tax, total, net;
    int qty, senior;

    printf("Enter medicine price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    printf("Senior citizen? (1-Yes, 0-No): ");
    scanf("%d", &senior);

    gross = price * qty;

    if (senior == 1)
        discount = gross * 15 / 100;
    else
        discount = 0;

    tax = (gross - discount) * 5 / 100;

    total = gross - discount + tax;

    net = (total > 1000) ? total - 50 : total;

    printf("\nGross Amount = %.2f", gross);
    printf("\nDiscount = %.2f", discount);
    printf("\nGST = %.2f", tax);
    printf("\nTotal Amount = %.2f", total);
    printf("\nNet Amount = %.2f\n", net);

    return 0;
}
