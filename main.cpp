#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{


    string temp;

    cout<<"Masukkan kalimat : ";
    getline(cin, temp);
    char* kata= new char[temp.length()];
    std::strcpy(kata, temp.c_str());

    for (int i = 0; i < temp.length()+1; i++){
        if(kata[i]=='a'|| kata[i]=='A'){

            if(kata[i]=='a'){
                kata[i]='4';
            }
            if(kata[i]=='A'){
                kata[i]='a';
            }
        }
        if(kata[i]=='i' || kata[i]=='I'){
            if(kata[i]=='I'){
                kata[i]='i';
            }
            if(kata[i]=='i'){
                kata[i]='I';
            }
        }
        if(kata[i]=='u' || kata[i]=='U'){
            if(kata[i]=='U'){
                kata[i]='u';
            }
            if(kata[i]=='u'){
                kata[i]='U';
            }
        }
        if(kata[i]=='e' || kata[i]=='E'){
            if(kata[i]=='E'){
                kata[i]='e';
            }
            if(kata[i]=='e'){
                kata[i]='E';
            }
        }
        if(kata[i]=='o' || kata[i]=='O'){
            if(kata[i]=='O'){
                kata[i]='o';
            }
            if(kata[i]=='o'){
                kata[i]='O';
            }
        }
        if(kata[i]=='r' || kata[i]=='R'){
            kata[i]='12';
        }
        if(kata[i]=='s' || kata[i]=='S'){
            kata[i]='5';
        }
        std::cout << kata[i] << "";
    }
}
