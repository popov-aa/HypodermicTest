#ifndef B_H
#define B_H

class A;
#include "IB.h"
#include <memory>

class B : public IB {
public:
    explicit B(std::shared_ptr<A> a);

    virtual void doB() override;

private:
    std::shared_ptr<A> m_a;
};

#endif // B_H
