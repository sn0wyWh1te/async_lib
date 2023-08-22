#include "execution.hpp"
#include "type_func.hpp"

using namespace stdexec;


int main()
{
    using type_print = int;
    print_type<type_print>("asd");

    sender auto s1 = just();
    sender auto s2 = then(s1,[&](){return;});
    start_detached(std::move(s2));
    return 0;
}