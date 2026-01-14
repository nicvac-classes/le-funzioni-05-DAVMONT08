#include <iostream>
#include <ctime>

using namespace std;


string toString (double);
int toInt (string);
double toDouble (string);
int maxvettore(int n, int v[]);

void ordinavettore(int n, int v[]);

void riempivettore(int n, int v[]);

void visualizzavettore(int n, int v[], bool flag);

int main() {
    int n;
    bool flag;

    cout << " inserisci numeri da generare " << endl;
    cin >> n;
    int v[n];
    int w[n];

    riempivettore(n, v);
    riempivettore(n, w);
    flag = false;
    visualizzavettore(n, v, flag);
    visualizzavettore(n, w, flag);
    maxvettore(n, v);
    maxvettore(n, w);
    ordinavettore(n, v);
    ordinavettore(n, w);
    return 0;
}

int maxvettore(int n, int v[]) {
    int max, i, imax;

    max = v[0];
    imax = 0;
    i = 0;
    while (i < n) {
        if (v[i] > max) {
            max = v[i];
            imax = i;
        }
        i = i + 1;
    }
    cout << " valore max " << max << " si trova nella posizione " << imax << endl;
    
    return max;
}

void ordinavettore(int n, int v[]) {
    int i, j, t;

    i = 0;
    while (i < n) {
        j = 0;
        while (j <= n - 2 - i) {
            if (v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

void riempivettore(int n, int v[]) {
    int i;

    i = 0;
    while (i < n) {
        v[i] = rand() % (n * 10);
        i = i + 1;
    }
}

void visualizzavettore(int n, int v[], bool flag) {
    int i, indice;

    i = 0;
    while (i < n) {
        if (flag == true) {
            cout << v[i] << endl;
            indice = i;
        } else {
            cout << v[i] << endl;
        }
        i = i + 1;
    }
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}


}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
