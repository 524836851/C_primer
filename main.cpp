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

int main()
{
    //std::cout<<"Hello World!"<<std::endl;
    //std::cout << /* " */ " /*" /* "*/ <<std::endl;
    int v1 = 0;
    for (long i =0 ;i <100;i++)
    {
        v1 = v1 +1;
    }
    std::cout << v1 <<std::endl;
    std::cout << "Hello World!" <<std::endl;
    int sum = 0;
    while (std::cin >> v1)
    {
        sum = sum+v1;
    }
    std::cout << sum << std::endl;
    return 0;
}
