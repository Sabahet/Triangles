//
//  Triangle1.cpp
//  Lab 6
//
//  Created by Sabahet Alovic on 11/5/19.
//  Copyright © 2019 Sabahet Alovic. All rights reserved.
//

#include "Triangle1.hpp"
#include "Triangle.h"

int test(int x, int y, int z){
    while (x+y > z && x+z > y && z+y > x){
        if(x!=y && x!=z && y!= z ){
            return 0;
        }
        
        if(x==y && z==x && y==z ){
            
            return 2;
        }
        if(x==y || z==x || y==z ){
            return 1;
        }
        
    }
    return 3;
}
