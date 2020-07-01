
#include "Triangle.h"

int main() {

    int x,y,z;
    int result;
    enum triangleType{Scalene,Isosceles,Equilateral, None};
    
    cout <<  " Please give me the three lengths of a triangle :) " << endl;
    
    cin >> x;
    cin >> y;
    cin >> z;
    result = test(x,y,z);
    
    triangleType ans = triangleType(result);
    
    switch (ans){
            
        case Scalene:
            cout << "Your triangle is a Scalene!" << endl;
            break;
        case Isosceles:
            cout << "Your triangle is a Isosceles!" << endl;
            break;
            
        case Equilateral:
            cout << "Your triangle is an Equilateral!" << endl;
            break;
        case None:
            cout << "Your triangle is NOT a triangle!" << endl;
            break;
        default:
            cout << " There was an issue with the code :(" << endl;
            
    }
    
}

