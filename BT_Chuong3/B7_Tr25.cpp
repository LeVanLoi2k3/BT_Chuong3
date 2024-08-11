//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 1000
//
//// Hàm chèn từ vào chuỗi tại vị trí chỉ định
//void chenTu(char* chuoiGoc, const char* tuChen, int viTri) {
//    int lenChuoi = strlen(chuoiGoc);
//    int lenTuChen = strlen(tuChen);
//
//    // Kiểm tra xem vị trí có hợp lệ không
//    if (viTri < 0 || viTri > lenChuoi) {
//        printf("Vi tri chen khong hop le.\n");
//        return;
//    }
//
//    // Nếu chuỗi gốc chưa đủ chỗ cho từ cần chèn, mở rộng chuỗi gốc
//    if (lenChuoi + lenTuChen + 1 > MAX_LEN) {
//        printf("Khong du bo nho de chen tu.\n");
//        return;
//    }
//
//    // Dịch chuyển phần còn lại của chuỗi gốc để tạo chỗ cho từ cần chèn
//    memmove(&chuoiGoc[viTri + lenTuChen], &chuoiGoc[viTri], lenChuoi - viTri + 1);
//
//    // Chèn từ vào vị trí chỉ định
//    memcpy(&chuoiGoc[viTri], tuChen, lenTuChen);
//}
//
//int main() {
//    char chuoiGoc[MAX_LEN], tuChen[MAX_LEN];
//    int viTri;
//
//    printf("Nhap chuoi goc: ");
//    fgets(chuoiGoc, sizeof(chuoiGoc), stdin);
//
//    // Xóa ký tự '\n' ở cuối chuỗi nếu có
//    chuoiGoc[strcspn(chuoiGoc, "\n")] = '\0';
//
//    printf("Nhap tu can chen: ");
//    fgets(tuChen, sizeof(tuChen), stdin);
//
//    // Xóa ký tự '\n' ở cuối chuỗi nếu có
//    tuChen[strcspn(tuChen, "\n")] = '\0';
//
//    printf("Nhap vi tri chen (bat dau tu 0): ");
//    scanf_s("%d", &viTri);
//
//    chenTu(chuoiGoc, tuChen, viTri);
//
//    printf("Chuoi sau khi chen: %s\n", chuoiGoc);
//
//    return 0;
//}
