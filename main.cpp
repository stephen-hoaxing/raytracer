#include <iostream>

template <typename T>
class Vector
{
private:
    T m_x, m_y, m_z;

public:
    Vector(T n) : m_x(n), m_y(n), m_z(n){}
    Vector(T x, T y, T z) : m_x(x), m_y(y), m_z(z){}

    friend std::ostream& operator <<(std::ostream &os, const Vector<T> &v)
    {
        os << v.m_x << " " << v.m_y << " " << v.m_z;
        return os;
    }
};

int main()
{
    Vector<int> v = Vector(2, 4, 5);
    std::cout << v << std::endl;
    return 0;
}