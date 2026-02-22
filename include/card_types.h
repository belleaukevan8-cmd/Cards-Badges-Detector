# card_types.h

#ifndef CARD_TYPES_H
#define CARD_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

// Enumeration for Card Types
typedef enum {
    CARD_TYPE_NFC,
    CARD_TYPE_RFID,
    CARD_TYPE_SPECIAL,
    CARD_TYPE_UNKNOWN
} CardType;

// Structure for Card Information
typedef struct {
    CardType type;
    char id[64]; // Unique identifier for the card
    // other relevant fields can be added here
} CardInfo;

#ifdef __cplusplus
}
#endif

#endif // CARD_TYPES_H
