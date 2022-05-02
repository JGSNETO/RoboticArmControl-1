#define pinVrx A3
#define pinVry A2
#define pinSW A4


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
  Serial.println(statusSW);

//  if (statusSW) {
//    Serial.println("True");  
//  }
//  else{
//    Serial.println("False");
//  }
//  
}
