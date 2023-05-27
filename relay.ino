int relay =17;
void setup() {
  // put your setup code here, to run once:
pinMode(relay,OUTPUT);
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay,LOW);
Serial.print("\n Relay accionado");
delay(5000);
digitalWrite(relay,HIGH);
Serial.print("\n Relay NO accionado");
delay(5000);
}
