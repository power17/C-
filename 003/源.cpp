#include<stdio.h>
#include<stdlib.h>
void main(int l_length,char **l_arr) {
	if (l_length != 3) {
		return;
	}
	FILE *l_fp_read = fopen(l_arr[1], "rb");
	FILE *l_fp_write = fopen(l_arr[2] ,"wb");
	if (l_fp_read != NULL) {
		if (l_fp_write != NULL) {
			char l_temp = getc(l_fp_read);
			while (feof(l_fp_read) == 0) {
				putc(l_temp, l_fp_write);
				l_temp = getc(l_fp_read);
			}
			fclose(l_fp_write);
		}
	}
	fclose(l_fp_read);
}