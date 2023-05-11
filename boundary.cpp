#include <iostream>

using namespace std;

// Fungsi yang akan diuji
int calculateSquareRoot(int n) {
    if (n < 0) {
        throw "Angka harus non-negatif!";
    }

    // Perhitungan akar kuadrat
    int hasil = 0;
    while (hasil * hasil <= n) {
        hasil++;
    }

    return hasil - 1;
}

// Fungsi untuk melakukan pengujian Boundary Value Analysis
void boundaryValueAnalysisTest() {
    // Nilai batas bawah dan batas atas
    int lowerBound = 0;
    int upperBound = 100;

    // Nilai-nilai dalam setiap kategori
    int validValues[] = { lowerBound, lowerBound + 1, upperBound - 1, upperBound };
    int invalidValues[] = { lowerBound - 1, upperBound + 1 };

    // Pengujian untuk setiap nilai valid
    cout << "Pengujian nilai valid:\n";
    for (int i = 0; i < sizeof(validValues) / sizeof(validValues[0]); i++) {
        int value = validValues[i];
        try {
            int result = calculateSquareRoot(value);
            cout << "Akar kuadrat dari " << value << " adalah " << result << endl;
        }
        catch (const char* message) {
            cout << "Error: " << message << endl;
        }
    }

    // Pengujian untuk setiap nilai invalid
    cout << "\nPengujian nilai invalid:\n";
    for (int i = 0; i < sizeof(invalidValues) / sizeof(invalidValues[0]); i++) {
        int value = invalidValues[i];
        try {
            int result = calculateSquareRoot(value);
            cout << "Akar kuadrat dari " << value << " adalah " << result << endl;
        }
        catch (const char* message) {
            cout << "Error: " << message << endl;
        }
    }
}

// Fungsi utama
int main() {
    boundaryValueAnalysisTest();
    return 0;
}

