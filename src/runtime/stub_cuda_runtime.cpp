#include "stub_cuda_runtime.h"

cudaError_t cudaMalloc(void **devPtr, size_t size)
{
    *devPtr = malloc(size);
    if (*devPtr == nullptr)
    {
        return cudaError_t::cudaErrorMemoryAllocation;
    }
    std::cout << "cudaMalloc\n";
    return cudaError_t::cudaSuccess;
}

cudaError_t cudaFree(void *devPtr)
{
    std::cout << "cudeFree\n";
    free(devPtr);
    return cudaError_t::cudaSuccess;
}

cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, cudaMemcpyKind kind)
{
    std::cout << "cudeMemcpy\n";
    memcpy(dst, src, count);
    return cudaError_t::cudaSuccess;
}

cudaError_t cudaMemcpyHostToDevice(void *dst, const void *src, size_t count, cudaMemcpyKind kind)
{

    std::cout << "cudeMemcpy\n";
    memcpy(dst, src, count);
    return cudaError_t::cudaSuccess;
}

cudaError_t cudaMemcpyDeviceToHost(void *dst, const void *src, size_t count, cudaMemcpyKind kind)
{
    std::cout << "cudeMemcpy\n";
    memcpy(dst, src, count);
    return cudaError_t::cudaSuccess;
}

cudaError_t cudaGetLastError()
{
    std::cout << "cudaGetLastError\n";
    return cudaError_t::cudaSuccess;
}

const char *cudaGetErrorString(cudaError_t error)
{
    return "No error";
}

cudaError_t cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim,
                             void **args, size_t sharedMem, cudaStream_t stream)
{
    std::cout << "cudaLaunchKernel"<<"\t\n";
    return cudaError_t::cudaSuccess;
}

cudaError_t cudaDeviceSynchronize()
{
    std::cout << "cudaDeviceSynchronize\n";
    return cudaError_t::cudaSuccess;
}
