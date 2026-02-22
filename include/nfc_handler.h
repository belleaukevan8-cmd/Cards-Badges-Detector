# NFC Handler

#ifndef NFC_HANDLER_H
#define NFC_HANDLER_H

// Function to initialize NFC card handling
void init_nfc();

// Function to read NFC card data
int read_nfc_data();

// Function to stop NFC operations
void stop_nfc();

#endif // NFC_HANDLER_H