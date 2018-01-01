#include <iostream>
#include <coord3d.h>

using namespace std;

int main()
{
    opmm::Coord3d p1(1,4,2);

    opmm::Coord3d p2(3,5,6);

    opmm::Coord3d p3 = p1 + p2;

    opmm::Coord3d p4 = p1 - p2;

    cout << "p1: (" << p1.x() << "," << p1.y() << "," << p1.z() << ")" <<  endl;
    cout << "p2: (" << p2.x() << "," << p2.y() << "," << p2.z() << ")" << endl << endl;

    cout << "p3 = p1 + p2: (" << p3.x() << "," << p3.y() << "," << p3.z() << ")" << endl;
    cout << "p4 = p1 - p2: (" << p4.x() << "," << p4.y() << "," << p4.z() << ")" << endl;

    cout << "p3*5: (" << (p3*5).x() << "," << (p3*5).y() << "," << (p3*5).z() << ")" << endl;

    cout << "3*p3: (" << (3*p3).x() << "," << (3*p3).y() << "," << (3*p3).z() << ")" << endl;

    cout << "p1->*p2: (" << p1->*p2 << ")" << endl;

    cout << "p2->*p1: (" << p2->*p1 << ")" << endl;

    return 0;
}
