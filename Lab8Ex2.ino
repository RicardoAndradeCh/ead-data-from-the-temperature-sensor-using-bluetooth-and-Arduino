  int tempC;
  long tm,t,d;
  int pinLM35 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLM35, INPUT);
  analogReference(INTERNAL);

}

void loop() {
  // put your main code here, to run repeatedly:
  tempC = analogRead(pinLM35);
 // tempC = (1.1 + tempC + 100.0)/1024.0;

  tm = millis();
  t = tm /1000;
  d = tm%1000;
  Serial.flush();

  Serial.print("time : ");
  Serial.print(t);
  Serial.print(".");
  Serial.print(d);
  Serial.print("s\t");

  Serial.print("temperature: ");
  Serial.print(tempC);
  Serial.print("C");
  Serial.print("\n");
  delay(2000);
}
