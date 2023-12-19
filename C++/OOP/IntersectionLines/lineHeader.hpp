#include "dotHeader.hpp"

#include <iostream>
using namespace std;

class LineTwoDots{   
    private:

    float k,l;

    public:
    LineTwoDots(){ k = 0 ; l = 0; }//default constructor

    LineTwoDots(int kInput , int lInput){ //parameter constructor
        k = kInput;
        l = lInput;
    }

    //methods

    void calculateLine(Dot &d1, Dot &d2){
        // y = k*x + l -> explicit line equation
        float koorY = d1.getY();
        float koorX = d1.getX();
        float koorY2 = d2.getY();
        float koorX2 = d2.getX();

        k = (koorY2- koorY) / (koorX2 - koorX);
        l = koorY - ((koorY2 - koorY) / (koorX2 - koorX)) *koorX;
        
        cout<<"\nThe mathematical expression for the line with the given dots is: " << "y = " << k << "*x + "<<l<<"\n";
    }

    void intersectionOfLines(LineTwoDots &secondLine){
        float dotOfIntersection = (secondLine.l - l) / (k - secondLine.k);

        float dotOfIntersectionY1 = k * dotOfIntersection + l;
        float dotOfIntersectionY2 = secondLine.k * dotOfIntersection + secondLine.l;

        

        cout<<"\n\nThese dots got to be equal: " << dotOfIntersectionY1 << " and "<<dotOfIntersectionY2;
        cout <<"\n\nIntersection I(X,Y) is: "<< dotOfIntersection <<" "<<dotOfIntersectionY1<<"\n";
    }
};

