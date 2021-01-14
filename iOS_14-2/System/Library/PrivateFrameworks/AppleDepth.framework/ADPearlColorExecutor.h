/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADPearlColorPipeline, ADPearlColorExecutorParameters;

@interface ADPearlColorExecutor : ADExecutor {

	BOOL _isPrepared;
	ADPearlColorPipeline* _pipeline;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmCroppedScaledDisparity;
	CVBufferRef _itmRotatedDisparity;
	CVBufferRef _itmPreProcessedDisparity;
	CVBufferRef _itmUnprocessedOutputDisparity;
	ADPearlColorExecutorParameters* _executorParameters;

}

@property (nonatomic,copy) ADPearlColorExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(id)init;
-(ADPearlColorExecutorParameters *)executorParameters;
-(void)dealloc;
-(void)deallocateEspressoBuffers;
-(long long)allocateIntermediateBuffers;
-(long long)numberOfExecutionSteps;
-(void)setExecutorParameters:(ADPearlColorExecutorParameters *)arg1 ;
-(id)getIntermediates;
-(long long)prepareForEngineType:(unsigned long long)arg1 inputColorROI:(CGRect)arg2 ;
-(long long)executeWithDisparity:(CVBufferRef)arg1 color:(CVBufferRef)arg2 outDisparity:(_CVBuffer*)arg3 ;
@end

