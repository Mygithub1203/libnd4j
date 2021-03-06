//
//  @author raver119@gmail.com
//

#include <ops/declarable/headers/common.h>

namespace nd4j {
    namespace ops {
        DECLARE_CUSTOM_OP(permute, 1, 1, true, 0, -2);   
        DECLARE_CUSTOM_OP(reshapeas, 2, 1, true, 0, 0);      
        DECLARE_CUSTOM_OP(transpose, 1, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(shape_of, 1, 1, false, 0, 0);
        DECLARE_CUSTOM_OP(shapes_of, -1, -1, false, 0, 0);
        DECLARE_CUSTOM_OP(squeeze, -1, -1, true, 0, 0);
        DECLARE_CUSTOM_OP(expand_dims, 1, 1, false, 0, 1);
        DECLARE_CUSTOM_OP(reshape, 1, 1, true, 0, -2);
    }
}