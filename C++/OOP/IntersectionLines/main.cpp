#include "dotHeader.hpp"
#include "lineHeader.hpp"
#include <iostream>
using namespace std;


int main(){
    
    Dot d1(5,5);
    Dot d2(0,0);
    Dot d3(0,0);
    Dot d4(5,-5);
    LineTwoDots line;
    LineTwoDots line2;
    d1.print();
    d2.print();
    d3.print();
    d4.print();
    line.calculateLine(d1, d2);
    line2.calculateLine(d3, d4);

    line.intersectionOfLines(line2);

    //nova dva pravca
    Dot d5(10,5);
    Dot d6(4,20);
    Dot d7(1,3);
    Dot d8(7,8);
    LineTwoDots line3;
    LineTwoDots line4;
    d5.print();
    d6.print();
    d7.print();
    d8.print();
    line3.calculateLine(d5, d6);
    line4.calculateLine(d7, d8);

    line3.intersectionOfLines(line4);
}
