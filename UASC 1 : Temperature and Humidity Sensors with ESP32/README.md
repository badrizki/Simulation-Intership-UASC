# Temperature and Humidity Sensors with ESP32
_Sebuah perangkat yang berfungsi untuk menghitung suhu dan kelembapan lingkungan sekitar dengan perangkat elektronik. Pada rangkaian ini,saya menggunakan komponen DHT22 sebagai sensor baca suhu dan kelembapan,Buzzer dan LED sebagi indikator. Pada ESP32 diprogram untuk membaca suhu dan kelembapan dengan ketentuan suhu diantara 25-30 derajat celcius dan kelembapan berada di 70%-90%,jika suhu dan kelembapan berada diatas ataupun dibawah ketentuan tersebut maka buzzer dan led akan menyala._

# How To Run
Untuk dapat menjalan program tersebut,lakukan :
1. Buka file wokwi-project.txt
2. Salin link https://wokwi.com/projects/400056047283779585
3. Buka browser lalu klik paste
4. Setelah muncul rangkaian ESP32 pada wokwi,klik "start the simulation"
5. Atur suhu dan kelembapan dengan klik komponen DHT22
6. Sesuaikan suhu dan kelembapan
7. Apabila suhu kurang dari 25 dan lebih dari 30 derajat,maka buzzer dan LED akan menyala
8. Begitu juga dengan kelembapan,Apabila kurang dari 70% dan lebih dari 90% maka akan menyala
9. jika suhu diantara 25-30 dan kelembapan diantara 70%-90% maka buzzer dan LED akan mati.
