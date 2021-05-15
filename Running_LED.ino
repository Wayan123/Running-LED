/*
 * Project name : Running LED
 * Creator by   : Wayan Dadang
 */

// Pin LED yang kita gunakan dari pin 2-9 jadi total 8 LED, ya.

// Kita inisialisasi variabel global dulu disini.

int pinLED; //inisialisasi pin 2-9
int i; // ini varibel dipakai pada for untuk menyelakan ke-8 LED secara bergantian, jadi lebih pendek programnya.

void setup() {
  // put your setup code here, to run once:

  // Sekarang kita akan menerjemahkan pin LED-nya agar nantinya bisa dikenali oleh program.
  for(pinLED = 2; pinLED <=9; pinLED++){ // disini maksudnya pinmode output dimulai dari pin 2 bukan dari pin 0, dan berhenti di pin 9, jadi hanya pin 2-9 saja yang dijadikan mode output
    pinMode(pinLED, OUTPUT);    // pada blok ini kita menerjemahkan bahwa pin LED 2-9 sebagai pin OUTPUT, jadi nanti ketika kita kirim logika 1 LED akan mneyala.
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  // Nah sekarang kita akan membuat main routine-nya, dimana disini kita akan menyalakan 8  buah led secara bergantian menggunakan for,
  // variabel i sebagai pengganti LED
  for(i=2;i<=9;i++){ // LED dikirim logika 1 dan 0 hanya pada pin 2-9 saja secara bergantian.
    digitalWrite(i, HIGH); // kirim logika 1 agar LED bisa nyala
    delay(300); // kasih waktu tunda selama 0,3 detik
    digitalWrite(i, LOW); // Kirim logika 0 agar LED mati, tujuannya adalah agar LED pertama nyala, tapi LED lainnya mati, dan ketika LED 2 nyala, dan LED lainnya mati.
    // delay(300); // kasih waktu tunda selama 0,3 detik
  }

}
