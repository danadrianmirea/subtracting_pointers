#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    double x;
    double y;
};

typedef struct Point Point;

class C1
{

};

typedef class C1 C1;

int main()
{
    C1 c;

    int v[] = {1, 4, 9};

    int* p1 = v;
    int* p2 = v+2;

    printf("sizeof(int) = %ud\n", sizeof(int));

    printf("%d %d\n", *p1, *p2);

    printf("%016x, %016x, %016x\n", p1, p2, p2-p1);
    printf("%p, %p, %p\n", p1, p2, p2-p1);
    //printf("%8x, %8x, %8x\n", p1, p2, p2+p1); compilation error, invalid operants to binary operator+

    char* c1 = (char*)v;
    char* c2 = (char*)(v+2);

    printf("%016x, %016x, %016x\n", c1, c2, c2-c1);
    printf("%p, %p, %p\n", c1, c2, c2-c1);
    //printf("%8x, %8x, %8x\n", c1, c2, c2+c1); same error as above but for types char* and char* to binary operator +

    return 0;
}