
__global__ void complementDNA(int x) {
    x = x + 1;
}

void _complementDNA(int x) {
    complementDNA<<<1,1>>>(x);
}