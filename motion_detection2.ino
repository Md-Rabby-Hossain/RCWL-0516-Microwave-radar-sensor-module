#define SENSOR_PIN 27

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  int motion = digitalRead(SENSOR_PIN);

  // Print ONLY numeric values for Serial Plotter
  Serial.println(motion);

  delay(50);  // faster refresh for smooth graph
}