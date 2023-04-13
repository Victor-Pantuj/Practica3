// VARIABLES
int P1 = A0;
int P2 = A1;
int P3 = A2;
int Lectura1;
int Lectura2;
int Lectura3;
int rojo = 3;
int verde = 5;
int azul = 6;
// INICIALIZACION
void setup()
{
  Serial.begin(9600);
  //PINES A UTILIZAR
 pinMode(P1,INPUT);
 pinMode(P2,INPUT); 
 pinMode(P3,INPUT);
   pinMode(rojo,OUTPUT);
   pinMode(verde,OUTPUT);
   pinMode(azul,OUTPUT);
}

void loop()
{
 // ANALICIS DE INFORMACION EN PINES
 Lectura1 = analogRead(P1)/4;
  analogWrite(rojo,Lectura1);
  delay(100);
   Lectura2 = analogRead(P2)/4;
  analogWrite(verde,Lectura2);
  delay(100);
   Lectura3 = analogRead(P3)/4;
  analogWrite(azul,Lectura3);
  delay(1000);
  //IMPRECION DE RESULTADOS
  Serial.print(" R: ");
  Serial.print( Lectura1);
  Serial.print("  A: ");
  Serial.print( Lectura2);
    Serial.print("  V: ");
  Serial.println( Lectura3);
}