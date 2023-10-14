#include <bits/stdc++.h>

class Ball {
private:
    std::string m_color{ "black" };
    double m_radius{ 10.0 };

public:
    void print() {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }
    Ball(double radius) : m_radius{ radius } {
        print();
    }

    Ball(std::string color = "black", double radius = 10.0)
        : m_color{ color }
        , m_radius{ radius } {
        print();
    }


};

int main() {
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
