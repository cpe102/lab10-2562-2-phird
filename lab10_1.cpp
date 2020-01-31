// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    for (int x=0; x < 3; x++)
    {
     cin.get();
    }
    srand(time(0));
    int x= rand()%9;
    string c;
    if (x==0) c="A";
    else if(x==1) c="B+";
    else if(x==2) c="B";
    else if(x==3) c="C";
    else if(x==4) c="C+";
    else if(x==5) c="D";
    else if(x==6) c="D+"; 
    else if(x==7) c="F";
    else c="W";

    cout << "You will get " << c << " in this 261101.";


 
}