// Constantes para los pines
const int PULSADOR = 35;
const int LedPin = 32;

// Variable para almacenar el estado del PULSADOR
int estado; 

void setup(){
    // PULSADOR configurado como entrada 
    pinMode(PULSADOR,INPUT);
    // LED configurado como salida 
    pinMode(LedPin,OUTPUT);
}

void loop(){
    // Se almacena el estado del pulsador
  estado = digitalRead(PULSADOR); 
    // Si la lectura del pulsador es HIGH (pulsado)...
  if  (estado == HIGH){
        // ... enciende el LED.
    digitalWrite(LedPin,HIGH);
      // En caso contrario (no pulsado)... 
  } else { 
        // Apaga el LED
        digitalWrite(LedPin,LOW); 
  }
}
