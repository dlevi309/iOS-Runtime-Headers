/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPUConvolution : _MLCGPULayer
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 weights:(id)arg3 bias:(id)arg4 ;
+(void)setGradientComputeWeightsAndBiasOnly:(id)arg1 deviceOps:(id)arg2 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 descriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
@end

