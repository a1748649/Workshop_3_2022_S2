#include <iostream>
#include <string>
using namespace std;

void printer(int array[10][10]){
    int size = 10;
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){

            //Drops line if at end of row 
            if(j == 9){
                cout << array[i][j] << endl;
            }

            //Hits space if not at end of row
            else{
                cout << array[i][j] << " ";
            }
        }
    }
}