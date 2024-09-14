#include <iostream>
#include <stack>

using namespace std;

void desimalKeBiner(int n) {
    stack<int> biner;
    
    // Proses konversi desimal ke biner
    while (n > 0) {
        biner.push(n % 2);
        n = n / 2;
    }
    
    // Menampilkan hasil konversi
    cout << "Bilangan biner: ";
    while (!biner.empty()) {
        cout << biner.top();
        biner.pop();
    }
    cout << endl;
}

int main() {
    int desimal;
    
    // Input bilangan desimal dari pengguna
    cout << "Masukkan bilangan desimal: ";
    cin >> desimal;
    
    // Panggil fungsi untuk konversi
    desimalKeBiner(desimal);
    
    return 0;
}
