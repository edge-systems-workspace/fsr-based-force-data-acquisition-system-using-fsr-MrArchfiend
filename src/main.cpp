#include <Arduino.h>

// TODO 1: Define FSR analog pin (Use A0)
const int FSR_PIN = A0;

// TODO 2: Create variable to store sensor reading
int fsrReading = 0;

// Define threshold value for pressure detection
const int PRESSURE_THRESHOLD = 200;

void setup() {

    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4: Print system initialization message
    Serial.println("======================================");
    Serial.println(" Embedded Force Measurement System ");
    Serial.println("======================================");
    Serial.println("Monitoring FSR sensor on A0...");
}

void loop() {

    // TODO 5: Read analog value from FSR
    fsrReading = analogRead(FSR_PIN);

    // TODO 6: Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrReading);

    // TODO 7: Apply simple threshold logic (detect pressure)
    if (fsrReading > PRESSURE_THRESHOLD) {

        // TODO 8: Print pressure detection message
        Serial.println("Pressure Detected!");
    } 
    else {
        Serial.println("No Significant Pressure.");
    }

    Serial.println("------------------------------");

    // TODO 9: Add delay (1 second)
    delay(1000);
}
