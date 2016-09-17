#include "mfile.h"
#include <stdio.h>

int main(int argc, char** argv) {
	const int sample_rate = 44100;

	MFile mf(sample_rate);
	short buf[sample_rate];

	if (argc != 2) {
		printf("usage: %s <file.wm>\n", argv[0]);
		return 1;
	}

	//mf.load("AYASII.WM");
	if (!mf.load(argv[1])) {
		return 2;
	}
	mf.play();

	FILE *f = fopen("output.raw", "wb");
	for (int i = 0; i < 600; i++) {
		mf.showPos();
		mf.getpcm(buf, sizeof(buf) / 4);
		fwrite(buf, sizeof(buf), 1, f);
	}
	fclose(f);

	return 0;
}
