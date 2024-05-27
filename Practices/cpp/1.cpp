#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout <<"Enter Numbers of Rows ";cin >> a;
	cout <<"Enter Numbers of Columns ";cin >> b;	
	int matrix[a][b];
	
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
 				cin>> matrix[i][j] ;
		}
		 cout << endl;
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
 				cout<< matrix[i][j]<<" " ;
		}
		 cout << endl;
	}

}