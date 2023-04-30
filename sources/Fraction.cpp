#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Fraction.hpp"

using namespace std;
 namespace ariel{
    Fraction Fraction::operator+(const Fraction  &other) const{
        
        return Fraction(1,1);
    }
    Fraction Fraction::operator-(const Fraction  &other) const{
        Fraction a(1,1);
        return a;
    }
    Fraction Fraction::operator*(const Fraction  &other) const{
        Fraction a(1,1);
        return a;
    }
    Fraction Fraction::operator/(const Fraction  &other) const{
        Fraction a(1,1);
        return a;
    }
    Fraction& Fraction::operator++(){
        return *this;
    }
    const Fraction Fraction::operator++(int){
        Fraction a(1,1);
        return a;
    }
    Fraction& Fraction::operator--(){
        return *this;
    }
    const Fraction Fraction::operator--(int){
        Fraction a(1,1);
        return a;
    }
    Fraction& Fraction::operator-() {
        return * this;
    }
    ostream& operator<<(std::ostream& output, const Fraction& c){
        return (output<<'1');
    }
    istream& operator>>(std::istream& input, const Fraction& c){
        return input;
    }
    Fraction operator*(const float &d,Fraction &other){
        Fraction a(1,1);
        return a;
    }
    Fraction operator*(const Fraction &frac,const float  &other){
        Fraction a(1,1);
        return a;
    }
    Fraction operator+(const float& d,const Fraction &other){
        Fraction a(1,1);
        return a;
    }
    Fraction operator+(const Fraction &frac,const float &other){
        Fraction a(1,1);
        return a;
    }
    Fraction operator-(const float &d,const Fraction &other){
        Fraction a(1,1);
        return a;  
    }
    Fraction operator-(const Fraction &frac,const float &other){
        Fraction a(1,1);
        return a; 
    }
    Fraction operator/(const float &d,const Fraction &other){
        Fraction a(1,1);
        return a;  
    }
    Fraction operator/(const Fraction &frac,const float &other){
        Fraction a(1,1);
        return a; 
    }
    bool operator==(const Fraction& c1, const float& c2){
        return true;
    }
    bool operator==(const float& c2,const Fraction& c1){
        return true;
    }
    bool operator==(const Fraction& c2,const Fraction& c1){
        return true;
    }

    bool operator<=(const Fraction& c1, const float& c2){
        return true;
    }
    bool operator<=(const float& c2,const Fraction& c1){
        return true;
    }
    bool operator<=(const Fraction& c2,const Fraction& c1){
        return true;
    }

    bool operator>=(const Fraction& c1, const float& c2){
        return true;
    }
    bool operator>=(const float& c2,const Fraction& c1){
        return true;
    }
    bool operator>=(const Fraction& c2,const Fraction& c1){
        return true;
    }

    bool operator<(const Fraction& c1, const float& c2){
        return true;
    }
    bool operator<(const float& c2,const Fraction& c1){
        return true;
    }
    bool operator<(const Fraction& c2,const Fraction& c1){
        return true;
    }

    bool operator>(const Fraction& c1, const float& c2){
        return true;
    }
    bool operator>(const float& c2,const Fraction& c1){
        return true;
    }
    bool operator>(const Fraction& c2,const Fraction& c1){
        return true;
    }
}