#include <Arduino.h>

// TODO 1: Define FSR analog pin (Use A0)
const int FSR_PIN = A0;

// TODO 2: Create variable to store sensor reading
int fsrReading = 0;

// Define threshold value for pressure detection
const int PRESSURE_THRESHOLD = 200;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Print system initialization message
}

void loop() {

    // TODO 5:
    // Read analog value from FSR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
