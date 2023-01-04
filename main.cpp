//
//  main.cpp
//  ДЗ 5 ООП
//
//  Created by Павел on 26.12.2022.
//
#include <string>
#include <iostream>
#include "Class B.hpp"




int main(int argc, const char * argv[]) {
    
    B p1(100);
    B p2  = B(200);
    std::cout<<"Значение X = "<<p1.getX()<<std::endl;
    std::cout<<"Значение X1 = "<<p2.getX()<<std::endl;

    B p3 = p1 + p2;
    std::cout<<"Значение Суммы = "<<p3.getRes()<<std::endl;

    B p4 = p1 - p2;
    std::cout<<"Значение Разности = "<<p4.getRes()<<std::endl;
    
    B p5 = p1 * p2;
    std::cout<<"Значение Произведения = "<<p5.getRes()<<std::endl;
    
    B p6 = p1 / p2;
    std::cout<<"Значение Частного = "<<p6.getRes()<<std::endl;
    
    bool res  = p1 == p2;
    std::cout<<"Bool Значение Res = "<<res<<std::endl;
    bool res1 = p1 != p2;
    std::cout<<"Bool Значение Res1 = "<<res1<<std::endl;
    
    B p7;
    std::cout<<"Строка из закрытой части класса : "<<p7.getValue()<<std::endl;
    
    B p8("Hello World!");
    std::cout<<"Строка через перегрузку опрератора << : ";
    std::cout<<p8<<std::endl;
   
    
    
    return 0;
}
