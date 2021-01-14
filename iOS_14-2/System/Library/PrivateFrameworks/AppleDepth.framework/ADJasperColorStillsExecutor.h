/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADJasperColorStillsPipeline, NSString, ADJasperPointCloud, ADEspressoRunner, ADEspressoBuffer, ADJasperColorStillsExecutorParameters;

@interface ADJasperColorStillsExecutor : ADExecutor {

	BOOL _isPrepared;
	ADJasperColorStillsPipeline* _pipeline;
	NSString* _correctionLogString;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmPreProcessedJasper;
	CVBufferRef _itmPreProcessedJasperForCorrection;
	ADJasperPointCloud* _aggregatedPointCloud;
	ADJasperPointCloud* _aggregatedPointCloudBeforeCorrection;
	CVBufferRef _itmUnprocessedDepth;
	CVBufferRef _itmUnscaledProcessedDepth;
	ADEspressoRunner* _correctionBackendEspressoRunner;
	ADEspressoRunner* _correctionFrontendEspressoRunner;
	ADEspressoBuffer* _sijFeaturesOutputBuffer;
	float* _sijFeaturesOutput;
	float* _sijFeaturesInput;
	float* _sijAnglesOutput;
	float* _sijErrorsOutput;
	ADJasperColorStillsExecutorParameters* _executorParameters;

}

@property (nonatomic,copy) ADJasperColorStillsExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(id)init;
-(ADJasperColorStillsExecutorParameters *)executorParameters;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloudArray:(id)arg2 jasper2ColorTransform:(SCD_Struct_AD1)arg3 colorCameraCalibration:(id)arg4 outDepthMap:(_CVBuffer*)arg5 ;
-(long long)prepareForEngineType:(unsigned long long)arg1 inputSize:(CGSize)arg2 ;
-(void)dealloc;
-(void)deallocateEspressoBuffers;
-(long long)allocateIntermediateBuffers;
-(long long)numberOfExecutionSteps;
-(void)setExecutorParameters:(ADJasperColorStillsExecutorParameters *)arg1 ;
-(id)getIntermediates;
@end

