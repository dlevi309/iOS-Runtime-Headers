/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoStillImageInferenceDescriptor, ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor, ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor, ADImageDescriptor, ADJasperColorStillsPipelineParameters;

@interface ADJasperColorStillsPipeline : NSObject {

	ADNetworkProvider* _networkProvider;
	ADNetworkProvider* _correctionBackendNetworkProvider;
	ADNetworkProvider* _correctionFrontendNetworkProvider;
	ADEspressoStillImageInferenceDescriptor* _inferenceDesc;
	ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor* _correctionBackendInferenceDesc;
	ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor* _correctionFrontendInferenceDesc;
	ADImageDescriptor* _processedDepthDesc;
	BOOL _isDisparity;
	 _STDWeights;
	float _scaledEFL;
	float _STDThreshold;
	ADJasperColorStillsPipelineParameters* _pipelineParameters;

}

@property (nonatomic,copy) ADJasperColorStillsPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(id)init;
-(ADJasperColorStillsPipelineParameters *)pipelineParameters;
-(id)inferenceDescriptor;
-(id)initWithParameters:(id)arg1 ;
-(long long)projectJasperPoints:(id)arg1 cropTo:(CGRect)arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(CVBufferRef)arg4 ;
-(id)processedDepthOutputDescriptor;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 depthOutput:(CVBufferRef)arg2 ;
-(void)setPipelineParameters:(ADJasperColorStillsPipelineParameters *)arg1 ;
-(long long)postProcessDepth:(CVBufferRef)arg1 depthOutput:(CVBufferRef)arg2 depthUnits:(unsigned long long)arg3 ;
-(long long)postProcessJasperToColorTransformCorrection:(id)arg1 originalTransform:(SCD_Struct_AD1)arg2 correctedTransform:(SCD_Struct_AD1*)arg3 ;
-(id)correctionBackendInferenceDescriptor;
-(id)correctionFrontendInferenceDescriptor;
-(long long)projectJasperPointsForJasperToColorTransformCorrection:(id)arg1 cropTo:(CGRect)arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(CVBufferRef)arg4 ;
-(long long)processJasperToColorCorrectionIntermediateResultWithBackendEspressoFeaturesOutput:(const float*)arg1 frontendEspressoFeaturesInput:(float*)arg2 featuresDimensions:(id)arg3 ;
-(long long)postProcessJasperToColorCorrectionWithAngles:(float*)arg1 errors:(float*)arg2 originalTransform:(SCD_Struct_AD1)arg3 correctedTransform:(SCD_Struct_AD1*)arg4 colorCameraCalibration:(id)arg5 colorImageScale:(float)arg6 transformCorrectionResults:(id*)arg7 ;
@end

