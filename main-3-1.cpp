extern void dangerous_values(double vals[],double threshold, int length);

int main(){
    double a1[4] = {50, 80.3, 40, 90.2};
    double thresh = 50;

    dangerous_values(a1, thresh, 4);

}
