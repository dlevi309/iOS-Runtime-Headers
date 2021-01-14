/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUFullyConnected : _MLCCPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 opType:(int)arg6 ;
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 fusedBatchNormAndNeuronLayers:(BOOL)arg6 mean:(id)arg7 variance:(id)arg8 beta:(id)arg9 gamma:(id)arg10 varianceEpsilon:(float)arg11 momentum:(float)arg12 opType:(int)arg13 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 fusedBatchNormAndNeuron:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 fusedBatchNormAndNeuronLayers:(BOOL)arg6 mean:(id)arg7 variance:(id)arg8 beta:(id)arg9 gamma:(id)arg10 varianceEpsilon:(float)arg11 momentum:(float)arg12 opType:(int)arg13 ;
@end

