#define SENSOR_PIN 27

void setup() {
  Serial.begin(115200);

  pinMode(SENSOR_PIN, INPUT);

  Serial.println("RCWL-0516 Motion Sensor Test Started...");
}

void loop() {
  int motion = digitalRead(SENSOR_PIN);

  if (motion == HIGH) {
    Serial.println("🚨 Motion Detected!");
  } else {
    Serial.println("No motion");
  }

  delay(500); // small delay to avoid spam
}