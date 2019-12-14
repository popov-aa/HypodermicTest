#ifndef C_H
#define C_H

namespace Hypodermic {
class Container;
}
#include <memory>

class C {
public:
    explicit C(std::shared_ptr<Hypodermic::Container> container);

    virtual void doC();

private:
    std::shared_ptr<Hypodermic::Container> m_container;
};

#endif // C_H
