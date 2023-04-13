// VARIABLES
float resistenciaA=1000000;
float resistenciaB=100000;
// INICIALIZACION DEL PROGRAMA
void setup ()
{
Serial.begin (9600);
}
// OPERACION PARA CALCULAR VOLTAJE
void loop ()
{
float Vol=(analogRead(0)*5)/1023.0;
float SUMA=(Vol/(resistenciaB/(resistenciaA+resistenciaB)));
// IMPRIMIR RESULTADO Y ESPECIFICAR QUE RESULTADO ES (VOLTAJE)
Serial.print(SUMA) ;
Serial.print(" Voltaje") ;
Serial.println();
delay(500);
}