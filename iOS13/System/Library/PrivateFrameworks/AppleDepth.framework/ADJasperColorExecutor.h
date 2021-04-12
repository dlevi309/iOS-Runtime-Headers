/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADJasperColorPipeline, ADLKTExecutor, ADJasperColorExecutorParameters;

@interface ADJasperColorExecutor : ADExecutor {

	ADJasperColorPipeline* _pipeline;
	ADLKTExecutor* _lktExecutor;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmPreProcessedJasper;
	CVBufferRef _itmUnprocessedDepth;
	CVBufferRef _itmPostProcessedDepth;
	CVBufferRef _itmUnprocessedConf;
	CVBufferRef _itmPostProcessedConf;
	CVBufferRef _itmUnprocessedNormals;
	CVBufferRef _itmPostProcessedNormals;
	CVBufferRef _itmUnprocessedAlpha;
	CVBufferRef _itmOpticalFlow;
	CVBufferRef _itmPrevProcessedFusedDepth;
	CVBufferRef _itmCurrProcessedFusedDepth;
	CVBufferRef _itmPrevProcessedFusedNormals;
	CVBufferRef _itmCurrProcessedFusedNormals;
	BOOL _firstTimeExecution;
	BOOL _opticalFlowEnabled;
	ADJasperColorExecutorParameters* _executorParameters;

}

@property (nonatomic,copy) ADJasperColorExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(void)dealloc;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)getIntermediates;
-(long long)allocateIntermediateBuffers;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloud:(id)arg2 outDepthMap:(_CVBuffer*)arg3 outConfMap:(_CVBuffer*)arg4 outNormalsMap:(_CVBuffer*)arg5 ;
-(ADJasperColorExecutorParameters *)executorParameters;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 useTemporalConsistency:(BOOL)arg4 ;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloud:(id)arg2 outDepthMap:(_CVBuffer*)arg3 outConfMap:(_CVBuffer*)arg4 ;
-(void)setExecutorParameters:(ADJasperColorExecutorParameters *)arg1 ;
@end

