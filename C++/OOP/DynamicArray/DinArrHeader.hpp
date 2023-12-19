#include <iostream>
using namespace std;

class Arr{
    private:
    int length;
    int *arr;

    public:
    
    Arr(){length = 0; arr = new int[length]; }

    Arr(int inputArr[], int inputLength){
        arr = inputArr ;
        length = inputLength;
    }

    //methods
    void printArr(){
        for (int i = 0; i < length;i++){
            cout<<arr[i]<<" ";
        }
    }

    void addOnFront(int element){

        int *ptrNewArr = new int [length+1];

        ptrNewArr[0] = element;
        for (int i = 0 ; i < length ; i++){
            ptrNewArr[i+1] = arr[i];
        }
        
        cout<<"\n";
        length++;
        delete []arr;
        arr = ptrNewArr;
    }

    void addOnEnd(int element){
        int *ptrNewArr = new int [length+1];

        ptrNewArr[length] = element;
        for (int i = length-1 ; i >= 0 ; i--){
            ptrNewArr[i] = arr[i];
        }
        
        cout<<"\n";
        length++;
        delete []arr;
        arr = ptrNewArr;
        
    }

    void addOnPostion(int element, int pozicija){
        int *ptrNewArr = new int [length+1];

        for (int i = 0; i < length+1 ;i++){
            if (i == pozicija){
                ptrNewArr[i] = element;
            }else if (i>pozicija){
                ptrNewArr[i] = arr[i-1];
            }else{
                ptrNewArr[i]=arr[i];
            }
        }
        cout<<"\n";
        length++;
        delete []arr;
        arr = ptrNewArr;
    }

    void deleteOnPostion(int pozicija){
        int *ptrNewArr = new int [length-1];

        for ( int i = 0; i< length; i++){
            if ( i == pozicija){
                ptrNewArr[i] = arr[i+1];
            }else if ( i > pozicija){
                ptrNewArr[i] = arr[i+1]; 
            }else{
                ptrNewArr[i] = arr[i];
            }
        }
        cout<<"\n";
        length--;
        delete []arr;
        arr = ptrNewArr;
    }

};
