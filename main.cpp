#include <iostream>
using namespace std;

int main() {
    string makanan[3] = {"soto", "rawon", "pecel"};
    int harga[3] = {15000, 20000, 10000};
    int porsi[3];
    int total;
    int totalSemua = 0;
    int i = 0;

    do {
        cout << "makanan" << endl;
        cout << makanan[i] << endl;
        cout << "harga" << endl;
        cout << harga[i] << endl;
        cout << "porsi: ";
        cin >> porsi[i];

        total = harga[i] * porsi[i];
        totalSemua += total;

        cout << "total" << endl;
        cout << total << endl;
        cout << "********************" << endl;

        i++;
    } while (i < 3);

    string minuman[2] = {"teh", "kopi"};
    int hargaMinuman[2] = {3000, 5000};
    int porsiMinuman[2];

    i = 0;

    do {
        cout << "minuman" << endl;
        cout << minuman[i] << endl;
        cout << "harga" << endl;
        cout << hargaMinuman[i] << endl;
        cout << "porsi: ";
        cin >> porsiMinuman[i];

        total = hargaMinuman[i] * porsiMinuman[i];
        totalSemua += total;

        cout << "total" << endl;
        cout << total << endl;
        cout << "********************" << endl;

        i++;
    } while (i < 2);

    cout << "Total semua = " << totalSemua << endl;

    return 0;
}
