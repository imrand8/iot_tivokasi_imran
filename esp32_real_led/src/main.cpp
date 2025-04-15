#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu1 = 25;
int lampu2 = 33;

void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 Blinking 2 LEDs Together");

    // Atur semua pin sebagai OUTPUT
    pinMode(lampu1, OUTPUT);
    pinMode(lampu2, OUTPUT);
}

void loop() {
    // Nyalakan kedua lampu secara bersamaan
    digitalWrite(lampu1, HIGH);
    digitalWrite(lampu2, HIGH);
    Serial.println("Kedua lampu ON");
    delay(500);

    // Matikan kedua lampu secara bersamaan
    digitalWrite(lampu1, LOW);
    digitalWrite(lampu2, LOW);
    Serial.println("Kedua lampu OFF");
    delay(500);
}
