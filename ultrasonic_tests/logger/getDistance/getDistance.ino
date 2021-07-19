void setup() {
  
  const int triggerPin =12;
  const int echopin = 13
  // put your setup code here, to run once:

}

void getDistance(){
  float duration;
  float distance;
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerpin, LOW);
  
  duration = pulseIn(echopin, HIGH, 50000);
  
  distance = ((duration / 2) / 29.1);
  
  Serial.println("Distance = ");
  Serial.println(distance);
}

void loop() {
  
  getDistance();;

}


