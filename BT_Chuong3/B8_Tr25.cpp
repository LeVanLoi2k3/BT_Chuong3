//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 1000 // Định nghĩa kích thước tối đa cho chuỗi
//
//// Hàm xóa từ trong chuỗi
//void xoaTu(char* chuoiGoc, const char* tuXoa) {
//    char tam[MAX_LEN];
//    char* p = chuoiGoc;
//    char* q = tam;
//
//    int lenTuXoa = strlen(tuXoa);
//
//    // Duyệt qua chuỗi gốc và sao chép các phần không phải là từ cần xóa vào tam
//    while (*p) {
//        // So sánh phần từ hiện tại với từ cần xóa
//        if (strncmp(p, tuXoa, lenTuXoa) == 0 && (p[lenTuXoa] == ' ' || p[lenTuXoa] == '\0')) {
//            p += lenTuXoa; // Bỏ qua từ cần xóa
//            // Bỏ qua khoảng trắng giữa các từ
//            while (*p == ' ') {
//                p++;
//            }
//        }
//        else {
//            *q++ = *p++;
//        }
//    }
//
//    *q = '\0'; // Kết thúc chuỗi tam
//    strcpy_s(chuoiGoc, MAX_LEN, tam); // Sử dụng strcpy_s để sao chép chuỗi
//}
//
//int main() {
//    char chuoiGoc[MAX_LEN];
//    char tuXoa[MAX_LEN];
//
//    printf("Nhap chuoi goc: ");
//    fgets(chuoiGoc, sizeof(chuoiGoc), stdin);
//
//    // Xóa ký tự '\n' ở cuối chuỗi nếu có
//    chuoiGoc[strcspn(chuoiGoc, "\n")] = '\0';
//
//    printf("Nhap tu can xoa: ");
//    fgets(tuXoa, sizeof(tuXoa), stdin);
//
//    // Xóa ký tự '\n' ở cuối chuỗi nếu có
//    tuXoa[strcspn(tuXoa, "\n")] = '\0';
//
//    xoaTu(chuoiGoc, tuXoa);
//
//    printf("Chuoi sau khi xoa: %s\n", chuoiGoc);
//
//    return 0;
//}
