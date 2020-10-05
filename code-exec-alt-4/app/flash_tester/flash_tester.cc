// EPOS Synchronizer Component Test Program

#include <machine.h>
#include <time.h>
#include <synchronizer.h>
#include <process.h>

using namespace EPOS;

const int iterations = 100;

OStream cout;

const int BUF_SIZE = 16;
char buffer[BUF_SIZE];
Semaphore empty(BUF_SIZE);
Semaphore full(0);

int something()
{
    return 0;
}

int main()
{
    cout << "Producer x Consumer" << endl;

    Thread * something = new Thread(&something);

    cout << "TESTING" << something << endl;

    delete something;

    return 0;
}
