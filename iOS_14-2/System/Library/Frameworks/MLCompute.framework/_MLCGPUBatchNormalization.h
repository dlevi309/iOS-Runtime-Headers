/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPUBatchNormalization : _MLCGPULayer
+(id)layerWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
+(id)layerWithDevice:(id)arg1 fusedWithNeuronDescriptor:(id)arg2 numOfFeatureChannels:(unsigned long long)arg3 mean:(id)arg4 variance:(id)arg5 beta:(id)arg6 gamma:(id)arg7 varianceEpsilon:(float)arg8 momentum:(float)arg9 ;
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 beta:(id)arg3 gamma:(id)arg4 ;
+(BOOL)allocateMovingUpdaterWith:(id)arg1 gpuOps:(id)arg2 mean:(id)arg3 variance:(id)arg4 momentum:(float)arg5 deviceIndex:(unsigned long long)arg6 ;
-(id)initWithDevice:(id)arg1 fusedWithNeuronDescriptor:(id)arg2 numOfFeatureChannels:(unsigned long long)arg3 mean:(id)arg4 variance:(id)arg5 beta:(id)arg6 gamma:(id)arg7 varianceEpsilon:(float)arg8 momentum:(float)arg9 ;
-(id)initWithDevice:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8 ;
@end

