#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int k, ...);
void print_numbers(const char *separator, const unsigned int k, ...);
void print_strings(const char *separator, const unsigned int k, ...);
void print_all(const char * const format, ...);
#endif
