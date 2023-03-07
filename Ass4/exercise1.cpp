#include<iostream>
using namespace std;

class Nhanvien
{
    string tenNV;
    string IdNV;
    string pNV;
    string cvNV;
public:
    void setTenNV(string tenNV){
        this->tenNV = tenNV;
    }
    string getTenNV(){
        return this->tenNV;
    }
    void setIdNV(string maNV){
        this->IdNV= maNV;
    }
    string getIdNV(){
        return this->IdNV;
    }
    void setpNV(string pbNV){
        this->pNV = pbNV;
    }
    string getpNV(){
        return this->pNV;
    }
    void setcvNV(string CvNV){
        this->cvNV = CvNV;
    }
    string getcvNV(){
        return this->cvNV;
    }
};
int main(){
    Nhanvien nv1;
    Nhanvien nv2;
    Nhanvien nv3;
    
    nv1.setTenNV("Susan Meyers");
    nv2.setTenNV("Mark Jones");
    nv3.setTenNV("Joy Rogers");
    nv1.setIdNV("47899");
    nv2.setIdNV("39119");
    nv3.setIdNV("81774");
    nv1.setpNV("Vice President");
    nv2.setpNV("");
    nv3.setpNV("");
    nv1.setcvNV("Accounting");
    nv2.setcvNV("IT Programmer");
    nv3.setcvNV("Manufacturing Engineer");

    cout<< nv1.getTenNV() << " " << nv1.getIdNV()<< " " << nv1.getcvNV()<< " " << nv1.getpNV()<< endl;
    cout<< nv2.getTenNV() << " " << nv2.getIdNV()<< " " << nv2.getcvNV()<< " " << nv2.getpNV()<< endl;
    cout<< nv3.getTenNV() << " " << nv3.getIdNV()<< " " << nv3.getcvNV()<< " " << nv3.getpNV()<< endl;
    return 0;
}
