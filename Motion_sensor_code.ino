//www.elegoo.com
//2016.12.9

void setup() {
  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(2, INPUT);// Input from sensor
  pinMode(8, OUTPUT);// OUTPUT to LED
  pinMode(11, OUTPUT);//OUTPUT to Alarm
}

void loop() {
  int motion =digitalRead(2);
  if(motion){
    Serial.println("Motion detected");
    digitalWrite(8,HIGH);
    tone(11, 220);
    delay(500);
    noTone(11);
    delay(500);
    tone(11, 220);
    delay(500);
    noTone(11);
    delay(500);
    tone(11, 220);
    delay(500);
    noTone(11);
    delay(500);
    
  }else{
     Serial.println("nothing moves");
     digitalWrite(8,LOW);
     noTone(11);
  }
  delay(500);

}
