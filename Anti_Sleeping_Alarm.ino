 #include <Servo.h>

const int trigPin = 2; // ultrasound sensor trigger pin
const int echoPin = 3; // ultrasound sensor echo pin
const int servoPin = 9; // servo motor pin

long duration;
int distance;`

Servo myservo;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(servoPin);
}

void loop() {
  // Send out ultrasound signal
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the ultrasound sensor
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // Move the servo motor based on the distance measured
  if (distance <= 10) {
    myservo.write(0);
  } else my.servo.wrutemicrosecond(1500);
}else{
myservo.writemicroseconds(1000);
}

delay(500);
}if (distance >= 20) {
   