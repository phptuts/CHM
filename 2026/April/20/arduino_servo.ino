#include <Servo.h>

// Configure these based on your wiring
const int SERVO_PIN = 9;           // PWM pin connected to servo
const int BAUD_RATE = 9600;        // Must match web page setting

// Servo angles
const int ANGLE_MIN = 60;
const int ANGLE_MAX = 90;
const int CYCLES = 4;              // Number of up-and-down cycles
const int MOVE_DELAY = 300;        // Milliseconds per angle change

Servo servo;
String incomingData = "";

void setup() {
  Serial.begin(BAUD_RATE);
  servo.attach(SERVO_PIN);
  
  // Initialize servo to min position
  servo.write(ANGLE_MIN);
  delay(500);
  
  Serial.println("Servo initialized. Waiting for 'Move' command...");
}

void loop() {
  // Read incoming serial data
  while (Serial.available() > 0) {
    char incomingChar = Serial.read();
    
    // Build string until newline
    if (incomingChar == '\n') {
      incomingData.trim();
      
      // Check if message is "Move" (case-insensitive)
      if (incomingData.equalsIgnoreCase("MOVE")) {
        Serial.println("Received: Move");
        performServoSequence();
      } else if (incomingData.length() > 0) {
        Serial.print("Unknown command: ");
        Serial.println(incomingData);
      }
      
      // Clear buffer
      incomingData = "";
    } else {
      // Accumulate characters
      incomingData += incomingChar;
    }
  }
}

void performServoSequence() {
  Serial.println("Starting servo sequence (4 cycles)...");
  
  for (int cycle = 0; cycle < CYCLES; cycle++) {
    // Move from 60 to 90
    Serial.print("Cycle ");
    Serial.print(cycle + 1);
    Serial.println(": Moving to 90°");
    moveServoTo(ANGLE_MAX);
    
    // Move from 90 to 60
    Serial.print("Cycle ");
    Serial.print(cycle + 1);
    Serial.println(": Moving to 60°");
    moveServoTo(ANGLE_MIN);
  }
  
  Serial.println("Sequence complete. Ready for next command.");
}

void moveServoTo(int targetAngle) {
  int currentAngle = servo.read();
  int step = (targetAngle > currentAngle) ? 1 : -1;
  
  // Smooth movement in 1-degree increments
  while (currentAngle != targetAngle) {
    currentAngle += step;
    servo.write(currentAngle);
    delay(MOVE_DELAY / abs(targetAngle - ANGLE_MIN));  // Scale delay for smooth motion
  }
  
  delay(200);  // Pause at target angle
}
