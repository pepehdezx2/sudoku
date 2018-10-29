//
//  main.cpp
//  sudoku
//
//  Created by Pepe Hdez hdez on 8/9/18.
//  Copyright © 2018 Pepe Hdez hdez. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int sudoku[9][9];
    int x, conta, contb;
    for (int i=0; i<9; i++){
        for (int c=0; c<9; c++){
            cin >> x;
            sudoku[i][c]=x;
        }
    }
    for (int i=0 ; i<9; i++){
        for (int c=0; c<9; c++){
            for (int j=0; j<9; j++){
                for (int k=0; k<9; k++){
                    if (c==k){
                        k++;
                    }
                    else{
                        if (sudoku[i][c]==sudoku[i][k]){
                            cout << "NO" << endl;
                            i=9;
                            c=9;
                        }
                    }
                }
                if (i==j){
                    j++;
                }
                else{
                    if (sudoku[i][c]==sudoku[j][c]){
                        cout << "NO" << endl;
                        i=9;
                        c=9;
                    }
                }
            }
            conta=c;
        }
        contb=i;
    }
    if (conta==8 && contb==8){
        bool x=true;
        for(int i=0; i<9; i++){
            int a, b, c;
            int matin[9];
            a=(i/3)*3;
            b=(i%3)*3;
            c=0;
            for (int j=a; j<a+3; j++){
                for (int k=b; k<b+3; k++){
                    for (int r=0; r<c; r++){
                        if (matin[r]==sudoku[j][k]){
                            x=false;
                        }
                    }
                    matin[c]=sudoku[j][k];
                    c++;
                }
            }
        }
        if (x==true){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

