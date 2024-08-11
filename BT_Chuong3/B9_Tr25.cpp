//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 1000 // Định nghĩa kích thước tối đa cho chuỗi
//
//// Hàm liệt kê số lần xuất hiện của mỗi ký tự trong chuỗi
//void lietKeSoLanXuatHien(const char* chuoi) {
//    int dem[256] = { 0 }; // Mảng để đếm số lần xuất hiện của các ký tự (256 là số ký tự trong bảng mã ASCII)
//    const char* p = chuoi;
//
//    // Đếm số lần xuất hiện của mỗi ký tự
//    while (*p) {
//        dem[(unsigned char)*p]++;
//        p++;
//    }
//
//    // In kết quả
//    printf("So lan xuat hien cua moi ky tu:\n");
//    for (int i = 0; i < 256; i++) {
//        if (dem[i] > 0) {
//            printf("'%c': %d\n", i, dem[i]);
//        }
//    }
//}
//
//int main() {
//    char chuoi[MAX_LEN];
//
//    printf("Nhap chuoi: ");
//    fgets(chuoi, sizeof(chuoi), stdin);
//
//    // Xóa ký tự '\n' ở cuối chuỗi nếu có
//    chuoi[strcspn(chuoi, "\n")] = '\0';
//
//    lietKeSoLanXuatHien(chuoi);
//
//    return 0;
//}
