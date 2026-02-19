#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */
#define TOUCH_PIN 2
int touchState = 0;


 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)

 // TODO 2:
 // Create variable to store touch state

void setup() {
    // Initialize Serial communication at 9600 baud
    Serial.begin(9600);

    // Configure touch pin as INPUT
    pinMode(TOUCH_PIN, INPUT);

    // System initialization message
    Serial.println("TTP223 Touch System Initialized...");
    Serial.println("----------------------------------");
}


void loop() {

    /// Read digital value from touch sensor (HIGH or LOW)
    touchState = digitalRead(TOUCH_PIN);

    // Check if touch is detected
    if (touchState == HIGH) {
        Serial.println("Status: [Touch Detected]");
    } else {
        Serial.println("Status: [No Touch]");
    }

    // Small delay to prevent serial flooding
    delay(300);

}
