#include <iostream>

using namespace std;

int main()
{

    cout << "Nama : Herdanu Lukmanul Hakim" << endl;
    cout << "NIM : 20101126" << endl;

    int angka[100],temp,digit,putar;
    char ulang='n';
    bool cek=true;

    angka[0]=0;

    do{
        putar=0;
        cout << "\nInput berapa digit?";
        cin >> digit;
        char lr[digit];
        for (int i=1;i<=digit;i++)
        {
            cin >> temp;
            cek=true;
            while(cek)
            {
                if (temp>=10)
                {
                    cout << "Masukkan per digit = ";
                    cek=true;
                }
                else
                {
                    angka[i]=temp;
                    cek=false;
                    cout << "input digit selanjutnya = ";
                }
            }
        }

        for(int i=1;i<=digit;i++)
        {
            if(angka[i-1]>angka[i])
            {
                lr[i-1]={'r'};
                cout << "Kanan - ";

            }
            else if(angka[i-1]<angka[i])
            {
                lr[i-1]={'l'};
                cout << "kiri - ";
            }
        }
        for(int i=1;i<digit;i++)
        {
            if(lr[i-1]!=lr[i])
            {
                putar++;
            }
        }
        cout << "\n\nTerjadi " << putar << " kali putaran" << endl;
        cout << "\n\nIngin ulang?";
        cin >> ulang;
    }while(ulang=='y'||ulang=='Y');

    for (int i=0;i<=digit;i++)
    {
        cout << angka[i];
    }
    return 0;
}
