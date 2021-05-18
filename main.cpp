#include <iostream>

using namespace std;

int main()
{
    int linha, coluna, cor = 2;
    cin >> linha;
    cin >> coluna;
    if (linha%2 == 0){
        if (coluna%2 == 0){
            cor = 1;
        }else{
        cor = 0;
        }
    }else{
    if (coluna%2 != 0){
        cor = 1;
    }else{
    cor = 0;
    }
    }
    cout << cor <<endl;
    return 0;
}
