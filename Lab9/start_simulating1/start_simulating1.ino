

void setup() {
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, INPUT_PULLUP);
pinMode(7, INPUT_PULLUP); 
}

void loop() {
int S1=digitalRead(6);
int S2=digitalRead(7);
Serial.println(S1);
  if (S1==1 && S2==1){
  Estandar();
  }
  if (S1==0 && S2==1){
  GranTorque();
  }
  if (S1==1 && S2==0){
  MedioPaso();
  }
  

}

void Estandar(){
  int i;
  int S_Led_E[]={1,0,0,0,1,0,0};
  for (i=0;i<=3;i++){
  digitalWrite(5,S_Led_E[i]);
  digitalWrite(4,S_Led_E[3+i]);
  digitalWrite(3,S_Led_E[2+i]);
  digitalWrite(2,S_Led_E[1+i]);
  delay(1000);
  }
}

void GranTorque(){
  int i;
  int S_Led_GT[]={1,1,0,0,1,1,0};
  for (i=0;i<=3;i++){
  digitalWrite(5,S_Led_GT[i]);
  digitalWrite(4,S_Led_GT[3+i]);
  digitalWrite(3,S_Led_GT[2+i]);
  digitalWrite(2,S_Led_GT[1+i]);
  delay(1000);
  }
}

void MedioPaso(){
  int i;
  int S_Led_MP[]={1,1,0,0,0,0,0,1,1,1,0,0,0,0};
  for (i=0;i<=7;i++){
  digitalWrite(5,S_Led_MP[i]);
  digitalWrite(4,S_Led_MP[6+i]);
  digitalWrite(3,S_Led_MP[4+i]);
  digitalWrite(2,S_Led_MP[2+i]);
  delay(1000);
  }
}