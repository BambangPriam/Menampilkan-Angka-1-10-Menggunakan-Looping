#include <iostream>

using namespace std;

int main()
{   cout << "\n Menampilkan angka 1-10 menggunakan while loop \n"<<endl;
    int a=1;
    while(a<=10){
    cout << a <<endl;
    a++;
    }

    cout << "\n Oke sekarang kita pakai yang do while loop \n"<< endl;

    int b=1;
    do{ cout << b<< endl;
    b++;}
    while(b<=10);

    cout << " Lanjut pakai yang for loop "<< endl;
    for(int c=1; c<=10; c++){
        cout << c << endl;
    }


    cout << "Selesai" << endl;


    return 0;
}
