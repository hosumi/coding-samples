/**
  Sunscreen
  http://poj.org/problem?id=3614   
 */   
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Cow {
    int min_spf;
    int max_spf;
    Cow(int min, int max) : min_spf(min), max_spf(max){}
};
typedef vector<Cow> Cows;

struct Bottle {
    int spf;
    int cover;
    Bottle(int s, int c) : spf(s), cover(c){}
};
typedef vector<Bottle> Bottles;

struct CowMinSpfComparator {
    bool operator()(const Cow& c1, const Cow& c2){
        return c1.min_spf < c2.min_spf;
    }
};

struct BottleSpfComparator {
    bool operator()(const Bottle& b1, const Bottle& b2){
        return b1.spf < b2.spf;
    }
};

// debug
#ifndef ONLINE_JUDGE
static inline void print_cow(const Cow& c) {
    cerr << "c[min_spf: " << c.min_spf << ", max_spf:" << c.max_spf << "], ";
}
static inline void print_cows(const Cows& cs) {
    cerr << "cs{";
    for_each(cs.begin(), cs.end(), print_cow);
    cerr << "}" << endl;
}
static inline void print_bottle(const Bottle& b) {
    cerr << "b[spf: " << b.spf << ", cover:" << b.cover << "], ";
}
static inline void print_bottles(const Bottles& bs) {
    cerr << "bs{";
    for_each(bs.begin(), bs.end(), print_bottle);
    cerr << "}" << endl;
}
#endif //ONLINE_JUDGE

int main(void){
    // Line 1: Two space-separated integers: C and L
    int C, L; cin >> C >> L;
    
    #ifndef ONLINE_JUDGE
    //cerr << "C:" << C << " L:" << L << endl;
    #endif //ONLINE_JUDGE

    // Lines 2..C+1: Line i describes cow i's lotion requires 
    // with two integers: minSPF_i and maxSPF_i
    Cows cows;
    for (int i = 0; i < C; ++i){
        int min_spf_i, max_spf_i; cin >> min_spf_i >> max_spf_i;
        cows.push_back(Cow(min_spf_i, max_spf_i));
    }

    // Lines C+2..C+L+1: Line i+C+1 describes a sunscreen lotion bottle i 
    // with space-separated integers: SPF_i and cover_i
    Bottles bottles;
    for (int i = 0; i < L; ++i){
        int spf_i, cover_i; cin >> spf_i >> cover_i;
        bottles.push_back(Bottle(spf_i, cover_i));
    }
    #ifndef ONLINE_JUDGE
    cerr << endl << "[initial]" << endl;
    print_cows(cows);
    print_bottles(bottles);
    #endif //ONLINE_JUDGE

    return 0;
}
