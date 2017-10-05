//
//  Sales_data.h
//  Test_for_primer
//
//  Created by 郑鸿杰 on 2017/10/5.
//  Copyright © 2017年 zhj. All rights reserved.
//

#ifndef Sales_data_h
#define Sales_data_h

#include <string>

class Sales_data
{
public:
    std::string  bookNo;
    int units_sold = 0;
    double revenue = 0.0;
    
    Sales_data();
    ~Sales_data();
    
    int add(int a,int b) {return (a+b);}
};


#endif /* Sales_data_h */
