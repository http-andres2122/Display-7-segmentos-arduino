/*

 *****CODIGO RECREADO POR y ESCRITO POR Ivan Andres Barbosa Beltran*****
 -SOLO FUNCIONA CON DISPLAY 7 SEGMENTOS CATODO COMUN 
 -SE IMPLEMENTA ADEMAS DEL ARDUINO Y LOS JUMPERS ES OBLIGATORIO IMPLEMENTAR
 UNA RESITENCIA DE ENTRE 120 Y 250 OHMIOS A CADA CONEXION DEL DISPLAY 7 SEGMENTOS
 **PROGRAMADO EN ARDUINO UNO Y SOLO COMPATIBLE CON ARDUINO UNO**
 
*/

const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5; //ESTABLECEMOS LAS VARIABLES
const int e = 6;
const int f = 7;
const int g = 8;

  void setup() {
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT); //CONFIGURAMOS LAS VARIABLES COMO SALIDAS
    pinMode(e, OUTPUT); 
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
  } 
//AHORA ESTABLECEMOS EL CODIGO
  void loop() {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);//NUMERO CERO
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    delay(1000);//RETARDO
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);//NUMERO UNO
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);//RETARDO 
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);//NUMERO DOS
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(1000);//RETARDO
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);//NUMERO TRES
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(1000);//RETARDO
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);//NUMERO CUATRO
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(1000);//RETARDO
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);//NUMERO CINCO
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(1000);//RETARDO
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);//NUMERO SEIS
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(1000);//RETARDO
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);//NUMERO SIETE
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(1000);//RETARDO
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);//NUMERO OCHO
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(1000);//RETARDO
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);//NUMERO NUEVE
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(2000);//RETARDO Y DE AQUI SALTA AL CERO Y SE REPITE EL CICLO      
  }
