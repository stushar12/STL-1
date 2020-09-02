#include<iostream>
#include<array>
using namespace std;

int main()
{
     std::array<int , 5> myarray;                        //Declaration
    // myarray.fill(10);                                // fill entire array with same value 10
    // std::array<int ,5> myarray ={1,2,3,4,5};         //Initialisation
    int x;
    for (int i=0;i<myarray.size();i++)
    {
    cout<<"Enter a value: ";
    cin>>myarray.at(i);
    }

int sum=0;
    for(int i=0;i<myarray.size();i++)
    {
        sum=sum+myarray.at(i);
    }
    cout<<sum<<"\n";
}