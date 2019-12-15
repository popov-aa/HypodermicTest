#include <Hypodermic/Container.h>
#include <Hypodermic/ContainerBuilder.h>

#include "A.h"
#include "B.h"
#include "C.h"
#include "IB.h"

int main(int argc, char* argv[])
{
    Hypodermic::ContainerBuilder containerBuilder;
    containerBuilder.registerType<A>();
    containerBuilder.registerType<B>().as<IB>();
    containerBuilder.registerType<C>();

    auto container = containerBuilder.build();
    container->resolve<C>()->doC();

    return 0;
}
