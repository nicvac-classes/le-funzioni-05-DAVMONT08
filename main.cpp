#include <iostream>
#include vector
#include <ctime>

using namespace std;

string  (double);
int  (string);
double (string);
void (int n, int v[]);

int main() {
    srand(time(0));   
    
    int n, i;

    n = 3;
    int v[n];
    int w[n];

    i = 0;
    while (i < n) {
        v[i] = rand() % (n * 10 + 1);
        w[i] = rand() % (n * 10 + 1);
        i = i + 1;
    }
    ordina(n, v);
    ordina(n, w);
    return 0;
}

void ordina(int n, int v[]) {
    int i, j, t;

    i = 0;
    while (i < n) {
        j = 0;
        while (j <= n - 2) {
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



}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
