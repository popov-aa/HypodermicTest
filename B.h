#ifndef B_H
#define B_H

class A;
#include <memory>

class B {
public:
    explicit B(std::shared_ptr<A> a);

    virtual void doB();

private:
    std::shared_ptr<A> m_a;
};

#endif // B_H
