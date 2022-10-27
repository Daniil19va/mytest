#include <iostream>

using namespace std;

<<<<<<< HEAD
int main()
{
    cout << "Hello world" <<endl;
    cout << "Hello from linux" <<endl;

    return 0;
}
/***

big new comment

***/
=======
int add(int a,int b)
{
    return a + b;
}


int main()
{
    cout << "Hello world" << endl;
    cout << "Hello from linux" << endl;
    cout << "2 + 3 = " << add(2,3) <<endl;
    cout << "3 + 8 = " << add(3,8) <<endl;
    return 0;
}

>>>>>>> Development
