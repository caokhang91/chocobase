// src/sentra.c
#include "sentra.h"
#include "ai.h"
#include "fs.h"
#include "keyboard.h"
#include <stdio.h>
#include <string.h>

void sentra_init() {
    fs_mount("/memory"); // Mount RAM-based memory
    fs_create("/memory/session1.txt");
}

void sentra_log_prompt(const char *prompt) {
    fs_append("/memory/session1.txt", "[user]> ");
    fs_append("/memory/session1.txt", prompt);
    fs_append("/memory/session1.txt", "\n");
}

void sentra_log_response(const char *response) {
    fs_append("/memory/session1.txt", "[sentra]> ");
    fs_append("/memory/session1.txt", response);
    fs_append("/memory/session1.txt", "\n");
}

void sentra_process(const char *prompt) {
    sentra_log_prompt(prompt);
    const char *response = ai_run_prompt(prompt);
    sentra_log_response(response);
    vga_print_line(response);
}
