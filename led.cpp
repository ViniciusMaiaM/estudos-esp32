#include <Arduino.h>

void setup() {
    pinMode(LED_BUILTIN,OUTPUT);
    Serial.begin(921600);
    Serial.println("Hello World!");
}

void loop() {
    delay(1000);
    digitalWrite(LED_BUILTIN,HIGH);
    Serial.println("Hello World from the loop!");
    delay(1000);
    digitalWrite(LED_BUILTIN,LOW);
}