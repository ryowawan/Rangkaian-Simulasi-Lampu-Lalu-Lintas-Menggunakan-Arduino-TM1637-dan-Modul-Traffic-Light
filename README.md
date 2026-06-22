# Rangkaian-Simulasi-Lampu-Lalu-Lintas-Menggunakan-Arduino-TM1637-dan-Modul-Traffic-Light
➡️ Proyek ini mensimulasikan sistem lampu lalu lintas di dunia nyata menggunakan Arduino. Sistem ini tidak hanya menyalakan lampu Merah, Kuning, dan Hijau secara bergantian, tetapi juga menampilkan waktu hitung mundur (countdown) menggunakan modul layar 7-segment (TM1637) agar pengendara tahu kapan lampu akan berganti

# Komponen yang Dibutuhkan
- Arduino UNO
- Modul Traffic Light
- Modul TM1637 (Layar 7-Segment 4 Digit)
- Kabel Jumper

# Rangkaian
<img width="1960" height="1032" alt="wiring traffic light" src="https://github.com/user-attachments/assets/590d438c-3972-4079-9b0b-471b0e7494cc" />

# Alur Kerja Sistem
1️⃣ Fase Berhenti (Lampu Merah): Lampu merah menyala, layar menampilkan hitung mundur dari 20 hingga 1 detik. Setelah selesai, lampu merah mati

2️⃣ Fase Bersiap (Lampu Kuning): Lampu kuning menyala, layar menampilkan hitung mundur dari 10 hingga 1 detik. Setelah selesai, lampu kuning mati

3️⃣ Fase Jalan (Lampu Hijau): Lampu hijau menyala, layar menampilkan hitung mundur dari 10 hingga 1 detik. Setelah selesai, lampu hijau mati dan siklus kembali lagi ke lampu merah

# Hasil
<img width="1297" height="675" alt="traffic light" src="https://github.com/user-attachments/assets/971008ca-511b-4ede-b7af-9cb070e45cf8" />

