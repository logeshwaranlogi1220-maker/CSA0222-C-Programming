#include <stdio.h>

int main()
{
    double balance = 10000;
    double rate = 0.02;
    double payment = 2000;
    double interest, actual_payment;
    double total_interest = 0;

    int month = 0;

    if (payment <= balance * rate)
    {
        printf("Loan cannot be repaid with this amount.\n");
        return 0;
    }

    printf("Month\tInterest\tPayment\t\tBalance\n");

    while (balance > 0.01)
    {
        month++;

        interest = balance * rate;
        total_interest += interest;

        balance += interest;

        actual_payment = payment;

        if (actual_payment > balance)
            actual_payment = balance;

        balance -= actual_payment;

        if (balance < 0.01)
            balance = 0;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n",
               month, interest,
               actual_payment, balance);

        if (month >= 360)
        {
            printf("Maximum month limit reached.\n");
            break;
        }
    }

    if (balance == 0)
    {
        printf("\nLoan fully repaid.");
        printf("\nTotal Months = %d", month);
        printf("\nTotal Interest = Rs. %.2f\n",
               total_interest);
    }

    return 0;
}
