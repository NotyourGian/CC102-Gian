#include <iostream>

using namespace std;

int main() {
    int rows = 7; 
    int cols = 7;

    
    for (int i = 0; i < rows; i++) {     
        for (int j = 0; j < cols; j++) {  
            if ((i == 0 && (j == 3)) || 
                (i == 1 && (j == 2)) ||
                (i == 2 && (j == 1)) || 
                (i == 3 && (j == 0 || j == 6)) ||
                (i == 4 && (j == 5)) || 
                (i == 5 && (j == 4)) ||
                (i == 6 && (j == 3))) {
                cout << "# ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    return 0;
}