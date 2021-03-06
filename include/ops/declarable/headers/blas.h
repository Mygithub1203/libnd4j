//
//  @author raver119@gmail.com
//

#include <ops/declarable/headers/common.h>

namespace nd4j {
    namespace ops {
        
        /**
         * This op is general matmum implementation. Depending on inputs dimensionality output result might be different.
         * matrix x matrix = BLAS gemm
         * vector x matrix = BLAS gemm
         * vector x vector = BLAS dot
         * vector x scalar = element-wise mul
         * scalar x vector = element-wise mul
         *
         * Optional T arguments:
         * 0: alpha (where applicable)
         * 1: beta (where applicable)
         *
         * Optional Integer arguments:
         * 0: transA (where applicable)
         * 1: transB (where applicable)
         */
        DECLARE_CUSTOM_OP(matmul, 2, 1, false, -2, -2);

        /**
         * tensorMmul/tensorDot operation
         * takes 2 ndarrays, and 2 sets of axes
         *
         * Integer argumens map:
         * IArgs[0] - number of axes along for first array
         * IArgs[1]... axes values for first array
         * IArgs[] - number of axes along for second array
         * IArgs[1]... axes values for second array
         */
        DECLARE_CUSTOM_OP(tensormmul, 2, 1, false, 0, -1);   

        /**
         * This op is simple implementation of BLAS AXPY method.
         * Math is: y += a * x;
         */
        DECLARE_CONFIGURABLE_OP(axpy, 2, 1, false, -2, 0);

        /**
         * This operation implements batched matrix multiplication
         * Expected arguments:
         * alpha: vector of T
         * beta: vector of T
         * ...: A, B matrices sequentially. i.e: AAAAABBBBB
         * 
         * Integer arguments:
         * transA, transB, M, N, K, ldA, ldB, ldC - usual BLAS gemm arguments
         * batchCount - number of operations in this batch
         * 
         * PLEASE NOTE: M, N, K, ldA, ldB, ldC should be equal for all matrices within batch.
         */
        DECLARE_CUSTOM_OP(batched_gemm, -1, -1, false, 0, 9);
    }
}