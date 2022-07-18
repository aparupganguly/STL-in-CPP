// #include <bits/stdc++.h>
// #include <array>
// using namespace std;

// // STL full tutorial
// // Standard Template Library
// int main()
// {
//     // int noramlArray[5] ={1,3,45,3,2};

//     array <int , 5> stlArray = {1,5,3,2,3};

//     int size = stlArray.size();
//     // cout << size << endl;

//     for ( int i =0; i<size; i++ ){
//         // cout << stlArray[i] << endl;

//     }
//         cout << stlArray.at(2) << endl;
//         cout << "Empty or not in boolean => " << stlArray.empty() << endl;
//         cout << stlArray.front() << endl;
//         cout << stlArray.back() << endl;
//     return 0;
// }

// size , index- at, empty , front , back

#include <bits/stdc++.h>
using namespace std;

int main()
{

    array<int, 5> myArr = {1, 2, 3, 4, 5};

    int sizeofArray = myArr.size();
    int Secondindex = myArr.at(2);
    int EmptyOrNot = myArr.empty();
    int Firstindex = myArr.front();
    int Lastindex = myArr.back();

    cout << sizeofArray << "\n"
         << Secondindex << "\n"
         << EmptyOrNot << "\n"
         << Firstindex << "\n"
         << Lastindex << endl;

    return 0;
}
