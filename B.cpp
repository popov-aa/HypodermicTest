#include "B.h"
#include "A.h"

#include <iostream>

B::B(std::shared_ptr<A> a)
    : m_a(a)
{
}

void B::doB()
{
    m_a->doA();
    std::cout << "do B" << std::endl;
}
