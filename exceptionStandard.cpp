#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awa; Program" << endl; // penanda 1:....
    try {
        array<int, 3> data = { 10, 20, 30};
        //int data[3] = { 10, 20, 30 }
        //pesan array integer dengan 3 elemen
        cout<<data.at(5) << endl;
        //memanggil array dengan elemen ke 5
    }
    catch (exception& e) {
        //penangkapan menggunakan objek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/

    }
 