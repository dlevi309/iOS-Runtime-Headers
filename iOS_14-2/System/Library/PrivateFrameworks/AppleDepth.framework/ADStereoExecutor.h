/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADStereoExecutorParameters, ADStereoPipeline;

@interface ADStereoExecutor : ADExecutor {

	BOOL _isPrepared;
	CGRect _refColorROI;
	CGRect _auxColorROI;
	CVBufferRef _refColor;
	CVBufferRef _itmChunkyRefColor;
	CVBufferRef _itmCroppedScaledRefColor;
	CVBufferRef _itmRotatedRefColor;
	CVBufferRef _auxColor;
	CVBufferRef _itmChunkyAuxColor;
	CVBufferRef _itmCroppedScaledAuxColor;
	CVBufferRef _itmRotatedAuxColor;
	CVBufferRef _disparity;
	ADStereoExecutorParameters* _executorParameters;
	ADStereoPipeline* _pipeline;

}

@property (nonatomic,copy) ADStereoExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
@property (nonatomic,retain,readonly) ADStereoPipeline * pipeline;                       //@synthesize pipeline=_pipeline - In the implementation block
-(ADStereoExecutorParameters *)executorParameters;
-(ADStereoPipeline *)pipeline;
-(id)initWithInputAlignment:(unsigned long long)arg1 andPrioritization:(long long)arg2 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;
-(long long)allocateIntermediateBuffers;
-(long long)prepareForEngineType:(unsigned long long)arg1 ;
-(long long)prepareWithBestEngine;
-(long long)numberOfExecutionSteps;
-(long long)executeWithRefColor:(CVBufferRef)arg1 auxColor:(CVBufferRef)arg2 outDisparityMap:(_CVBuffer*)arg3 ;
-(void)setExecutorParameters:(ADStereoExecutorParameters *)arg1 ;
@end

