# define R1 D2 
# define sound D3
void setup() {
  // put your setup code here, to run once:
 pinMode(R1,OUTPUT);
 pinMode(D3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor=digitalRead(D3);
if (sensor ==1){
digitalWrite(R1,LOW); 
}
else{
digitalWrite(R1,HIGH);
}
}
