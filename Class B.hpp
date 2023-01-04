//
//  Class B.hpp
//  ДЗ 5 ООП
//
//  Created by Павел on 26.12.2022.
//

#ifndef Class_B_hpp
#define Class_B_hpp
#include <string>
#include <stdio.h>
#include <iostream>



class B{
public:
    B();
    B(double X);
    B(std::string Str);
    
    double getX();
    double getRes();
    std::string getValue();
    B operator + (const B & other);
    B operator - (const B & other);
    B operator * (const B & other);
    B operator / (const B & other);
    bool operator == (const B & other);
    bool operator != (const B & other);
    B operator += (const B & other);
    friend std::ostream & operator << (std::ostream & os, const B & b );
    
    
private:
    
    double _X;
    double _Res;
    std::string _Str=("ABCDEF");
};



#endif /* Class_B_hpp */
