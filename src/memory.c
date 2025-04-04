// src/memory.c
#include "memory.h"
#include "fs.h"
#include <stdio.h>
#include <string.h>

void memory_mount() {
    fs_mount("/memory");
}

void memory_clear_session(const char *session_file) {
    fs_write(session_file, "");
}

void memory_append_prompt(const char *session_file, const char *prompt) {
    fs_append(session_file, "[user]> ");
    fs_append(session_file, prompt);
    fs_append(session_file, "\n");
}

void memory_append_response(const char *session_file, const char *response) {
    fs_append(session_file, "[sentra]> ");
    fs_append(session_file, response);
    fs_append(session_file, "\n");
}
