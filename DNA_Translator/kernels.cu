
__global__ void complementDNA(int* d_x, int x) {
    x = x + 1;
    *d_x = x;
}

int _complementDNA(int x) {
    int* d_x;
    cudaMalloc( (void**) &d_x, sizeof(int) );

    complementDNA<<<1,1>>>(d_x, x);

    int r;
    cudaMemcpy(&r, d_x, sizeof(int), cudaMemcpyDeviceToHost);

    return r;
}