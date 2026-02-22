// card_types.c

#include <stdio.h>
#include <stdlib.h>

// Enum to define different card types
typedef enum {
    VISA,
    MASTERCARD,
    AMEX,
    DISCOVER,
    UNKNOWN
} CardType;

// Function to determine card type based on card number
CardType getCardType(const char* cardNumber) {
    // Sample logic for determining card type
    if (cardNumber[0] == '4') {
        return VISA;
    } else if (cardNumber[0] == '5') {
        return MASTERCARD;
    } else if (cardNumber[0] == '3' && (cardNumber[1] == '4' || cardNumber[1] == '7')) {
        return AMEX;
    } else if (cardNumber[0] == '6') {
        return DISCOVER;
    }
    return UNKNOWN;
}

// Function to print the card type
void printCardType(CardType type) {
    switch (type) {
        case VISA:
            printf("Card type: VISA\n");
            break;
        case MASTERCARD:
            printf("Card type: MASTERCARD\n");
            break;
        case AMEX:
            printf("Card type: AMEX\n");
            break;
        case DISCOVER:
            printf("Card type: DISCOVER\n");
            break;
        default:
            printf("Card type: UNKNOWN\n");
            break;
    }
}