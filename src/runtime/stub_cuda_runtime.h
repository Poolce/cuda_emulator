#include "common.h"

#include <dlfcn.h>
#include <iostream>
#include <string.h>

extern "C"
{
    cudaError_t cudaMalloc(void **devPtr, size_t size);

    cudaError_t cudaFree(void *devPtr);

    cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, cudaMemcpyKind kind);

    cudaError_t cudaMemcpyHostToDevice(void *dst, const void *src, size_t count, cudaMemcpyKind kind);
    cudaError_t cudaMemcpyDeviceToHost(void *dst, const void *src, size_t count, cudaMemcpyKind kind);
    cudaError_t cudaGetLastError();
    const char *cudaGetErrorString(cudaError_t error);
    cudaError_t cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim,
                                 void **args, size_t sharedMem, cudaStream_t stream);
    cudaError_t cudaDeviceSynchronize();
}
