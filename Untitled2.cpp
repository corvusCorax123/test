#include <iostream>
#include <string>

class Meyve{
	public:
		std::string isim;
		std::string renk;
		float agirlik;
		
	private:
		int maksAdet;
		int sayi;
		
	public:
		Meyve(std::string i,std::string r,float a,int ma=50):
			isim(i),renk(r),agirlik(a),maksAdet(ma),sayi(0){}
		
		Meyve():
			isim("Elma"),renk("kirmizi"),agirlik(1.20),maksAdet(50),sayi(5){}	
		
	void arttir(){
		if(sayi +5 >= maksAdet){
			std::cout <<"Maksimum sayiya ulasildi\n";
		}
		else {
		sayi+=5;
		std::cout << "5 adet meyve eklendi\n";
		}
	}
	void azalt(){
		if(sayi -5 < 0){
			std::cout << "Elinizde meyve kalmadi\n";
		}
		else{
			sayi-=5;
			std::cout << "5 adet meyve eksiltildi\n";
		}
	}
	void setMaksAdet(int ma){
		maksAdet = ma;
		std::cout << "maksimum adet sayisi degistirildi";
	}
	int getMaksAdet() const {
		return maksAdet;
	}
	void yazdir(){
		std::cout << "\nMeyvenin Adi:" << isim << "\nRengi:" << renk << "\nAgirligi:" << agirlik << "\nMaksimum adet:" << maksAdet << "\nSayisi:" << sayi << std::endl; 
	}
};
int main(){
	Meyve meyve1 ("Armut","Yesil",0.40,15);
	Meyve meyve2 ("Muz","Sari",0.30,40);
	Meyve meyve3 ;
	meyve1.yazdir();
	meyve2.yazdir();
	meyve3.yazdir();
	meyve1.arttir();
	meyve1.arttir();
	meyve1.arttir();
	meyve2.azalt();
	meyve2.arttir();
	meyve2.arttir();
	meyve3.arttir();
	meyve3.azalt();
	meyve3.setMaksAdet(25);
	meyve1.yazdir();
	meyve2.yazdir();
	meyve3.yazdir();
}
