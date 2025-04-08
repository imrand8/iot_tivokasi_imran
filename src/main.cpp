#include <Arduino.h>

int lampu=26;
int lampu2=27;
int lampu3=25;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(lampu, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  digitalWrite(lampu, HIGH);
  digitalWrite(lampu2, LOW);
  digitalWrite(lampu3, LOW);
  Serial.println("LED ON");

  delay(1000); 


  digitalWrite(lampu, LOW);
  digitalWrite(lampu2, HIGH);
  digitalWrite(lampu3, LOW);
  Serial.println("LED OFF");

  delay(1000);

  digitalWrite(lampu, LOW);
  digitalWrite(lampu2, LOW);
  digitalWrite(lampu3, HIGH);
  Serial.println("LED ON");

  delay(1000);
}
