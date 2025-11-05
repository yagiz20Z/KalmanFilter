# Python ve C ile Kalman Filtresi Uygulaması

Bu proje, bir Excel dosyasındaki gürültülü verileri okumak, bu verileri C ile yazılmış bir 1D Kalman filtresinden geçirmek ve sonuçları tekrar Python'da görselleştirmek için süreçler arası iletişimi (IPC) kullanan bir örnek uygulamadır.


Uygulama 3 ana aşamadan oluşur:

1.  Python ile excel verileri okunur
2.  C'de veriler filtreden geçer 
3.  C'da işlenen veriler Python ile çekilir ve aktarılır
