/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MPSGraphOptimizer.h>

@class MPSGraphTensor, MPSGraphVariableOp;

@interface MPSGraphAdamOptimizer : MPSGraphOptimizer {

	MPSGraphTensor* _beta1Tensor;
	MPSGraphTensor* _beta2Tensor;
	MPSGraphTensor* _epsilonTensor;
	MPSGraphVariableOp* _iterationsVariable;

}
-(id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 variablesToGradientTensorMap:(id)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 trainableVariables:(id)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 beta1:(float)arg3 beta2:(float)arg4 epsilon:(float)arg5 iterations:(unsigned long long)arg6 trainableVariables:(id)arg7 variablesToGradientTensorMap:(id)arg8 name:(id)arg9 ;
-(id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 beta1:(float)arg4 beta2:(float)arg5 epsilon:(float)arg6 iterations:(unsigned long long)arg7 trainableVariables:(id)arg8 name:(id)arg9 ;
@end
