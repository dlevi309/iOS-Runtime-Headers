/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUMHAttention : _MLCCPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 descriptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(BOOL)arg6 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(BOOL)arg6 ;
@end

