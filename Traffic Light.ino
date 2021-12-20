int R1 = 11;      /** ket: R = lampu merah ;**/
int Y1 = 12;      /** ket: Y = lampu kuning ;**/
int G1 = 13;      /** ket: G = lampu hijau ;**/
int R2 = 10;
int Y2 = 9;
int G2 = 8;
int R3 = 7;
int Y3 = 6;
int G3 = 5;
int R4 = 2;
int Y4 = 3;
int G4 = 4;

void setup() {
  pinMode(R1,OUTPUT);
  pinMode(Y1,OUTPUT);
  pinMode(G1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(Y2,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(Y3,OUTPUT);
  pinMode(G3,OUTPUT);
  pinMode(R4,OUTPUT);
  pinMode(Y4,OUTPUT);
  pinMode(G4,OUTPUT);
  
}


void loop(){
  digitalWrite(G1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);
  delay(7000);
  digitalWrite(G1, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(Y1, HIGH);
  digitalWrite(Y3, HIGH);
  delay(3000);
  digitalWrite(Y1, LOW);
  digitalWrite(Y3, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(G3, HIGH);
  delay(7000);
  digitalWrite(G3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(Y3, HIGH);
  digitalWrite(Y4, HIGH);
  delay(3000);
  digitalWrite(Y3, LOW);
  digitalWrite(Y4, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(G4, HIGH);
  delay(7000);
  digitalWrite(G4, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(Y4, HIGH);
  digitalWrite(Y2, HIGH);
  delay(3000);
  digitalWrite(Y4, LOW);
  digitalWrite(Y2, LOW);
  digitalWrite(R4, HIGH);
  digitalWrite(G2, HIGH);
  delay(3000);
  digitalWrite(R1, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(Y1, HIGH);
  digitalWrite(Y2, HIGH);
  delay(3000);
  digitalWrite(Y2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(Y1, LOW);
}
