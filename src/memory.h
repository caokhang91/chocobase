// include/memory.h
#ifndef MEMORY_H
#define MEMORY_H

void memory_mount();
void memory_clear_session(const char *session_file);
void memory_append_prompt(const char *session_file, const char *prompt);
void memory_append_response(const char *session_file, const char *response);

#endif // MEMORY_H
