#define pinVrx A2
#define pinVry A3
#define pinSW 2


void setup(){
  pinMode(pinVrx, INPUT);
  pinMode(pinVry, INPUT);
  pinMode(pinSW, INPUT);

  Serial.begin(9600);
}

void loop(){

  int valorvrx =analogRead(pinVrx);
  int valorvry =analogRead(pinVry);
  bool statusSW = digitalRead(pinSW);
  Serial.println(pinSW);
  
}
