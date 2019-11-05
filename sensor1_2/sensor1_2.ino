#define trig1 PIN_PC4
#define echo1 PIN_PC5

#define trig2 PIN_PB3
#define echo2 PIN_PB4


#define green PIN_PC0
#define yellow PIN_PC2
#define red PIN_PC3


#define buzz PIN_PD0

int duration1;
int duration2;
float distance1;
float distance2;

void setup() {
  pinMode(trig1, OUTPUT);
  digitalWrite(trig1, LOW);
  delayMicroseconds(2);
  pinMode(echo1, INPUT);

  pinMode(trig2, OUTPUT);
  digitalWrite(trig2, LOW);
  delayMicroseconds(2);
  pinMode(echo2, INPUT);
  delay(6000);
  
  pinMode(buzz, OUTPUT);
  
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);

}

void sensor1(){
  int i=20;
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  duration1 = pulseIn(echo1, HIGH);
  distance1 = duration1/58;

  if (distance1 <= 15 && distance1 >= 6.5) {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  } 
  else if(distance1 <= 7 && distance1 >= 5) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  } 
  else if(distance1 <= 4.5 && distance1 >= 3){
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
  }
  else if(distance1 <= 2 && distance1 >= 1.5){
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  
  else {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }

  if(distance1<=15 && distance1 >= 2.5 ) {
    i=distance1*i;
  digitalWrite(buzz, HIGH);
    delay(i);
  digitalWrite(buzz, LOW);
    delay(i);
  }
  delay(5);
}
void sensor2(){
  int l=20;
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  duration2 = pulseIn(echo2, HIGH);
  distance2 = duration2/58;

  if (distance2 <= 15 && distance2 >= 6.5) {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  } 
  else if(distance2 <= 7 && distance2 >= 5) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  } 
  else if(distance2 <= 4.5 && distance2 >= 3){
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
  }
  else if(distance2 <= 2 && distance2 >= 1.5){
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  
  else {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }

  if(distance2<=15 && distance2 >= 2.5 ) {
    l=distance2*l;
  digitalWrite(buzz, HIGH);
    delay(l);
  digitalWrite(buzz, LOW);
    delay(l);
  }
  delay(5);
}

void loop() {
  sensor1();
  sensor2();
  delay(100); 
}
