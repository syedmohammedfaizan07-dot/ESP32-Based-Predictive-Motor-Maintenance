
/*
  MOTORGUARD AI
  ESP32 Predictive Motor Maintenance
  Software Simulation Firmware
*/

String motorMode = "HEALTHY";

float vibration = 0.0;
float temperature = 35.0;
int rpm = 1500;

unsigned long lastUpdate = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println("================================");
  Serial.println("       MOTORGUARD AI");
  Serial.println(" Predictive Motor Maintenance");
  Serial.println("================================");
  Serial.println("Commands:");
  Serial.println("1 = Healthy Motor");
  Serial.println("2 = Shaft Imbalance");
  Serial.println("3 = Bearing Fault");
  Serial.println("4 = Severe Vibration");
  Serial.println();
}

void loop() {
  // Read commands from the Serial Monitor
  if (Serial.available() > 0) {
    char command = Serial.read();

    if (command == '1') motorMode = "HEALTHY";
    if (command == '2') motorMode = "IMBALANCE";
    if (command == '3') motorMode = "BEARING_FAULT";
    if (command == '4') motorMode = "SEVERE";

    Serial.print("Selected mode: ");
    Serial.println(motorMode);
  }

  // Generate simulated motor sensor readings
  if (millis() - lastUpdate >= 1000) {
    lastUpdate = millis();

    if (motorMode == "HEALTHY") {
      vibration = random(10, 31) / 100.0;
      temperature = 35 + random(0, 4);
      rpm = 1500;
    }
    else if (motorMode == "IMBALANCE") {
      vibration = random(100, 181) / 100.0;
      temperature = 42 + random(0, 5);
      rpm = 1480;
    }
    else if (motorMode == "BEARING_FAULT") {
      vibration = random(200, 301) / 100.0;
      temperature = 50 + random(0, 6);
      rpm = 1450;
    }
    else {
      vibration = random(350, 501) / 100.0;
      temperature = 65 + random(0, 10);
      rpm = 1350;
    }

    String status = "NORMAL";

    if (vibration >= 1.0) status = "WARNING";
    if (vibration >= 2.0) status = "CRITICAL";

    Serial.print("Mode: ");
    Serial.print(motorMode);

    Serial.print(" | Vibration: ");
    Serial.print(vibration, 2);

    Serial.print(" | Temperature: ");
    Serial.print(temperature, 1);

    Serial.print(" C | RPM: ");
    Serial.print(rpm);

    Serial.print(" | Status: ");
    Serial.println(status);
  }
}
