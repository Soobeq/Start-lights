
int pushButton = 7;
int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;

int interwal= 7000;

void start_proces();
// the setup routine runs once when you press reset:
void setup() {

  Serial.begin(9600);
 digitalWrite(pushButton, LOW);
  pinMode(pushButton, INPUT);
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  int buttonState = digitalRead(pushButton);
 Serial.println(buttonState);
  if(buttonState == 1){
    
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(500);
    
   
    start_proces();
      
  }else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    
  }
  
  delay(10);        
}

void start_proces(){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);

    delay(5000);
    delay(interwal);
    digitalWrite(LED1, HIGH);
    delay(interwal);
    digitalWrite(LED2, HIGH);
    delay(interwal);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(10000);

}
