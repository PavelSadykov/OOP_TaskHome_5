//
//  Class B.cpp
//  ДЗ 5 ООП
//
//  Created by Павел on 26.12.2022.
//

#include <string>
#include "Class B.hpp"
#include <iostream>

B::B(){}

B::B (double X): _X(X) {}
B::B(std::string Str) : _Str(Str){}


double B::getX(){
   return _X;
}

double B::getRes(){
    return _Res;
}

std::string B::getValue(){
    return _Str;
}
  


B B:: operator + (const B & other){
    B tmp;
    tmp._Res = this->_X + other._X;
    return tmp;
}
 
B B::operator - (const B & other){
    B tmp;
    tmp._Res = this->_X - other._X;
    return tmp;
    
}
B B::operator * (const B & other){
    B tmp;
    tmp._Res = this->_X * other._X;
    return tmp;
    
}
B B::operator / (const B & other){
    B tmp;
   tmp._Res = _X/(other._X);
    return tmp;
    
}
bool B::operator == (const B & other){
    return this->_X==other._X;
    
}
bool B::operator != (const B & other){
    return (this->_X!=other._X);
    
}
B B::operator += (const B & other){
    B tmp;
    tmp._X = this->_X += other._X;
    return tmp;
    
}

std::ostream &  operator << (std::ostream & os,const B & b ) {
    os<<b._Str;
return os;
}

