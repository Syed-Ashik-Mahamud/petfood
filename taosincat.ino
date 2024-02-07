#include <Servo.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

Servo servo;

char auth[] = "******";  // Enter your Blynk auth token
char ssid[] = "*****";  // Enter your WIFI name
char pass[] = "*****";  // Enter your WIFI password

BLYNK_WRITE(V2) {
  servo.write(param.asInt());
}

void setup() {
  Serial.begin(9600);
  servo.attach(2); // Use the appropriate GPIO pin on your ESP32

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
