#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <algorithm> 
#include "Fraction.hpp"

using namespace std;
 namespace ariel{
    Fraction::Fraction(int a, int b): numer(a),denom(b){
        if(b==0){
            throw exception();
        }
        int gcd = __gcd(a,b);
        if(gcd!=1){
            numer= a/gcd;
            denom= b/gcd;
        }
    }
    Fraction::Fraction(float a){
        int numerator= int(a* 1000);
        Fraction(numerator,1000);
    }
    Fraction Fraction::operator+(const Fraction  &other) const{
        int up = (this->numer*other.denom)+(other.numer*this->denom);
        int down= this->denom*other.denom;
        return Fraction(up,down);
    }
    Fraction Fraction::operator-(const Fraction  &other) const{
        int up = this->numer*other.denom-other.numer*this->denom;
        int down= this->denom*other.denom;
        return Fraction(up,down);
    }
    Fraction Fraction::operator*(const Fraction  &other) const{
        Fraction a(this->numer*other.numer,this->denom*other.denom);
        return a;
    }
    Fraction Fraction::operator/(const Fraction  &other) const{
        Fraction a(this->numer*other.denom,this->denom*other.numer);
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
        this->numer = -this->numer;
        return * this;
    }
    ostream& operator<<(std::ostream& output, const Fraction& c){
        return (output<<" "+to_string(c.numer)+"/"+to_string(c.denom));
    }
    istream& operator>>(std::istream& input, const Fraction& c){
        return input;
    }
    Fraction operator*(const float &d,const Fraction &other){
        Fraction a(d);
        return a*other;
    }
    Fraction operator*(const Fraction &frac,const float  &other){
        return other*frac;
    }
    Fraction operator+(const float& d,const Fraction &other){
        Fraction a(d);
        return a+other;
    }
    Fraction operator+(const Fraction &frac,const float &other){
        return other+frac;
    }
    Fraction operator-(const float &d,const Fraction &other){
        Fraction a(d);
        return a-other;  
    }
    Fraction operator-(const Fraction &frac,const float &other){
        Fraction a(other);
        return frac-a; 
    }
    Fraction operator/(const float &d,const Fraction &other){
        Fraction a(d);
        return a/other;  
    }
    Fraction operator/(const Fraction &frac,const float &other){
        Fraction a(other);
        return frac/a; 
    }
    bool operator==(const Fraction& f1, const float& f2){
        return (f1<=f2 && f1>=f2);
    }
    bool operator==(const float& f1,const Fraction& f2){
        return (f1<=f2 && f1>=f2);
    }
    bool operator==(const Fraction& f1,const Fraction& f2){
        return (f1<=f2 && f1>=f2);
    }

    bool operator<=(const Fraction& f1, const float& f2){
        return f2>=f1;
    }
    bool operator<=(const float& f1,const Fraction& f2){
        return f2>=f1;
    }
    bool operator<=(const Fraction& f1,const Fraction& f2){
        return f2>=f1;
    }

    bool operator>=(const Fraction& f1, const float& f2){
        return !(f1<f2);
    }
    bool operator>=(const float& f1,const Fraction& f2){
        return !(f1<f2);
    }
    bool operator>=(const Fraction& f1,const Fraction& f2){
        return !(f1<f2);
    }
    // to execute
    bool operator<(const Fraction& f1, const float& f2){
        Fraction a(f2);
        return f1<a;
    }
    bool operator<(const float& f1,const Fraction& f2){
        Fraction a(f1);
        return a<f2;
    }
    bool operator<(const Fraction& f1,const Fraction& f2){
        int f1_numer = f1.numer*f2.denom;
        int f2_numer = f2.numer*f1.denom;
        if(f1_numer<f2_numer){
            return true;
        }
        else{
            return false;
        }
    }

    bool operator>(const Fraction& f1, const float& f2){
        return f2<f1;
    }
    bool operator>(const float& f1,const Fraction& f2){
        return f2<f1;
    }
    bool operator>(const Fraction& f1,const Fraction& f2){
        return f2<f1;
    }
}