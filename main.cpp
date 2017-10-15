/*
 *   this project is the program of the C++ primer
 *
 *   the progream is typed by ZHJ
 *                      2017/10/3
 *
 *
 *
 */
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

using std::string;
using std::cin;
using std::cout;

int main(int argc, char* argv[])
{
    //std::cout<<"Hello World!"<<std::endl;
    //std::cout << /* " */ " /*" /* "*/ <<std::endl;
    using db = double;
    db k =100.0;

    k = sin(k);
    
    const string str("Hello World!");
    for (auto y:str)
    {
        y = toupper(y);
        cout << y <<std::endl;
    }
    
    std::vector <int> T;
    std::vector <int*> TT;
    
    int t;
    
    auto tt = T.size();
    char *ttt = nullptr;
    
    
    for (auto b:T)
    {
        if ((b) % 2 != 0)
            (b) = (b) + 1;
    }
    
    int v1 = 0;

    char a3[6] = "Hello";
    for (long i =0 ;i <100;i++)
    {
        v1 = v1 +1;
    }
    std::cout << v1 <<std::endl;
    std::cout << "Hello World!\n" ;
    
    long long i;
    i = 10000000000;
    

    
    int sum = 0;
    string s = "Hello World!";

    string::size_type x;
    x = s.size();
   int a[] = {0,1,2,3,4,5};
    int *p = &a[2];
    int j = p[0];
    
    cout << j <<std::endl;
    
    
    
    
    
    for (int i = 1;i<argc;i++)
        std::cout << argv[i] <<std::endl;
  //  Sales_data si;
  //  sum = si.add(1, 3);
    std::cout<<sum<<std::endl;
    return 0;
}
