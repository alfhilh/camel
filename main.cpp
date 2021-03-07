#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int kapital = 0, angka = 0, kecil= 0, valid = 0, spasi=0;
    string temp;

    cout<<"Masukkan kalimat : ";
    getline(cin, temp);
    cout<<endl;

    char* pisah= new char[temp.length()];
    std::strcpy(pisah, temp.c_str());
    for (int i = 0; i < temp.length()+1; i++){
        if(pisah[i]>='A' && pisah[i]<='Z'){
            ++kapital;
        } else if(pisah[i]>='0' && pisah[i]<='9'){
            ++angka;
        } else if(pisah[i]==' '){
            ++spasi;
        } else {++kecil;}
    }


    if(pisah[0]>='A' && pisah[0]<='Z'){
        valid=3;
    }else if(kapital >= 1 && kecil >= 1 && angka==0 && spasi==0 ){
        valid=1;
    }else if ((angka >= 1 && kecil >= 1)||(angka >= 1)||(spasi>=1)){
        valid=2;
    }else{
        valid=3;
    }

    switch(valid){
        case 1:
        cout<<"kata sebelum dipisah : "<<temp<<endl<<endl;
        cout<<"jumlah kata : "<<kapital+1<<endl<<endl;
        cout<<"Kata yang tersedia : ";
        for (int i = 0; i < temp.length()+1; i++){
            std::cout << pisah[i] <<"";
            if(pisah[i+1]>='A' && pisah[i+1]<='Z'){
                std::cout<<", ";
            }
        }
        cout<<endl<<endl;
        break;
        case 2:
        cout<<"kata sebelum dipisah : "<<temp<<endl<<endl;
        cout<<"Input hanya boleh berupa huruf"<<endl<<endl;
        break;
        case 3:
        cout<<"kata sebelum dipisah : "<<temp<<endl<<endl;
        cout<<"Penulisan input harus camel case"<<endl<<endl;
        break;

    }
}
