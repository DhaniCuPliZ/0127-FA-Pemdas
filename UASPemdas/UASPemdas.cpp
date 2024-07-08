#include <iostream> 
using namespace std; 
class MataKuliah
{
protected:
    // isi dengan access modifier yang dibutuhkan 
    string namaMataKuliah;
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

    // tambahkan dengan variabel lain yang dibutuhkan dibawah ini 
public:
    MataKuliah() {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasAkhir = 0.0;
        // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini 
    }
    virtual void namaMataKuliah() { return; }
    // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini 

    void setNamaMataKuliah(string nama)
    {
        this->namaMataKuliah = nama;
    }
    string getNamaMataKuliah()
    {
        return namaMataKuliah;
    }
    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    void setActivity(float nilai)
    {
        this->activity = nilai;
    }
    float getActivity()
    {
        return activity;
    }
    void setExercise(float nilai)
    {
        this->exercise = nilai;
    }
    float getExercise()
    {
        return exercise;
    }
    void setTugasAkhir(float nilai)
    {
        this->tugasAkhir = nilai;
    }
    float getTugasAkhir()
    {
        return tugasAkhir;
    }
    // tambahkan setter dan getter lain yang dibutuhkan dibawah ini 
    void cetakInfo() {
        cout << "Nama Mata Kuliah: " << namaMataKuliah << endl;
        cout << "Presensi: " << presensi << endl;
        cout << "Activity: " << activity << endl;
        cout << "exercise: " << exercise << endl;
        cout << "Tugas Akhir: " << tugasAkhir << endl;
    }
};

class Pemrograman : public MataKuliah
{
    // isi disini untuk mengisi kelas pemrograman 
};
class Jaringan : public MataKuliah
{
    // isi disini untuk mengisi kelas jaringan 
};
int main()
{
    char pilih;     MataKuliah* mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;

    // isi disini untuk menentukan mata kuliah yang dipilih 
}
