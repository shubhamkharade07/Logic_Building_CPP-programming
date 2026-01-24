#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside constructor\n";
            iSize=no;
            Arr = new int [iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor \n";
            delete[]Arr;
        }


};

int main()
{
    //s1: allocate the memory
   ArrayX *aobj=new ArrayX(10);
    //S2:use the memory

    //S3: Deallocate the memory
   delete aobj;

    return 0;
}