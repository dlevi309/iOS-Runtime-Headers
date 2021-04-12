/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADMonocularPipeline, ADMonocularExecutorParameters;

@interface ADMonocularExecutor : ADExecutor {

	ADMonocularPipeline* _pipeline;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmUnprocessedDepth;
	CVBufferRef _itmPostProcessedDepth;
	ADMonocularExecutorParameters* _executorParameters;

}

@property (nonatomic,retain) ADMonocularExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(ADMonocularExecutorParameters *)executorParameters;
-(void)dealloc;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(void)deallocateEspressoBuffers;
-(long long)allocateIntermediateBuffers;
-(long long)numberOfExecutionSteps;
-(void)setExecutorParameters:(ADMonocularExecutorParameters *)arg1 ;
-(id)getIntermediates;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 rotationPreference:(unsigned long long)arg4 ;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 ;
-(long long)executeWithColor:(CVBufferRef)arg1 outDepthMap:(_CVBuffer*)arg2 ;
@end

