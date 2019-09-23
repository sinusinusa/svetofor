int red=8;
int yel=11;
int grn=13;
void setup() {
   pinMode (red, OUTPUT);
   pinMode (yel, OUTPUT);
   pinMode (grn, OUTPUT);
}

void loop() {
  digitalWrite(grn, HIGH);
  delay(10000);
  digitalWrite(grn,LOW);
  digitalWrite(yel, HIGH);
  delay(10000);
  digitalWrite(yel,LOW);
  digitalWrite(red,HIGH);
  delay(10000);
  digitalWrite(red,LOW);
}
