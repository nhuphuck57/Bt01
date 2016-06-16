#include <iostream>
#include <vector>
using namespace std;

 void tinhTien(int minutes){
 	
 	int arrayMin[3];
 	int arrayCost[3] = {600, 400, 200};
 	int contactCost = 25000;
 	int sum = contactCost;
 	
 	//khoi tao mang.
 	for(int i; i < 3; i++){
		arrayMin[i]=0; 
	}
 	
 	//kiem tra so phut
 	if(minutes <= 50){
	 	arrayMin[0] = minutes;
	}
 	else{
 		if(minutes > 50 && minutes <=200){
			arrayMin[0] = 50;
			arrayMin[1] = minutes - 50;
		}
		else{
			arrayMin[0] = 50;
			arrayMin[1] = 150;
			arrayMin[2] = minutes - 200;
		}
	}
	
	//tinh tong
	for(int i=0; i < 3; i++){
		sum += arrayMin[i] * arrayCost[i];
	}
	
	//in chuoi ket qua
	cout << contactCost;
	for(int i=0; i<3; i++){
		if(arrayMin[i] !=0){
			cout << " + " << arrayMin[i] << "*" << arrayCost[i];
		}
	}
	cout << " = " << sum;
}
	 
int main(){
	int minutes;
	cout << "Nhap so phut su dung!\n";
	cin >> minutes;
	tinhTien(minutes);
}

