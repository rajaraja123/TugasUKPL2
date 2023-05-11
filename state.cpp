#include <iostream>

using namespace std;

// Enumerasi untuk status aplikasi
enum AppState {
    START,
    LOGGED_IN,
    LOGGED_OUT,
    EXIT
};

// Fungsi untuk mengubah status aplikasi
void changeState(AppState& state, AppState nextState) {
    cout << "Mengubah status aplikasi dari ";

    // Cetak status saat ini
    switch (state) {
        case START:
            cout << "START";
            break;
        case LOGGED_IN:
            cout << "LOGGED_IN";
            break;
        case LOGGED_OUT:
            cout << "LOGGED_OUT";
            break;
        case EXIT:
            cout << "EXIT";
            break;
    }

    // Cetak status berikutnya
    cout << " ke ";
    switch (nextState) {
        case START:
            cout << "START";
            break;
        case LOGGED_IN:
            cout << "LOGGED_IN";
            break;
        case LOGGED_OUT:
            cout << "LOGGED_OUT";
            break;
        case EXIT:
            cout << "EXIT";
            break;
    }

    cout << endl;

    state = nextState;
}

// Fungsi untuk melakukan pengujian State Transition Testing
void stateTransitionTest() {
    AppState state = START;

    // Transisi aplikasi yang diuji
    changeState(state, LOGGED_IN);
    changeState(state, LOGGED_OUT);
    changeState(state, LOGGED_IN);
    changeState(state, EXIT);
    changeState(state, START);
    changeState(state, LOGGED_OUT);
    changeState(state, LOGGED_IN);
    changeState(state, EXIT);
}

// Fungsi utama
int main() {
    stateTransitionTest();
    return 0;
}
