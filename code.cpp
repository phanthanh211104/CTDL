#include <iostream>
using namespace std;
class Info{
    public :
    string  ten, dienThoai, diaChi, email;
    public :
    string getTen();
    void setTen();
    string getDienThoai();
    void setDienThoai();
    string getDiaChi();
    void setDiachi();
    string getEmail();
    void setEmail();

};
class Employee{
    public :
    string username, password;
    public :
    void XemThongTin();
    void DoiPassWord(string);

};
class Admin{
    public:
    string username, password;
    public :
    void ThemEmployee(Employee);
    bool TimEmployee(Info);
    void XoaEmployee(string, bool);
    void CapNhatEmployee(Employee);
    void HienThiEmployee();

};
class Man{
    public : 
    int vitriX;
    int vitriY;
    int dai, rong;
    string NoiDung;
    public :
    void xuLySuKien();
    void XuLyPhim(key_event_record);
    void ThongBao();

};
class ManDangNhap{
    public :
    void ChonDangNhap();
    string username(string);
    string password(string);


};
class ManAdmin{
    public : 
    void themEmployee();
    void xoaEmployee();
    void timEmployee();
    void capNhatEmployee();
    void hienThiThongTinEmployee();
    void Thoat();

};
class ManCapNhatEmployee{
    public :
    bool tonTai(string);
    void thongTinThayDoi(Info);

};
class ManHienThiThongTinEmployee{
    public :
    void hienThi();
};
class ManTimEmployee{
    public :
    void Tim(string);

};
class ManXoaEmployee{
    public :
    bool tonTai(string);
    void thongTin(Info);

};
class ManEmployee{
    public :
    void xemThongTin();
    void doiPassword();
    void Thoat();

};
class ManXemThongTin{

};
class ManDoiPassword{
    public : 
    bool nhapLaiMatKhau(string);
    void nhapMatKhauMoi(string);
};
