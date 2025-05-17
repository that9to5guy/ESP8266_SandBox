#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Built-in LED on GPIO2 (D4 on NodeMCU)
  Serial.begin(115200);
  Serial.println("");
  Serial.println("Hello World from ESP8266!");
  Serial.println("");
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // Turn LED on (LOW = ON for ESP8266)
  delay(1000);                     // Wait 1 second
  Serial.println("Blinking ESP8266 . . .");
  digitalWrite(LED_BUILTIN, HIGH); // Turn LED off
  delay(1000);                     // Wait 1 second
}
