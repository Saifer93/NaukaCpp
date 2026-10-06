#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int najwieksza = a;

    if (b > najwieksza) {
        najwieksza = b;
    }

    if (c > najwieksza) {
        najwieksza = c;
    }

    cout << najwieksza << '\n';

    return 0;
}
