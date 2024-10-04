#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "config.h"

WiFiClient wifiClient;                // Initiate WiFi library


void setup() {
    Serial.begin(74880);
    Serial.println();

    //Initiate the WiFi Connection
    WiFi.mode(WIFI_STA);
    WiFi.begin(SSID, PASSWORD);
    Serial.print("Connecting...");

    //Waiting until connection is established
    while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    }

    Serial.println();
}

void void loop() {
    float reading;
    float raw;
}