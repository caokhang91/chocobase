// include/sentra.h
#ifndef SENTRA_H
#define SENTRA_H

void sentra_init();
void sentra_log_prompt(const char *prompt);
void sentra_log_response(const char *response);
void sentra_process(const char *prompt);

#endif // SENTRA_H
