#include "class.h"



Cat::Cat(int weight_value, int length_value)//Ĭ�ϲ���д��h�������������д����
{
    weight = weight_value;
    length = length_value;
    cout << "constructor of cat weight" << weight << endl;
    cout << "constructor of cat length" << length << endl;
}

void Cat::setweight(int weight_value)//����˵�����private����ʵ����Ҳ���̳��ˣ�Ҳ�������Ͽ����˿ռ䣬�������ͨ�����ø����public������������
{
    weight = weight_value;
    cout << "changed weight = "<< weight << endl;
}

WhiteCat::WhiteCat( string color_value)
{
    color = color_value;
    //weight = 10;//�����Լ����沢û��weight�����������ֻ��һ������ռ����weight������ͨ���ø����public����������
}
