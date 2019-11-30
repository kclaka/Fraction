#include <iostream>


class Fraction{
public:
    Fraction(int top, int bottom){
        /** Fraction Constructor **/
        num = top;
        den = bottom;
    }

    Fraction(int top){
        num = top;
        den = 1;
    }

    Fraction(){
        num = 0;
        den = 1;
    }

    friend std::ostream &operator << (std::ostream &stream, const Fraction &frac);

    Fraction operator + (const Fraction &frac){
        int newnum = frac.num*den + frac.den*num;
        int newden = den*frac.den;

        return (newnum, newden);
    }


private:
    int num;
    int den;

};

std::ostream &operator << (std::ostream &stream, const Fraction &frac){
    stream<<frac.num<<"/"<<frac.den;

    return stream;
}

int main() {


    Fraction myfraction(3, 5);


    return 0;
}