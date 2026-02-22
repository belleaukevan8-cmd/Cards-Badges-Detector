// api_handler.h

#ifndef API_HANDLER_H
#define API_HANDLER_H

#include <curl/curl.h> // Include for API requests

// Function to initialize the API
void initialize_api();

// Function to handle API requests
void handle_api_request(const char* endpoint, const char* parameters);

// Function to process API response
void process_api_response(CURLcode res);

#endif // API_HANDLER_H
