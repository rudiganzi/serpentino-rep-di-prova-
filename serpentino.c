

#include "serpentino.h"

char* serpentino_encode(const char* s) {

	int nvocali = 0;

	if (s == NULL) { return NULL; }

	for (int k = 0; s[k] != 0; ++k) {

		if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u') {

			++nvocali;
		}
	}
	
	int len = strlen(s);

	int lenout = len + 2 * nvocali;

	char* out = malloc(lenout + 1);

	out[lenout] = 0;

	int j = 0;

	for (int i = 0; i < len; ++i) {

		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {


			out[j] = s[i];

			++j;

			out[j] = 's';

			++j;

			out[j] = s[i];

			++j;
		}
		else {
			out[j] = s[i];

			++j;

		}
	}

	return out;
}


int main() {

	

	char* a="ciaoooo";

	char* b = "ciao mi chiamo rudi";

	char* c = "bella li bella raga";

	char* d = "nothing happened in tienanmen square on 4th June 1989";


	printf("%s\n\n", serpentino_encode(a));

	printf("%s\n\n", serpentino_encode(b));

	printf("%s\n\n", serpentino_encode(c));

	printf("%s\n\n", serpentino_encode(d));


	return 0;

}