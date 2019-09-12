#include <stdio.h>
int main() {
	char InputCharrot;
	scanf_s("%c", &InputCharrot);
	if ((65 <= InputCharrot) && (InputCharrot <= 90)) {
		int Spaces;
		int PrintCharrot = 64;
		for (int CurrentCharrot = 65; CurrentCharrot <= InputCharrot; CurrentCharrot++) {
			for (Spaces = InputCharrot - CurrentCharrot; Spaces > 0; Spaces--) {
				printf(" ");
			}
			for (PrintCharrot++; PrintCharrot < CurrentCharrot; PrintCharrot++) {
				printf("%c", PrintCharrot);
			}
			for (PrintCharrot; PrintCharrot > 64; PrintCharrot--) {
				printf("%c", PrintCharrot);
			}
			printf("\n");
		}
	}
	return 0;
}