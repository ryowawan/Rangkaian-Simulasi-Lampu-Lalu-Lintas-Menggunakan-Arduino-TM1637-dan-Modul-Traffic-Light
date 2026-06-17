#include <Arduino.h>
// Mengimpor library untuk layar 7-segment TM1637
#include <TM1637Display.h> 

// Pin koneksi modul layar
#define CLK 6
#define DIO 7

// Variabel untuk menyimpan angka hitung mundur
unsigned int angka = 0;

// Membuat objek display
TM1637Display display(CLK, DIO);

// Mendefinisikan pin lampu LED
int ledmerah = 2;
int ledkuning = 3;
int ledhijau = 4;


void setup() {
  // Kecerahan maksimum layar
  display.setBrightness(0x0f); 
  
  // Mengatur pin LED sebagai OUTPUT
  pinMode(ledmerah, OUTPUT);
  pinMode(ledkuning, OUTPUT);
  pinMode(ledhijau, OUTPUT);
}

void loop() {
  // --- FASE LAMPU MERAH ---
  for (angka = 20; angka > 0; angka--) {
    display.showNumberDec(angka);  // Tampilkan angka saat ini
    digitalWrite(ledmerah, HIGH);  // Pastikan lampu merah menyala
    delay(1000);                   // Tahan tampilan dan lampu selama 1 detik penuh
    
    // Matikan lampu merah TEPAT setelah hitungan detik ke-1 selesai
    if(angka == 1) {
      digitalWrite(ledmerah, LOW);
    }
  }

  // --- FASE LAMPU KUNING ---
  for (angka = 10; angka > 0; angka--) {
    display.showNumberDec(angka);  // Tampilkan angka saat ini
    digitalWrite(ledkuning, HIGH); // Pastikan lampu kuning menyala
    delay(1000);                   // Tahan tampilan dan lampu selama 1 detik penuh
    
    // Matikan lampu kuning TEPAT setelah hitungan detik ke-1 selesai
    if(angka == 1) {
      digitalWrite(ledkuning, LOW);
    }
  }

  // --- FASE LAMPU HIJAU ---
  for (angka = 10; angka > 0; angka--) {
    display.showNumberDec(angka);  // Tampilkan angka saat ini
    digitalWrite(ledhijau, HIGH);  // Pastikan lampu hijau menyala
    delay(1000);                   // Tahan tampilan dan lampu selama 1 detik penuh
    
    // Matikan lampu hijau TEPAT setelah hitungan detik ke-1 selesai
    if(angka == 1) {
      digitalWrite(ledhijau, LOW);
    }
  }
 
}
