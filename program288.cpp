#include<iostream>
using namespace std;

void auto_Demo()
{
    auto i=1;

    cout<<"Auto_Demo : "<<i<<"\n";
    i++;

}
int main()
{
    auto_Demo();
    auto_Demo();
    auto_Demo();
    auto_Demo();

    return 0;
}