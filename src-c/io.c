
#include <quill.h>
#include <stdio.h>

void quill_print(quill_string_t text) {
    fwrite(text.data, sizeof(uint8_t), text.length_bytes, stdout);
    fflush(stdout);
}

void quill_eprint(quill_string_t text) {
    fwrite(text.data, sizeof(uint8_t), text.length_bytes, stderr);
    fflush(stdout);
}

void quill_panic(quill_string_t reason) {
    fwrite(reason.data, sizeof(uint8_t), reason.length_bytes, stderr);
    fflush(stdout);
    exit(1);
}