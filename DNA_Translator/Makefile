translator: main.cpp
	g++-6 -c main.cpp 
	nvcc -c kernels.cu
	nvcc -o translator main.o kernels.o
	rm main.o kernels.o

clean:
	rm translator