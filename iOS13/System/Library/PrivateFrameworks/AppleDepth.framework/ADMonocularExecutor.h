/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) ADMonocularExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(void)dealloc;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)getIntermediates;
-(long long)allocateIntermediateBuffers;
-(ADMonocularExecutorParameters *)executorParameters;
-(void)setExecutorParameters:(ADMonocularExecutorParameters *)arg1 ;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 ;
-(long long)executeWithColor:(CVBufferRef)arg1 outDepthMap:(_CVBuffer*)arg2 ;
@end

