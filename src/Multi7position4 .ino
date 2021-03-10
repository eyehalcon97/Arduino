/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// Creado por V. García 26.02.2014
//
// definimos los 7 segmentos y los asignamos a los pines
int A = 0;
int B = 1;
int C = 2;
int D = 3;
int E = 4;
int F = 5;
int G = 6;
int Dp = 7;

  /*
        F
     B     G
        A
     c     E
        D


  */
void reset(){
  delay(3000);
  digitalWrite(F, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(G, LOW);
  digitalWrite(Dp, LOW);

}
void punto(){
  digitalWrite(Dp, HIGH);
}
void cero(){

    digitalWrite(F, HIGH);
    digitalWrite(B, HIGH);

    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(G, HIGH);
  }

void uno(){
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);

  }
void dos(){
  digitalWrite(C, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(D, HIGH);
}

void tres(){

  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);

}

void cuatro(){

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);

}

void cinco(){

  digitalWrite(F, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);

}

void seis(){

  digitalWrite(F, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);

}

void siete(){
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);

  }

  void ocho(){

    digitalWrite(F, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(G, HIGH);
  }

  void nueve(){

    digitalWrite(F, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(G, HIGH);

  }
// Configuramos los pines.
void setup() {
  pinMode (A, OUTPUT);
  pinMode (B, OUTPUT);
  pinMode (C, OUTPUT);
  pinMode (D, OUTPUT);
  pinMode (E, OUTPUT);
  pinMode (G, OUTPUT);
  pinMode (F, OUTPUT);
  pinMode (Dp, OUTPUT);
}

// Y encendemos los segmentos.
void loop() {
cero();
reset();
uno();
reset();
dos();
reset();
tres();
reset();
cuatro();
reset();
cinco();
reset();
seis();
reset();
siete();
reset();
ocho();
reset();
nueve();
reset();
punto();
reset();
}
