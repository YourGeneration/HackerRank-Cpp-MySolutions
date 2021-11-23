#include <bits/stdc++.h>

using namespace std;

//My Solution
string timeConversion(string s) {
    std::stringstream ss(s);
    std::stringstream str(s);
    char ch;
    char h1;
    char h2;
    char m1;
    char m2;
    char s1;
    char s2;
    int hour;
    std::string text;
    
    ss>>h1>>h2>>ch>>m1>>m2>>ch>>s1>>s2>>text;
    str>>hour>>ch;
    
    std::stringstream ss2;
    if (text=="AM"){
        if (h1=='1' && h2=='2'){
            ss2<<"00"<<ch<<m1<<m2<<ch<<s1<<s2;
        }
        else{
            ss2<<h1<<h2<<ch<<m1<<m2<<ch<<s1<<s2;
        }
        
        return ss2.str();
    }
    else{
        if (h1=='1' && h2=='2'){
            ss2<<h1<<h2<<ch<<m1<<m2<<ch<<s1<<s2;
        }
        else{
            ss2<<hour+12<<ch<<m1<<m2<<ch<<s1<<s2;
        }
        
        return ss2.str();
    }
}
//End

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
