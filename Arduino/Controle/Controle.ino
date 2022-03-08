
#define pot A1
void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  Serial.begin(9600);
  //int precision =0;
}

int defineprecision(int pot) {
  
  int precision = 0;
  if(pot <50){
    return precision=0;
  }
  if (pot > 50 && pot<200){
    return precision = 5;
  } 
  if (pot> 200 && pot<500){
    return precision =10; 
  }
  if (pot>500 && pot<1000){
    return precision =20;
  }
  if (pot>1000){
    return precision =50;
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  int valpot = analogRead(pot);
  int precision = defineprecision (valpot);
//  if(valpot <200 ) {
//    precision = 5; 
//  } else {
//    precision =0;
//  }
// 
  
  //Serial.print("Leitura do potenciomentro: ");
  Serial.println(precision);
  
}
