/*
 * Project name : Running LED
 * Created by   : Wayan Dadang
 */


// ini kita mendefinisikan semua pin LED 1- LED 8 pada pin 2 - 9.
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8
#define LED8 9

void setup() {
  // put your setup code here, to run once:

  // Disini kita akan memnjadikan pin 2-9 sebagai mode output, agar nanti bisa dikirim logika 1 dan 0 untuk menyelakan lampu secara bergantian
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT); // ini saya copy paste biar cepat ngetiknya
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT); 
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Sekarang kita akan menulis main routine programnya agar LED bisa menyala secara bergantian
  digitalWrite(LED1, HIGH); // LED 1 pada pin 2 kita nyalakn dahulu atau kira kirim logika 1 dulu
  digitalWrite(LED2, LOW);  // Sedangkan LED 2 - LED 8 kita matikan dahulu atau kirim logika 0
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  delay(300); // kita kasih waktu tunda selama 0,3 detik
  digitalWrite(LED1, LOW); // LED 1 pada pin 2 kita matikan agar sekarang LED 2 saja yang nyala
  digitalWrite(LED2, HIGH);  // Sedangkan LED 2 kita nyalakan atau kirim logika HIGH/1
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  delay(300);
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, HIGH); // Sekarang LED 3 kita kirim logika 1 biar nyala
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  delay(300);
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, HIGH); // Sekarang LED 4 kita kirim logika 1 biar nyala
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  delay(300);
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW); 
  digitalWrite(LED5, HIGH); // Sekarang LED 5 kita kirim logika 1 biar nyala
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  delay(300);
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW); 
  digitalWrite(LED5, LOW); 
  digitalWrite(LED6, HIGH); // Sekarang LED 6 kita kirim logika 1 biar nyala
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  delay(300);
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW); 
  digitalWrite(LED5, LOW); 
  digitalWrite(LED6, LOW); 
  digitalWrite(LED7, HIGH); // Sekarang LED 7 kita kirim logika 1 biar nyala
  digitalWrite(LED8, LOW);
  delay(300);
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW); 
  digitalWrite(LED5, LOW); 
  digitalWrite(LED6, LOW); 
  digitalWrite(LED7, LOW); 
  digitalWrite(LED8, HIGH); // Sekarang LED 8 kita kirim logika 1 biar nyala
  delay(300);
  

}
