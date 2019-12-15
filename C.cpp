#include "C.h"
#include <Hypodermic/Container.h>

#include "IB.h"

C::C(std::shared_ptr<Hypodermic::Container> container)
    : m_container(container)
{
}

void C::doC()
{
    m_container->resolve<IB>()->doB();
}
