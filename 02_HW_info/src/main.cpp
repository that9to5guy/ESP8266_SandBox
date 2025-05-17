#include <Arduino.h>
#include <ESP8266WiFi.h>  // Required for WiFi info

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Built-in LED on GPIO2 (D4 on NodeMCU)
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println();
  Serial.println("========== ESP8266 System Info ==========");

  // Chip Info
  Serial.print("Chip ID: ");
  Serial.println(ESP.getChipId(), HEX);

  Serial.print("Core Version: ");
  Serial.println(ESP.getCoreVersion());

  Serial.print("SDK Version: ");
  Serial.println(ESP.getSdkVersion());

  Serial.print("Full Version: ");
  Serial.println(ESP.getFullVersion());

  Serial.print("CPU Frequency: ");
  Serial.print(ESP.getCpuFreqMHz());
  Serial.println(" MHz");

  // Flash Info
  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId(), HEX);

  Serial.print("Flash Chip Vendor ID: ");
  Serial.println(ESP.getFlashChipVendorId(), HEX);

  Serial.print("Flash Chip Size: ");
  Serial.print(ESP.getFlashChipSize());
  Serial.println(" bytes");

  Serial.print("Flash Chip Speed: ");
  Serial.print(ESP.getFlashChipSpeed());
  Serial.println(" Hz");

  // Memory Info
  Serial.print("Sketch Size: ");
  Serial.print(ESP.getSketchSize());
  Serial.println(" bytes");

  Serial.print("Free Sketch Space: ");
  Serial.print(ESP.getFreeSketchSpace());
  Serial.println(" bytes");

  Serial.print("Free Heap: ");
  Serial.print(ESP.getFreeHeap());
  Serial.println(" bytes");

  // Reset & Boot Info
  Serial.print("Reset Reason: ");
  Serial.println(ESP.getResetReason());

  Serial.print("Boot Version: ");
  Serial.println(ESP.getBootVersion());

  Serial.print("Boot Mode: ");
  Serial.println(ESP.getBootMode());

  // Optional: Vcc (requires ADC_MODE=ADC_VCC)
  // Serial.print("Vcc: ");
  // Serial.print(ESP.getVcc());
  // Serial.println(" mV");

  Serial.println();

  // WiFi Info (even if not connected)
  Serial.println("----------- WiFi Info -----------");

  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());

  Serial.print("Hostname: ");
  Serial.println(WiFi.hostname());

  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("Connected SSID: ");
    Serial.println(WiFi.SSID());

    Serial.print("Local IP: ");
    Serial.println(WiFi.localIP());

    Serial.print("Signal Strength (RSSI): ");
    Serial.print(WiFi.RSSI());
    Serial.println(" dBm");
  } else {
    Serial.println("WiFi not connected.");
  }

  Serial.println("=========================================");
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); 
}
