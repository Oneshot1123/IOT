# define R1 D2 
# define R2 D4
void setup() {
  // put your setup code here, to run once:
 pinMode(R1,OUTPUT);
 pinMode(D5,OUTPUT);
 pinMode(R2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(R1,LOW);
delay(100);
digitalWrite(R1,HIGH);
delay(100);

digitalWrite(R2,HIGH);
delay(100);
digitalWrite(R2,LOW);
delay(100);

digitalWrite(D5,HIGH);
delay(20);
digitalWrite(D5,LOW);
delay(20);
}
