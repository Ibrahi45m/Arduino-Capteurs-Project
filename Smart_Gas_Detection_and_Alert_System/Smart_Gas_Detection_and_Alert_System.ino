const int Pin_analogique = A1;
const int Pin_buzzer = 10;
const int seuil = 165;

void setup() {
  Serial.begin(9600);
  pinMode(Pin_buzzer, OUTPUT);
  digitalWrite(Pin_buzzer, LOW);
}

void loop() {
  int Value_gaz = analogRead(Pin_analogique);

  Serial.print("valeur du capteur de gaz : ");
  Serial.println(Value_gaz);

  if (Value_gaz > seuil) {
    digitalWrite(Pin_buzzer, HIGH);
    Serial.println("gaz detecte");
  } else {
    digitalWrite(Pin_buzzer, LOW);
  }

  delay(1000);
}