// rfid_handler.h

#ifndef RFID_HANDLER_H
#define RFID_HANDLER_H

// Initialize RFID reader
void initRFIDReader();

// Read RFID card
int readRFIDCard();

// Handle RFID card data
void handleRFIDCard(int cardData);

#endif // RFID_HANDLER_H
