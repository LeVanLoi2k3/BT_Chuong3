//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//// Hàm cắt chuỗi họ tên thành chuỗi họ lót và chuỗi tên
//void catChuoi(const char* hoTen, char* hoLot, char* ten) {
//    int n = strlen(hoTen);
//    int i;
//
//    // Tìm vị trí đầu tiên của ký tự trắng từ phải sang trái
//    for (i = n - 1; i >= 0; i--) {
//        if (hoTen[i] == ' ') {
//            break;
//        }
//    }
//
//    // Nếu không tìm thấy khoảng trắng, toàn bộ chuỗi là tên
//    if (i < 0) {
//        hoLot[0] = '\0'; // Không có họ lót
//        strcpy_s(ten, 100, hoTen);
//        return;
//    }
//
//    // Tạo chuỗi tên
//    strcpy_s(ten, 100, &hoTen[i + 1]);
//
//    // Tạo chuỗi họ lót
//    strncpy_s(hoLot, 100, hoTen, i);
//    hoLot[i] = '\0';
//}
//
//int main() {
//    char hoTen[100], hoLot[100], ten[100];
//
//    printf("Nhap chuoi ho ten: ");
//    fgets(hoTen, sizeof(hoTen), stdin);
//
//    // Xóa ký tự '\n' ở cuối chuỗi nếu có
//    hoTen[strcspn(hoTen, "\n")] = '\0';
//
//    catChuoi(hoTen, hoLot, ten);
//
//    printf("Chuoi ho lot: %s\n", hoLot);
//    printf("Chuoi ten: %s\n", ten);
//
//    return 0;
//}
