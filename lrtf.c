#include <stdio.h>

int main() {
    int n, bt[10], tat[10], wt[10], rt[10], at[10];
    int largest;
    int time;
    int count = 0;
    int i;

    printf("Enter the number of processes: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("BT[%d]: \n", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }

    for (i = 0; i < n; i++) {
        printf("AT[%d]: \n", i + 1);
        scanf("%d", &at[i]);
    }

    printf("\nPID\tBT\tTAT\tWT\n");

    for (time = 0; count != n; time++) {
        largest = -1;
        for (i = 0; i < n; i++) {
            if (at[i] <= time && rt[i] > 0 && (largest == -1 || rt[i] > rt[largest])) {
                largest = i;
            }
        }
        if (largest == -1) {
            continue;
        }
        rt[largest]--;
        if (rt[largest] == 0) {
            count++;
            int ct = time + 1;  // Completion time
            tat[largest] = ct - at[largest];  // Turnaround time
            wt[largest] = tat[largest] - bt[largest];  // Waiting time
            printf("\nP%d\t%d\t%d\t%d", largest + 1, bt[largest], tat[largest], wt[largest]);
        }
    }

    return 0;
}

