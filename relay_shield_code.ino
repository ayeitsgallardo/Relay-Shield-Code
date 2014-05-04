int MotorControl1 =7 ;    // Arduino Pin to control the motor
int MotorControl2 =6 ;
int MotorControl3 =5 ;
int MotorControl4 =4 ;

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 5 to be an output:
  pinMode(MotorControl1, OUTPUT);
  pinMode(MotorControl2, OUTPUT);
  pinMode(MotorControl3, OUTPUT);
  pinMode(MotorControl4, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  digitalWrite(MotorControl1,HIGH);// 
  delay(25);
  digitalWrite(MotorControl1,LOW);// 
  delay(25);
  digitalWrite(MotorControl2,HIGH);// 
  delay(25);
  digitalWrite(MotorControl2,LOW);// 
  delay(25);
  digitalWrite(MotorControl3,HIGH);// 
  delay(25);
  digitalWrite(MotorControl3,LOW);// 
  delay(25);
  digitalWrite(MotorControl4,HIGH);// 
  delay(25);
  digitalWrite(MotorControl4,LOW);// 
  delay(25);
                         
}
