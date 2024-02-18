// Radar Control System.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

class Target {

public:
	Target(double x, double y) : x_(x), y_(y) {}
	double getX() const { return x_; }
	double getY() const { return y_; }

private:
	double x_;
	double y_;
};

class RadarSystem {

public:
	void detectTarget(const Target& target) {

		cout << "Target detected: X= " << target.getX() << " Y= " << target.getY() << endl;
		trackTarget(target);

	}

	void trackTarget(const Target& target) {

		cout << "Target being tracked: X= " << target.getX() << " Y= " << target.getY() << endl;


	}

};



int main()
{
	RadarSystem radar;
	Target target1(100.0, 200.0);
	radar.detectTarget(target1);
	Target target2(300.0, 150.0);
	radar.detectTarget(target2);
	return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
