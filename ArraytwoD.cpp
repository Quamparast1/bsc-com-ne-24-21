#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    int c = 0;
    cout<<" Enter the number of rows(max 3) :";
    cin>>rows;

    cout<<" Enter the number of column(max 3) :";
    cin>>columns;
     double** a = new  double*[rows];
    for (int i = 0; i < rows; i++) {
        a[i] = new double[columns]; 
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            a[i][j] = ++c; 
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        if (a[i] != nullptr) {
            delete[] a[i];
        }
    }
    if (a != nullptr) {
    delete[] a;
    } 
    return 0;
}
        