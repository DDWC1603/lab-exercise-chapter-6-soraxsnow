//this is not a complete program. please finish the program. thank you.


#include <iostream>
using namespace std;

int mark[5]={19,10,8,17,9};
int main()
{
	int x;
	//insert different value to the third element
	//tukar third element tu dengan value lain
	mark[3]=12;
	
	cout << "Insert sub 3th element" << endl;
	cin >> mark[3];
	
	cout << "Insert x" << endl;
	cin >> mark[x];

	//print the first element of the array
	cout << "First element of the array " << mark[0] << endl;
	
	//print the ith element of the array
	cout << "The Xth element of the array " << mark[x] << endl;

}
