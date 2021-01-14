/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@interface _EARNnetUtil : NSObject
+(void)initialize;
+(id)doBackPropWithNnetModelFile:(id)arg1 inputFeatureVector:(id)arg2 inputTargetVector:(id)arg3 inputLearningRate:(float)arg4 inputFreezeComponents:(id)arg5 inputNumLocalIterations:(int)arg6 inputGradNormFactor:(float)arg7 inputGradNormType:(id)arg8 inputBatchSize:(float)arg9 inputObjectiveFunction:(id)arg10 outTrainingLosses:(id*)arg11 outModelLayersUpdated:(id*)arg12 ;
+(id)doBackPropWithNnetModelFile:(id)arg1 inputFeatureVector:(id)arg2 inputTargetVector:(id)arg3 inputLearningRate:(float)arg4 inputFreezeComponents:(id)arg5 inputNumLocalIterations:(int)arg6 inputGradNormFactor:(float)arg7 inputGradNormType:(id)arg8 inputBatchSize:(float)arg9 inputObjectiveFunction:(id)arg10 outTrainingLoss:(float*)arg11 outModelLayersUpdated:(id*)arg12 ;
@end

