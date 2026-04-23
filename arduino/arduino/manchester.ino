#define LED 9
#define BIT_TIME 400

void setup(){
  pinMode(LED, OUTPUT);
}

void sendBit(int bit){
  if(bit==1){
    digitalWrite(LED, LOW);
    delayMicroseconds(BIT_TIME);
    digitalWrite(LED, HIGH);
    delayMicroseconds(BIT_TIME);
  } else {
    digitalWrite(LED, HIGH);
    delayMicroseconds(BIT_TIME);
    digitalWrite(LED, LOW);
    delayMicroseconds(BIT_TIME);
  }
}

void loop(){
  sendBit(1);
  sendBit(0);
}
