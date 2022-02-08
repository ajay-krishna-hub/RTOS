byte b;
void setup(){
  Serial.begin(9600);
}
void loop(){
  while(Serial.available()==0){}
    b=Serial.read();
    Serial.println(b);
}