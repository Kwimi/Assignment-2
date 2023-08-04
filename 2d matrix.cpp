#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int> > a(2, vector<int>(2));
int sum[6];
int k = 0;
cout<<"enter the elements of this 2d matrix row by row respectively :\n \n";
// first loop for entering the elements of the matrix
for (int i =0; i<2; i++){
	for (int j =0; j<2; j++){
		
		cin>> a[i][j];
	}
	
}
cout<<"the matrix entered is :\n \n";

// second  loop for displaying the matrix
for (int i =0; i<2; i++){
	for (int j =0; j<2; j++){
		
		cout<<a[i][j]<<"\t";
	}
	cout<<"\n";
}
	cout<<"\n \n";
sum[0]=	a[0][0] + a[0][1];
sum[1]=	a[1][0] + a[1][1];
sum[2]=	a[0][0] + a[1][0];
sum[3]=	a[0][1] + a[1][1];
sum[4]=	a[0][0] + a[1][1];
sum[5]=	a[0][1] + a[1][0];
	
//  loop for checking if diagnals, rows, columns are equal to be called a square magic matrix 
	for(int i =0; i<6; i++){
		
		if (sum[0] != sum[i]){
			k = 1;
			break;
		}
	}

if (k == 0){
	
	cout<<"the matrix is square magic!!";
	
} else{
	cout<<"the matrix is not  square magic!!";
}

	return 0;
}
