#include <iostream>
//#include <vector>
using namespace std;

	void inFibonacci(int value){
		int arrayFib[100];
		arrayFib[0] = 1;
		arrayFib[1] = 1;
		arrayFib[2] = 2;
		int count = 2;
		int sum = 0;
		
		//kiem tra 
		while(arrayFib[count] < value){
			count++;
			arrayFib[count] = arrayFib[count-2] + arrayFib[count-1];
		}
		
		//in chuoi
		for(int i=0; i<count; i++){
			cout << arrayFib[i] << "\t";
			sum += arrayFib[i];
		}
		
		//tong
		cout << "\nSum:" << sum;
	}	
int main(){
	int value;
	cout << "So max trong day Fibo! \n";
	cin >> value;
	inFibonacci(value);
	return 0;
	}
