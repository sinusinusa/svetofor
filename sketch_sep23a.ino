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
  delay(6000);
  for(int i=8; i != 0; i--){
    digitalWrite(grn, HIGH);
    delay(250);
    digitalWrite(grn, LOW);
    delay(250);
  }
  digitalWrite(grn,LOW);
  digitalWrite(yel, HIGH);
  delay(10000);
  digitalWrite(yel,LOW);
  digitalWrite(red,HIGH);
  delay(6000);
    for(int i2 = 8; i2 !=0; i2--){
    digitalWrite(red, HIGH);
    delay(250);
    digitalWrite(red, LOW);
    delay(250);
  }
  digitalWrite(red,LOW);
  digitalWrite(yel, HIGH);
  delay(10000);
  digitalWrite(yel,LOW);
}
