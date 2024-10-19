#pragma once

#include <stdint.h>
#include <stdio.h>

typedef void *cudaStream_t;

enum cudaError_t
{
    cudaSuccess,
    cudaErrorMemoryAllocation,
};

enum class cudaMemcpyKind
{
    cudaMemcpyHostToDevice = 0,
    cudaMemcpyDeviceToHost = 1,
    cudaMemcpyDeviceToDevice = 2,
    cudaMemcpyHostToHost = 3
};

struct dim3
{
    unsigned int x, y, z;
    dim3(unsigned int _x = 1, unsigned int _y = 1, unsigned int _z = 1) : x(_x), y(_y), z(_z) {}
};
