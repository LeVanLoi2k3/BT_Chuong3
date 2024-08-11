//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 1000 
//
//// Hàm tìm ký tự xuất hiện nhiều nhất trong chuỗi
//void timKyTuXuatHienNhieuNhat(const char* chuoi) {
//    int dem[256] = { 0 }; 
//    const char* p = chuoi;
//    int maxCount = 0;
//
//    // Đếm số lần xuất hiện của mỗi ký tự
//    while (*p) {
//        dem[(unsigned char)*p]++;
//        p++;
//    }
//
//    // Tìm số lần xuất hiện nhiều nhất
//    for (int i = 0; i < 256; i++) {
//        if (dem[i] > maxCount) {
//            maxCount = dem[i];
//        }
//    }
//
//    // In các ký tự xuất hiện nhiều nhất
//    printf("Ky tu xuat hien nhieu nhat (voi so lan xuat hien: %d):\n", maxCount);
//    for (int i = 0; i < 256; i++) {
//        if (dem[i] == maxCount) {
//            printf("'%c'\n", (char)i);
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
//    timKyTuXuatHienNhieuNhat(chuoi);
//
//    return 0;
//}
