#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลของผู้ใช้ 3 คน
    char name[3][50];     // ชื่อ (ตัวอักษรพิมพ์ใหญ่)
    int age[3];           // อายุ (จำนวนเต็ม)
    float height[3];      // ส่วนสูง (เซนติเมตร)
    float weight[3];      // น้ำหนัก (กิโลกรัม)
    char gradeCode[3];    // รหัสเกรด (ตัวอักษร 1 ตัว เช่น A, B, C)

    // รับข้อมูลจากผู้ใช้ทีละบรรทัด โดยใช้ scanf
    for (int i = 0; i < 3; i++) {
        printf("Enter data for person %d:\n", i + 1);

        printf("Name : ");
        scanf("%s", name[i]);

        printf("Age: ");
        scanf("%d", &age[i]);

        printf("Height (cm): ");
        scanf("%f", &height[i]);

        printf("Weight (kg): ");
        scanf("%f", &weight[i]);

        printf("Grade Code (A, B, or C): ");
        scanf(" %c", &gradeCode[i]); // มี space นำหน้าเพื่อเคลียร์ buffer
    }

    // แสดงผลข้อมูลให้อยู่ในรูปแบบตารางแบบจัดตำแหน่ง
    printf("\n---------------------------------------------\n");
    printf("| %-10s | %-3s | %-10s | %-10s | %-10s |\n", 
           "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
    printf("---------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("| %-10s | %-3d | %-10.1f | %-10.1f | %-10c |\n", 
               name[i], age[i], height[i], weight[i], gradeCode[i]);
    }
    printf("---------------------------------------------\n");

    return 0;
}