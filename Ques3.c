#include <stdio.h>

void TowerOfHanoi(int n, char from, char to, char aux) {
  
    if(n == 0) {
        return;
    }
   
    TowerOfHanoi(n-1, from, aux, to);
    printf("Shift Disk %d from %c to %c.\n", n, from, aux);
    TowerOfHanoi(n-1, to, from, aux);
}

int main() {
    int n;
    printf("Enter the number of disks you want to shift from A to C: ");
    scanf("%d",&n);
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}