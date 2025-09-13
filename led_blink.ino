int redLED = 5;
int whiteLED = 6;
int greenLED = 9;

void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(whiteLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(redLED,HIGH);
  delay(500);
  digitalWrite(redLED,LOW);
  delay(500);
  digitalWrite(whiteLED,HIGH);
  delay(1000);
  digitalWrite(whiteLED,LOW);
 delay(1000);
 digitalWrite(greenLED,HIGH);
  delay(1000);
  digitalWrite(greenLED,LOW);
 delay(1000);// put your main code here, to run repeatedly:

}
