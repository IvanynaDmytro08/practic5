#include <iostream>

class Overcoat{

    int m_price;
    int m_typeClothes;

public:
    Overcoat(int price = 400, int type = 2):m_price(price), m_typeClothes(type){}

    Overcoat& operator = (Overcoat& O1){
        m_price = O1.m_price;
        m_typeClothes = O1.m_typeClothes;
        return *this;
    }

    friend bool operator ==(Overcoat& o1, Overcoat& o2);
    friend bool operator>(Overcoat& o1, Overcoat o2 );

};

 bool operator == (Overcoat& o1, Overcoat& o2){
    return (o1.m_typeClothes == o2.m_typeClothes);
}

bool operator>(Overcoat& o1, Overcoat o2) {
    return o1.m_price > o2.m_price;
}

int main() {



    Overcoat object1(300, 2);
    Overcoat objeckt2(4000, 1);

    std::cout << "Type clothes - " << (object1 == objeckt2) << std::endl;
    std::cout << "Price 1) - " << (object1 > objeckt2) << std::endl;
    std::cout << "Price 2) - " << (objeckt2 > object1) << std::endl;

    object1 = objeckt2;

    std::cout << "Type clothes - " << (object1 == objeckt2) << std::endl;
    std::cout << "Price 1) - " << (object1 > objeckt2) << std::endl;
    std::cout << "Price 2) - " << (objeckt2 > object1) << std::endl;






}
