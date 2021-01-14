/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPULSTM : _MLCCPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 lstmDescriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 ouputResultActivation:(id)arg8 ;
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForInputWeights:(id)arg3 dataForHiddenWeights:(id)arg4 dataForPeepholeWeights:(id)arg5 dataForBias:(id)arg6 ;
-(id)initWithDevice:(id)arg1 lstmDescriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 ;
@end

