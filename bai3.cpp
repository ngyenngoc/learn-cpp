#include <iostream>
using namespace std;
int main(){
	string txt="afsbhaja";
	for (int i = 0; i<txt.length(); i++) {
        txt[i] = toupper(txt[i]);
    }
    cout << "Chu in hoa la: " << txt<< endl;

    for (int i = 0; i<txt.length(); i++) {
        txt[i] = tolower(txt[i]);
    }
    cout << "Chu in thuong la: " << txt << endl;
    cout<<"do dai chuoi: "<<txt.length() <<endl;
    return 0;
}

