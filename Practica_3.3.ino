// VARIABLES
long valor; 
int Led1 =2;
int Led2 =3; 
int Led3 =4;
int Led4 =5;
int Led5 =6;
void setup() {
  // INICIALIZACION 
 Serial.begin(9600);   
Serial.println("Inicio de codigo - valores del potenciometro");
 // PINES DE SALIDA
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT); 
pinMode(Led4,OUTPUT);
pinMode(Led5,OUTPUT);
}
 // IMPRECION DE RESULTADOS
void loop() {
  valor = analogRead(A0);
  Serial.print("El valor es= "); 
  Serial.print(valor);
 // VARIACION DEL POTENCIOMETRO Y NUMERO DE LEDS A ENCENDER
  if(valor >= 0 && valor <=150)
  {
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,LOW);   
    digitalWrite(Led3,LOW);  
    digitalWrite(Led4,LOW);
    digitalWrite(Led5,LOW);
  }                           
   if(valor >= 150 && valor <=300)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,LOW);
    digitalWrite(Led3,LOW);
    digitalWrite(Led4,LOW);
    digitalWrite(Led5,LOW);
  }
   if(valor >= 300 && valor <=450)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,HIGH);
    digitalWrite(Led3,LOW);
    digitalWrite(Led4,LOW);
    digitalWrite(Led5,LOW);
  }
 if(valor >= 450 && valor <=600)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,HIGH);
    digitalWrite(Led3,HIGH);
    digitalWrite(Led4,LOW);
    digitalWrite(Led5,LOW);
  }
 if(valor >= 600 && valor <=750)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,HIGH);
    digitalWrite(Led3,HIGH);
    digitalWrite(Led4,HIGH);
    digitalWrite(Led5,LOW);
  }
 if(valor >= 750 && valor <=900)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,HIGH);
    digitalWrite(Led3,HIGH);
    digitalWrite(Led4,HIGH);
    digitalWrite(Led5,HIGH);
  }
}