#include <stdio.h>

int calls = 0;

int verify_card(int card)
{
    calls++;
    return card == 1;
}

int main()
{
    int senior, eligible, card;
    int result;

    printf("Enter senior status (1/0): ");
    scanf("%d", &senior);

    printf("Enter eligible class (1/0): ");
    scanf("%d", &eligible);

    printf("Enter disability card (1/0): ");
    scanf("%d", &card);

    result = (senior && eligible) || verify_card(card);

    printf("Concession: %s\n",
           result ? "Granted" : "Not Granted");

    printf("Verification calls: %d\n", calls);

    return 0;
}
