#include <bits/stdc++.h>

using namespace std;
int main() {
    int row, col;
    cin >> row;

  
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <=2*row-1; j++) {
            if ( j >row-i&&j<=row+i-1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


//       *      
//      ***     
//     *****    
//    *******   
//   *********  
//  *********** 
// *************
