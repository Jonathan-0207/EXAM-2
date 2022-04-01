extern int* create_ints(int num_vals);
extern void display_array(int *vals, int num_vals);

int main(){
    int *ptr_ints;
    ptr_ints = create_ints(5);

    display_array(ptr_ints, 5);

}
