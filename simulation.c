#include <stdio.h>
int main() {
int arr[100], n, choice, i, pos, value, key, found, temp, j;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
do {
printf("\n===== ARRAY OPERATIONS MENU =====\n");
printf("1. Display Array\n");
printf("2. Insert Element\n");
printf("3. Delete Element\n");
printf("4. Search Element\n");
printf("5. Update Element\n");
printf("6. Sort Array\n");
printf("7. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 1) {
printf("Array Elements: ");
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
}
else if (choice == 2) {
printf("Enter position to insert: ");
scanf("%d", &pos);
printf("Enter value: ");
scanf("%d", &value);
for (i = n; i >= pos; i--)
arr[i] = arr[i - 1];
arr[pos - 1] = value;
n++;
printf("Element inserted.\n");
}
else if (choice == 3) {
printf("Enter position to delete: ");
scanf("%d", &pos);
if (pos <= n) {
for (i = pos - 1; i < n - 1; i++)
arr[i] = arr[i + 1];
n--;
printf("Element deleted.\n");
} else
printf("Invalid position.\n");
}
else if (choice == 4) {
printf("Enter element to search: ");
scanf("%d", &key);
found = 0;
for (i = 0; i < n; i++) {
if (arr[i] == key) {
printf("Element found at position %d.\n", i + 1);
found = 1;
break;
}
}
if (!found)
printf("Element not found.\n");
}
else if (choice == 5) {
printf("Enter position to update: ");
scanf("%d", &pos);
if (pos <= n) {
printf("Enter new value: ");
scanf("%d", &value);
arr[pos - 1] = value;
printf("Element updated.\n");
} else
printf("Invalid position.\n");
}
else if (choice == 6) {
for (i = 0; i < n - 1; i++) {
for (j = i + 1; j < n; j++) {
if (arr[i] > arr[j]) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("Array sorted.\n");
}
else if (choice == 7) {
printf("Exiting program.\n");
}
else {
printf("Invalid choice.\n");
}
} while (choice != 7);
return 0;
}