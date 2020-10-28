#include "class.h"



Cat::Cat(int weight_value, int length_value)//默认参数写在h的声明里，而不是写在这
{
    weight = weight_value;
    length = length_value;
    cout << "constructor of cat weight" << weight << endl;
    cout << "constructor of cat length" << length << endl;
}

void Cat::setweight(int weight_value)//所以说父类的private参数实际上也被继承了，也在子类上开辟了空间，子类可以通过调用父类的public函数来调整的
{
    weight = weight_value;
    cout << "changed weight = "<< weight << endl;
}

WhiteCat::WhiteCat( string color_value)
{
    color = color_value;
    //weight = 10;//子类自己里面并没有weight这个变量，就只有一个父类空间里的weight，可以通过用父类的public函数来调整
}
