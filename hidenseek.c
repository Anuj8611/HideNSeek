#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void xorCipher(FILE *input, FILE *output, char key) {
    int c;
    while ((c = fgetc(input)) != EOF) {
        fputc(c ^ key, output);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Usage: %s <mode> <input_file> <output_file> <key>\n", argv[0]);
        printf("mode: enc = encrypt, dec = decrypt\n");
        return 1;
    }

    char *mode = argv[1];
    char *inputFile = argv[2];
    char *outputFile = argv[3];
    char key = argv[4][0];

    FILE *in = fopen(inputFile, "rb");
    if (!in) {
        perror("Error opening input file");
        return 1;
    }

    FILE *out = fopen(outputFile, "wb");
    if (!out) {
        perror("Error opening output file");
        fclose(in);
        return 1;
    }

    if (strcmp(mode, "enc") == 0 || strcmp(mode, "dec") == 0) {
        xorCipher(in, out, key);
        printf("Operation successful: %s -> %s\n", inputFile, outputFile);
    } else {
        printf("Invalid mode. Use 'enc' for encryption or 'dec' for decryption.\n");
    }

    fclose(in);
    fclose(out);
    return 0;
}
