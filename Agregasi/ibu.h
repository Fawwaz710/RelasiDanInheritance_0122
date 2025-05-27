#include <iostream>
#include <vector>
#include "anak.h"
#include <string>
#ifndef IBU_H
#define IBU_H
using namespace std;

class ibu {
    public:
    string nama;
    vector<anak*> daftar_anak;

    ibu (string pNama): nama(pNama) {
        cout << "ibu \"" << nama << "\" ada\n";
    }

    ~ibu() {
        cout << "ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
