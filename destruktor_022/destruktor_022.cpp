#include <iostream> 
using namespace std; 

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka(); //Destructor 
	void cetakData();
	void isiData();
}; 
//Definisi member Functon 
angka::angka(int i) { //construktor 
	panjang = i;
	arr = new int[i];
	isiData();
} 

angka::~angka() { //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
	cout << endl;
} 

int main() {
	angka belajarcpp(3); //constructor Dipanggil1
	angka* ptrbelajarcpp = new angka(5); //constructor Dipanggil
	delete ptrbelajarcpp; //Destructor Dipanggil 

	return 0;
}//Destructor Dipanggil 
