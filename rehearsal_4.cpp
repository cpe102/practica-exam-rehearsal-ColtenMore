#include <iostream>
using namespace std;
//Write compress() here.
string compress(string x){
    string y;
    int z=x.size();
    int j=0;
    while(j<z){
        y=y+x[j];
        j=j+3;
    }
    return y;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
