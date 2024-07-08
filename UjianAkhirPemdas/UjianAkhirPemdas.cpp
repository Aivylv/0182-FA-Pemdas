#include <iostream>
using namespace std;


class MasukUniversitas
{
protected:
    int uangPendaftaran, uangSemesterPertama, uangBangunan, totalBiaya;
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
	}
	virtual void namaJalurMasuk() { return; }
	virtual void hitungTotalBiaya() { return; }
	virtual void tampilkanTotalBiaya() { return; }
	virtual void input() { return; }

		void setUangPendaftaran(int nilai) {
			this->uangPendaftaran = nilai;
		}
		float getUangPendaftaran() {
			return uangPendaftaran;
		}

		void setUangSemesterPertama(int nilai) {
			this->uangSemesterPertama = nilai;
		}
		float getUangSemesterPertama() {
			return uangSemesterPertama;
		}

		void setUangBangunan(int nilai) {
			this->uangBangunan = nilai;
		}
		float getUangBangunan() {
			return uangBangunan;
		}

		void setHitungTotalBiaya(int nilai) {
			this->totalBiaya = nilai;
		}
		float getHitungTotalBiaya() {
			return totalBiaya;
		}	
};
class SNBT : public MasukUniversitas {
public:
	void namaJalurMasuk() override {
		cout << "SNBT" << endl;
	}
	void input() override {
		cout << "Masukkan uang pendaftaran: ";
		cin >> uangPendaftaran;
		cout << "Masukkan uang semester pertama: ";
		cin >> uangSemesterPertama;
		cout << "Masukkan uang bangunan: ";
		cin >> uangBangunan;
	}
	void hitungTotalBiaya() override {
		totalBiaya = uangPendaftaran + uangSemesterPertama;
	}
	void tampilkanTotalBiaya() override {
		cout << "Total Biaya: " << totalBiaya << endl;
		//gatau kategori mahal, sedang, atau murahnya T_T
	}
};

class SNBP : public MasukUniversitas {
public:
	void namaJalurMasuk() override {
		cout << "SNBP" << endl;
	}
	void input() override {
		cout << "Masukkan uang pendaftaran: ";
		cin >> uangPendaftaran;
		cout << "Masukkan uang semester pertama: ";
		cin >> uangSemesterPertama;
	}
	void hitungTotalBiaya() override {
		totalBiaya = uangPendaftaran + uangSemesterPertama;
	}
	void tampilkanTotalBiaya() override {
		cout << "Total Biaya: " << totalBiaya << endl;
		//sama kaya tadi, gatau mana yang termasuk murah atau mahal, harusnya ditulis di soalnya ga sih
	}
};

int main()
{
	//maaf kehabisan waktu huhu sedihT_T
}