/*
 * API Communication with fzoc.kanjian.fr
 * Author: belleaukevan8-cmd
 * Date: 2026-02-22
 */

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

// Function to perform API request
void perform_api_request(const char *url) {
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);

        // Perform the request, res will get the return code
        res = curl_easy_perform(curl);

        // Check for errors
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        // Always cleanup
        curl_easy_cleanup(curl);
    }
}

int main(void) {
    const char *url = "http://fzoc.kanjian.fr/api";
    perform_api_request(url);
    return 0;
}