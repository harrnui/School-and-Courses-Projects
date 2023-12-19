#include "dinArrHeader.hpp"
#include <iostream>
using namespace std;

int main(){

    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout << length << "\n";

    Arr a1(arr, length);
    a1.printArr();

    a1.addOnFront(100);
    a1.printArr();

    a1.addOnEnd(1000);
    a1.printArr();


    a1.addOnPostion(200, 5);
    a1.printArr();


    a1.deleteOnPostion(5);
    a1.printArr();

    a1.deleteOnPostion(0);
    a1.printArr();


    a1.deleteOnPostion(11);
    a1.printArr();
}
