void print_char(char c);

void my_print_n_ascii(int n)
{
    if (n > 94) {
        return;
    }
    for (int i = 33; i <= n; i++) {
        print_char(i);
    }
    
}