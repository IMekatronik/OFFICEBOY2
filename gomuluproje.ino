int data;
int led1=7;
int led2=6;
void setup() {
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  analogWrite(3,90);
  analogWrite(5,90); 
  
  if(Serial.available()){
    int data = Serial.read();
    delay(100);
    if(data=='A'){
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      Serial.print("data==A");
                 }
                
    if(data=='B'){
      digitalWrite(led1,0);
      digitalWrite(led2,1);
      Serial.print("data==B");
                }
                
    if(data=='C'){
      digitalWrite(led1,1);
      digitalWrite(led2,0);
      Serial.print("data==C");
                  }
   
    delay(100);
                        }
  }
