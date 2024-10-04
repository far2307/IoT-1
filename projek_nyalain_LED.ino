int led = 3;
int pb = 2;
bool status_led = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pb, INPUT);
}

void loop() {
  bool statuspb = digitalRead(pb);
  
  // Cek jika tombol ditekan
  if (statuspb == 1) {
    status_led = !status_led;
    digitalWrite(led, status_led);
    delay(500);
  }

  Serial.println(status_led);
}
