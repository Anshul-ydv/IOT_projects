#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

// Function declarations
void stopMotors();
void handleCommand(char cmd);
void checkFlameSensors();

// Motor Pins
#define LEFT_IN1 18
#define LEFT_IN2 19
#define RIGHT_IN1 21
#define RIGHT_IN2 22

// Flame Sensor Pins
#define FLAME_LEFT 32
#define FLAME_CENTER 33
#define FLAME_RIGHT 34

void setup() {
  Serial.begin(9600);
  SerialBT.begin("ESP_CAR");
  Serial.println("Bluetooth RC Car Ready");

  // Motor pins
  pinMode(LEFT_IN1, OUTPUT);
  pinMode(LEFT_IN2, OUTPUT);
  pinMode(RIGHT_IN1, OUTPUT);
  pinMode(RIGHT_IN2, OUTPUT);

  // Flame sensor pins
  pinMode(FLAME_LEFT, INPUT);
  pinMode(FLAME_CENTER, INPUT);
  pinMode(FLAME_RIGHT, INPUT);

  stopMotors();
}

void loop() {
  if (SerialBT.available()) {
    char cmd = SerialBT.read();
    handleCommand(cmd);
  }

  checkFlameSensors();
}

void handleCommand(char cmd) {
  switch (cmd) {
    case 'F':  // Forward
      digitalWrite(LEFT_IN1, HIGH);
      digitalWrite(LEFT_IN2, LOW);
      digitalWrite(RIGHT_IN1, LOW);
      digitalWrite(RIGHT_IN2, HIGH);
      break;

    case 'B':  // Backward
      digitalWrite(LEFT_IN1, LOW);
      digitalWrite(LEFT_IN2, HIGH);
      digitalWrite(RIGHT_IN1, HIGH);
      digitalWrite(RIGHT_IN2, LOW);
      break;

    case 'L':  // Left
      digitalWrite(LEFT_IN1, LOW);
      digitalWrite(LEFT_IN2, LOW);
      digitalWrite(RIGHT_IN1, LOW);
      digitalWrite(RIGHT_IN2, HIGH);
      break;

    case 'R':  // Right
      digitalWrite(LEFT_IN1, HIGH);
      digitalWrite(LEFT_IN2, LOW);
      digitalWrite(RIGHT_IN1, LOW);
      digitalWrite(RIGHT_IN2, LOW);
      break;

    case 'S':  // Stop
      stopMotors();
      break;
  }
}

void stopMotors() {
  digitalWrite(LEFT_IN1, LOW);
  digitalWrite(LEFT_IN2, LOW);
  digitalWrite(RIGHT_IN1, LOW);
  digitalWrite(RIGHT_IN2, LOW);
}

void checkFlameSensors() {
  int left = digitalRead(FLAME_LEFT);
  int center = digitalRead(FLAME_CENTER);
  int right = digitalRead(FLAME_RIGHT);

  if (left == LOW) {
    Serial.println("Flame detected on LEFT");
  } else if (center == LOW) {
    Serial.println("Flame detected at CENTER");
  } else if (right == LOW) {
    Serial.println("Flame detected on RIGHT");
  }
}