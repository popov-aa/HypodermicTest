#include "C.h"
#include <Hypodermic/Container.h>

#include "B.h"

C::C(std::shared_ptr<Hypodermic::Container> container)
    : m_container(container)
{
    m_container->resolve<B>()->doB();
}
