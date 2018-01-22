//Ahmad Fahmi bin Azlan
//A17DW4144
//dapatkan 10 input dan keluarkan hasil tambahnya.
//hasilkan program anda dengan menggunakan array
using namespace std;
#include <iostream>

int main()
{

int array[10];
int sum=0;
int x;

cout<<"Enter the 10 numbers:"<<endl;
for(x=0;x<10;x++)
{
 cout <<endl<< x+1 << ". Enter your number" <<endl;
    cin>>array[x];

    sum=sum+array[x];

}


cout<<"the sum of the 10 numbers : "<<sum<<endl;

std::cin.get();
}
