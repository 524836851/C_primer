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
#include "Sales_data.h"

int main()
{
    //std::cout<<"Hello World!"<<std::endl;
    //std::cout << /* " */ " /*" /* "*/ <<std::endl;
    using db = double;
    db k =100.0;

    int v1 = 0;
    for (long i =0 ;i <100;i++)
    {
        v1 = v1 +1;
    }
    std::cout << v1 <<std::endl;
    std::cout << "Hello World!\n" ;
    
    long long i;
    i = 10000000000;
    
    int j ;
    int &jj = j;
    
    v1 = jj;
    jj = 3.14;
    std::cout << jj<< '\n';
    
    int sum = 0;
    
    Sales_data si;
    sum = si.add(1, 3);
    std::cout<<sum<<std::endl;
    return 0;
}
