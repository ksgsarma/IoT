
void setup() {
  // put your setup code here, to run once:
  pinMode(D0,OUTPUT);
  Serial.begin(9600);
  pinMode(D2,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D0,HIGH);
  Serial.println("Led D0 is in HIGH state");
  delay(100);
  digitalWrite(D2,HIGH);
  Serial.println("Led D2 is in HIGH state");
  delay(100);
  digitalWrite(D0,LOW);
  Serial.println("Led D0 is in LOW state");
  delay(100);
  digitalWrite(D2,LOW);
  Serial.println("Led D2 is in LOW state");
  delay(100);
}
