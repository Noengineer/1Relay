 #include <WiFi.h>

void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(16, OUTPUT);
  Serial.println();
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(16, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(16, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
