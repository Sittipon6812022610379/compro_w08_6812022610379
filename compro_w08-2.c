#include <stdio.h>

int main() {
    int start, stop;

    // รับค่า
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // แสดงเริ่มต้น
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("--------------\n");

    // แสดงตัวเลข
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // แสดงข้อความปิด
    printf("Thank you.\n");

    return 0;
}