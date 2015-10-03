void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(A0);
  if (sensorValue < 200){
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}
