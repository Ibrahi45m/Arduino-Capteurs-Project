const int sensorPin = A1;
const int ledPin = 12;
int seuil = 600;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  if (sensorValue > seuil) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  Serial.print("valeur brut du capteur : ");
  Serial.println(sensorValue);

  delay(1000);
}