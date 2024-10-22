#include <Servo.h>

Servo myservo;  // Create a Servo object to control the servo motor

const int trigPin = 3;  // Trigger pin of the ultrasonic sensor
const int echoPin = 5;  // Echo pin of the ultrasonic sensor

long tmeduration;  // To store the time duration of the pulse
int distance;      // To store the calculated distance

void setup() {
  myservo.attach(9);  // Attach the servo motor to pin 9
  pinMode(trigPin, OUTPUT);  // Set the trigger pin as an output
  pinMode(echoPin, INPUT);   // Set the echo pin as an input
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
}

void loop() {
  // Send a short pulse to the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of the pulse from the echo pin
  tmeduration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance based on the time duration of the pulse
  distance = (0.034 * tmeduration) / 2;
  
  // If the distance is less than or equal to 10 cm, move the servo to 90 degrees
  if (distance <= 10) {
    myservo.write(90);
  } else {
    myservo.write(0);  // Otherwise, move the servo back to 0 degrees
  }

  // Print the measured distance to the serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  delay(1);  // Small delay before the next loop iteration
}
