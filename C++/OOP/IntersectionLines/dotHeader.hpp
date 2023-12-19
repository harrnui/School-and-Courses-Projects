#ifndef dotHeader  
#define dotHeader
#include <iostream>
using namespace std;



class Dot {

    private:
    float koorX,koorY;

    public: 

    Dot(){koorX = 0; koorY = 0;} // default constructor

    Dot(float x1, float y1){ //parameter constructor
        koorX = x1;
        koorY= y1;
    }

    //methods
    float setX (float x1){ koorX = x1; return koorX;} // setters
    float setY (float y1){ koorY = y1; return koorY;}

    float getX (){ return koorX; }; // getters
    float getY (){ return koorY; };


    void print(){
        cout<<"\nCoordinates are: "<<koorX<<" "<<koorY<<"\n";
    }


    
};

#endif

