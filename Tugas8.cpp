#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "masukan n: "; cin >> n;

    for (int i = 1; i <= n; i++){
        //spasi
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= i + (i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
return 0;
}
