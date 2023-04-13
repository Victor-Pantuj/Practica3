// VaARIABLES
int POT  = A0;
int Lectura;
int led =3;
// INICIALIZACION DEL PROGRAMA Y PINES A UTILIZAR
void setup()
{
  Serial.begin(9600);
 pinMode(POT,INPUT);
   pinMode(led,OUTPUT);
}
// PROCESO DE ANALIZACION HE IMPRECION DE RESULTADOS EN EL MONITOR CERIAL 
void loop()
{
 Lectura = analogRead(POT)/4;
  analogWrite(led,Lectura);
  Serial.println(Lectura);
  delay(100);   
}
