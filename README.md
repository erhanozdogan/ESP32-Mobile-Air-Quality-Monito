# ESP32 Tabanlı Mobil Hava Kalitesi İzleme Sistemi (IoT)

Bu proje, **TÜBİTAK 2209-A** kapsamında geliştirilen, mobil olarak hava kalitesi verilerini (CO, PM2.5, PM10, Sıcaklık, Nem) toplayıp, **ESP32 Web Server** üzerinden yayınlayan ve SD karta loglayan bir IoT sistemidir.

📄 [TÜBİTAK Proje Sonuç Raporunu İncelemek İçin Tıklayın (PDF)](MHKi.pdf)

## 🎯 Proje Özeti
* **Amaç:** Hava kirliliği verilerinin düşük maliyetli sensörlerle toplanması ve web tabanlı izlenmesi.
* **Donanım:** ESP32 (Ana İşlemci), SGP40, MQ-135.
* **Yazılım:** C++ (Arduino IDE), HTML/CSS (Web Arayüzü), I2C & SPI Protokolleri.

## 📸 Sistemden Görüntüler

### 1. Web Arayüzü (Web Server)
ESP32 üzerinde çalışan asenkron web sunucusu ile verilerin anlık takibi:
![Web Arayüzü](web_arayuz.jpg)

### 2. Devre Şeması
Sistemin bağlantı diyagramı:
![Devre Şeması](devre_semasi.jpg)

## 👨‍💻 Geliştirici Notu
Bu proje, Mekatronik Mühendisliği altyapısı ile Bilgisayar Bilimleri (Gömülü Sistemler & IoT) disiplinlerinin birleştirildiği uygulamalı bir çalışmadır.
