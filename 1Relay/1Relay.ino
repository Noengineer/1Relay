#include <WiFi.h>
#include <OTA.h>
// MAC
void setup() {
  Serial.begin(9600);

ArduinoOTA.setHostname("Relay1");
setupOTA();

  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  Serial.println();
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
}

// the loop function runs over and over again forever
void loop() {
  ArduinoOTA.handle(); // Run every ~5 Seconds
  Serial.begin(9600);
  digitalWrite(26, HIGH);
  // digitalWrite(27, LOW);
  Serial.println("line1");
  delay(1000);
  // digitalWrite(26, LOW);
  digitalWrite(27, HIGH);
  Serial.println("line2");
  ArduinoOTA.handle(); // Run every ~5 Seconds
  delay(1000);
  digitalWrite(27, LOW);
  digitalWrite(27, LOW);
  delay(100);
}
