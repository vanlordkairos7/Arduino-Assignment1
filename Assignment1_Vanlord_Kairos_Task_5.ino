int startValue=5;
int ledPin=13;

void flashLED(int times){
  int num=0;
  while(num<times){
 digitalWrite(ledPin,HIGH);
 delay(1000);
 digitalWrite(ledPin,LOW);
 delay(1000);
 num++;
  }

}

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(ledPin,OUTPUT);

 Serial.println("=== Smart Contdown Starting ===");

 int count=startValue;

 while(count>=1){
  Serial.print("Count is: ");
  Serial.println(count);
  
  flashLED(count);
  delay(500);
   
   count= count-1;
 }

Serial.println("=== Countdown Complete ===");

}

void loop() {
  // put your main code here, to run repeatedly:

}
