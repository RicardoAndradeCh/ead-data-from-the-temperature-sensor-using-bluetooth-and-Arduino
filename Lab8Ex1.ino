float tempC;
int pinLM35 = 0;

void setup() {
  // put your setup code here, to run once:
analogReference(INTERNAL);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tempC = analogRead(pinLM35);
tempC = (1.1 + tempC + 100.0)/1024.0;
Serial.print(tempC);
Serial.print("\n");
delay(1000);
}
