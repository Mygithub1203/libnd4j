//
//  @author raver119@gmail.com
//

#include <ops/declarable/headers/common.h>

namespace nd4j {
    namespace ops {

        /**
         * This is scalar boolean op.
         * Both operands should be scalars.
         * 
         * Returns true if x < y
         */
        DECLARE_BOOLEAN_OP(lt_scalar, 2, true);

        /**
         * This is scalar boolean op.
         * Both operands should be scalars.
         * 
         * Returns true if x > y
         */
        DECLARE_BOOLEAN_OP(gt_scalar, 2, true);

        /**
         * This is scalar boolean op.
         * Both operands should be scalars.
         * 
         * Returns true if x <= y
         */
        DECLARE_BOOLEAN_OP(lte_scalar, 2, true);

        /**
         * This is scalar boolean op.
         * Both operands should be scalars.
         * 
         * Returns true if x >= y
         */
        DECLARE_BOOLEAN_OP(gte_scalar, 2, true);

        /**
         * This is scalar boolean op.
         * Both operands should be scalars.
         * 
         * Returns true if both operands are equal.
         */
        DECLARE_BOOLEAN_OP(eq_scalar, 2, true);

        /**
         * This is scalar boolean op.
         * Both operands should be scalars.
         * 
         * Returns true if x != y
         */
        DECLARE_BOOLEAN_OP(neq_scalar, 2, true);

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x == _y ? (T) 1.0f : (T) 0.0f;
         * 
         */
        DECLARE_OP(equals, 2, 1, true);

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x != _y ? (T) 1.0f : (T) 0.0f;
         */
        DECLARE_OP(not_equals, 2, 1, true);

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x <= _y ? (T) 1.0f : (T) 0.0f;
         */
        DECLARE_OP(less_equal, 2, 1, true);

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x >= _y ? (T) 1.0f : (T) 0.0f;
         */
        DECLARE_OP(greater_equal, 2, 1, true);

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x < _y ? (T) 1.0f : (T) 0.0f;
         */
        DECLARE_OP(less, 2, 1, true);

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x > _y ? (T) 1.0f : (T) 0.0f;
         */
        DECLARE_OP(greater, 2, 1, true);

        /**
         * This op takes 2 n-dimensional arrays as input, and return 
         * array of the same shape, with elements, either from x or y, depending on the condition.
         */
        DECLARE_CUSTOM_OP(Where, 1, 1, false, 0, 0);

        /**
         * This op takes 2 n-dimensional arrays as input, and return 
         * array of the same shape, with elements, either from x or y, depending on the condition.
         */
        DECLARE_CUSTOM_OP(select, 3, 1, false, 0, 0);
    }
}