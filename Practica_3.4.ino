 // INICIALIZACION 
void setup() {
  Serial.begin(9600);
}

void loop() {
  // VARIABLES Y OPERACIONES PARA CONVERTIR EL VOLTAJE A "OHMIOS"
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  float resistance = (voltage * 1000) / (5 - voltage);
  // IMPRECION DE RESULTADOS
  Serial.print("Resistencia= ");
  Serial.println(resistance);
  delay(1000);
}
