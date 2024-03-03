
String voice;
#define relay1 D2
void setup(){
 Serial.begin(9600);
 pinMode(relay1,OUTPUT);
}
void loop(){
  while(Serial.available())
  {
    delay(10);
    char c=Serial.read();
    if(c=='#'){
      break;
    }
    voice +=c;
  }
  if(voice.length()>0)
  {
    Serial.println(voice);
    if(voice=="*on")
    {
      digitalWrite(relay1,LOW);
    }
    else if(voice=="*of")
    {
      digitalWrite(relay1,HIGH);
    }
  
    voice="";
  }
}
