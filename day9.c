#include <stdio.h>

int main() {
    int n, i = 1;
    int daysPresent;
    int eligibleCount = 0, notEligibleCount = 0;
    float percentage, totalAttendance = 0;

    printf("Enter total number of students: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("Enter attendance for student %d (out of 30): ", i);
        scanf("%d", &daysPresent);

        percentage = (daysPresent / 30.0) * 100;
        totalAttendance += percentage;

        printf("Student %d: %.2f%% - ", i, percentage);

        if (percentage >= 75) {
            printf("Eligible\n");
            eligibleCount++;
        } else {
            printf("Not Eligible\n");
            notEligibleCount++;
        }

        i++;
    }

    printf("\nClass Summary:\n");
    printf("Total Students: %d\n", n);
    printf("Eligible Students: %d\n", eligibleCount);
    printf("Not Eligible: %d\n", notEligibleCount);
    printf("Average Attendance: %.2f%%\n", totalAttendance / n);

    return 0;
}
