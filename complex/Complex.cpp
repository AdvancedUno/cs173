//========================================================
// put all group names here
// Complex.cpp
// November 2023
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

//========================================================
// setReal access method
//========================================================
void Complex::setReal( float r ){


}


//========================================================
// getReal access method
//========================================================
float Complex::getReal( void )const{

    return 1.0;
}

//========================================================
// setImag
//========================================================
void Complex::setImag( float r){

  
}

//========================================================
// getImag
//========================================================
 float Complex::getImag( void ) const{

    return 1.0;
 }

//========================================================
// assignment operator
//========================================================
Complex Complex::operator=( const Complex &c ){
    Complex result_complex;

    return result_complex;
}

//========================================================
// addition operators
//========================================================
Complex Complex::operator+(const Complex &c ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator+(float f ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator+(int i ) const{
    Complex result_complex;
    
    result_complex.a = a + i; 
    

    return result_complex;
}
//========================================================
// subtraction operators
//========================================================
Complex Complex::operator-(const Complex &c ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator-(float f ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator-(int i ) const{
    Complex result_complex;

    return result_complex;
}

//========================================================
// multiplication operators
//========================================================
Complex Complex::operator*(const Complex &c ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator*(float f ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator*(int i ) const{
    Complex result_complex;

    return result_complex;
}


//========================================================
// division operators
//========================================================
Complex Complex::operator/(const Complex &c ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator/(float f ) const{
    Complex result_complex;

    return result_complex;
}


Complex Complex::operator/(int i ) const{
    Complex result_complex;

    return result_complex;
}



//========================================================
// exponentiation
//========================================================
Complex Complex::operator^( int p ) const{
    Complex result_complex;


    return result_complex;
}

//========================================================
// operator~
//========================================================
Complex Complex::operator~( void ) const{
    Complex result_complex;


    return result_complex;
}

//========================================================
// abs
//========================================================
float Complex::abs( void )const{


    return 1.0;
}

//========================================================
// equality operator
//========================================================
bool   Complex::operator==( const Complex &c ) const{


    return true;
}

//========================================================
// inequality operator
//========================================================
bool   Complex::operator!=( const Complex &c ) const{


    return true;
}

//========================================================
// overload >> for cin
//========================================================


//========================================================
// overload << for cout
//========================================================
