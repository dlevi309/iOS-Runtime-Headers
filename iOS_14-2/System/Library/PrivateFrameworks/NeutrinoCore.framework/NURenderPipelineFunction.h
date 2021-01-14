/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@interface NURenderPipelineFunction : NSObject
+(id)functionWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)scaleMultiplyOfScalar:(double)arg1 ;
+(id)scaledVector:(id)arg1 ;
+(id)sharpnessWithIntensity:(double)arg1 ;
+(id)redEyeSpotsWithCorrectionInfo:(id)arg1 ;
+(id)grainInputSeedFromFrameTime;
-(id)evaluate:(id)arg1 error:(out id*)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2 ;
@end

