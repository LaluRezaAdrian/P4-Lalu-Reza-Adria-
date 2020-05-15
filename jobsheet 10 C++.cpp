#include <iostream>
using namespace std;

main (){
	char matrik1 [3][3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << "Masukkan nilai matrik " << i << "," << j << " = ";
			cin >> matrik1[i][j];
		}
	}
	cout << endl;
	cout<<"akhiran nim 3 mahasiswa = "<<endl;
	for (i=0; i< 3; i++){
		for (j = 0; j < 3; j++){
			
			cout<<matrik1[i][j]<<" ";
		}
		cout << endl;
	}
}
