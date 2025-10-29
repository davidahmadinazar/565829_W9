#include <iostream>
using namespace std;

// Fungsi find() menerima satu bilangan dan memprosesnya
int find(int num) {
    int first, second;

    first = num * num;       // langkah 1: kuadratkan num
    second = first + num;    // langkah 2: tambahkan hasil kuadrat dengan num

    if (second > 100)        // jika hasil penjumlahan lebih besar dari 100
        num = first / 10;    // maka num diubah menjadi hasil bagi first / 10
    else
        num = first / 20;    // jika tidak, num = first / 20

    return num + 2;          // kembalikan hasil num + 2
}

// Fungsi discover() menjumlahkan kuadrat dari angka "one" hingga "two - 1"
int discover(int one, int two) {
    int secret = 0;

    for (int i = one; i < two; i++)  // lakukan perulangan dari one sampai sebelum two
        secret = secret + i * i;     // tambahkan hasil kuadrat setiap i ke secret

    return secret;                   // kembalikan total hasil penjumlahan kuadrat
}

int main() {
    int x, y;

    // a. Panggil find(15)
    // first = 15*15 = 225
    // second = 225+15 = 240 > 100 → num = 225/10 = 22
    // return 22+2 = 24
    cout << find(15) << endl;    // Output: 24

    // b. discover(3, 9)
    // hasil = 3²+4²+5²+6²+7²+8² = 199
    cout << discover(3, 9) << endl;  // Output: 199

    // c. find(10) dan discover(10, find(10))
    // find(10): 10²=100; 100+10=110>100 → num=100/10=10 → return 12
    // discover(10,12): 10²+11²=100+121=221
    cout << find(10) << " " << discover(10, find(10)) << endl;  // Output: 12 221

    // d. discover(y, x)
    // y=8, x=12 → 8²+9²+10²+11² = 64+81+100+121 = 366
    x = 12; 
    y = 8;
    cout << discover(y, x) << endl;  // Output: 366

    return 0;
}
