#pragma once
#include<iostream>
using namespace std;

class Cat
{
private:
    int weight;
    int length;
public:
    Cat(int weight_value = 10,int length_value = 100);
    void setweight(int weight_value);
};

class WhiteCat :public Cat
{
private:
    string color;
public:
    WhiteCat( string color_value);
};
