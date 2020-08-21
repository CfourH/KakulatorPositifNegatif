#include <iostream>
using namespace std;

int main(){

    int number;
    
    //Mulai Program
    int a;
    int b;
    
    
    
    //Menu
    
    cout << "Menu" << endl;
    
    cout << "1.Penambahan Dan Pengurangan" << endl;
    cout << "2.Keluar" << endl;
    cout << "Pilih Salah Satu: ";
    cin >> a;
      cin >> b;
    
    
    
    if (a == 1) //Penambahan Dan Pengurangan
    
    
    {
        
        
        //Menu
        
    
    cout << "Penambahan Dan Pengurangan" << endl;
cout << "Masukan Nilai Contohnya 1+6" << endl;
cout << "Lalu Klik Enter" << endl;


//Mulai Program


    cout << "Masukan Nilai: ";  //Masukan Nilai
    cin >> a;
    cin >> b;

//Jawaban

    cout << "Jawaban: ";
    cout << a + b << endl;

//Jawaban Kebalikanya


    cout << "Jawaban Kebalikanya: ";
    cout << a - b << endl;
    
    
    }
    
    //Keluar
    
    if (b == 2) 
    
    {
         
    cout << " Terima Kasih" << endl;
            
        
    }
    
    
      
    
    
    else //Jika Salah Memasukan
    
    
       {
        
        cout << "Anda Salah Memasukan" << endl;
        cout << "Silakan Masukan Lagi" << endl;
         
        
    }
    
    
    
    
    
    return 0;
}


