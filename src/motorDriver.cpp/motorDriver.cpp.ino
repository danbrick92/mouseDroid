// Motor Inputs
int enB = 10;
int in3 = 6;
int in4 = 9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
  delay(2000);
  
}
