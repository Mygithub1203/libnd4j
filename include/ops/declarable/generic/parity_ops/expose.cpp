//
// Created by raver119 on 12/11/17.
//

#include <ops/declarable/CustomOperations.h>

namespace nd4j {
    namespace ops {
        CUSTOM_OP_IMPL(expose, -1, -1, true, 0, 0) {

            for (int e = 0; e < block.width(); e++) {
                auto inVar = block.variable(e);
                if (inVar->variableType() == VariableType::NDARRAY) {
                    auto in = INPUT_VARIABLE(e);
                    auto out = OUTPUT_VARIABLE(e);

                    out->assign(in);
                } else if (inVar->variableType() == VariableType::ARRAY_LIST) {
                    auto var = block.ensureVariable(e);
                    if (!var->hasNDArrayList()) {
                        auto list = inVar->getNDArrayList();

                        block.pushNDArrayListToVariableSpace(block.nodeId(), e, list, false);
                    }
                }
            }

            return ND4J_STATUS_OK;
        }
        DECLARE_SYN(Enter, expose);
        DECLARE_SYN(enter, expose);

        DECLARE_SHAPE_FN(expose) {
            auto shapeList = new ShapeList();

            for (int e = 0; e < block.width(); e++) {
                auto p = block.input(e);
                auto var = block.getVariable(e);
                if (var->variableType() == VariableType::NDARRAY) {
                    auto inShape = inputShape->at(e);
                    int *newShape;
                    ALLOCATE(newShape, block.getWorkspace(), shape::shapeInfoLength(inShape), int);
                    memcpy(newShape, inShape, shape::shapeInfoByteLength(inShape));

                    shapeList->push_back(newShape);
                }
            }

            return shapeList;
        }
    }
}