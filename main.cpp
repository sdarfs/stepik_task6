//Дан прямоугольный массив размером n×m. 
//Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.

#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int d[m][n];
    //input numbers to massive
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j++) {
            d[j][n-1-i]=a[i][j];
        }
    }
    for(int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j++) {
          cout<<d[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}

