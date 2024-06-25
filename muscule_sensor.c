/*
    Project name: ESP32 Muscle Sensor EMG
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-muscle-sensor-emg
*/

// Define the pin connected to the EMG sensor
const int emgSensorPin = 34; // GPIO pin connected to the EMG sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the EMG sensor
  int emgValue = analogRead(emgSensorPin);

  // Print the EMG value to the Serial Monitor
  Serial.print("EMG Value: ");
  Serial.println(emgValue);

  // Check if muscle activity is detected based on a threshold value
  int threshold = 512; // Adjust this threshold based on sensor calibration
  if (emgValue > threshold) {
    Serial.println("Muscle activity detected!");
  } else {
    Serial.println("No muscle activity.");
  }

  delay(1000); // Add a delay before the next reading
}
