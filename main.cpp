#include "bruteforce.cpp"


int main() {
    string pas1, gen;
    pas1 = input_password();
    cout << "Your input ->" << pas1 << endl;
    gen = gen_password(pas1);
    cout << "Gen password ->" << gen;

}