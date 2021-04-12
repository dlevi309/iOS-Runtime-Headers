/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoJasperColorInferenceDescriptor, ADImageDescriptor, ADReprojection, ADJasperColorPipelineParameters;

@interface ADJasperColorPipeline : NSObject {

	long long _prioritization;
	ADNetworkProvider* _networkProvider;
	ADEspressoJasperColorInferenceDescriptor* _inferenceDesc;
	ADImageDescriptor* _processedDepthDesc;
	ADImageDescriptor* _processedConfDesc;
	ADImageDescriptor* _processedNormalsDesc;
	BOOL _isDenseDepthInverse;
	ADReprojection* _depthReprojector;
	ADJasperColorPipelineParameters* _pipelineParameters;

}

@property (nonatomic,copy) ADJasperColorPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(ADJasperColorPipelineParameters *)pipelineParameters;
-(id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2 ;
-(id)inferenceDescriptor;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)LKTTexturesDescriptor;
-(long long)projectJasperPoints:(id)arg1 cropTo:(CGRect)arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(CVBufferRef)arg4 ;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 confidence:(CVBufferRef)arg2 depthOutput:(CVBufferRef)arg3 confidenceOutput:(CVBufferRef)arg4 ;
-(long long)postProcessConfidence:(CVBufferRef)arg1 confidenceOutput:(CVBufferRef)arg2 confidenceUnits:(unsigned long long)arg3 ;
-(long long)warpAndFuseWithCurrDepth:(CVBufferRef)arg1 prevDepth:(CVBufferRef)arg2 opticalFlow:(CVBufferRef)arg3 alphaMap:(CVBufferRef)arg4 depthOutput:(CVBufferRef)arg5 ;
-(long long)warpPreviousDepth:(CVBufferRef)arg1 intoCurrentDepth:(CVBufferRef)arg2 previousConfidence:(CVBufferRef)arg3 intoCurrentConfidence:(CVBufferRef)arg4 previousNormals:(CVBufferRef)arg5 intoCurrentNormals:(CVBufferRef)arg6 usingPoseDelta:(SCD_Struct_AD1)arg7 previousCalibration:(id)arg8 currentCalibration:(id)arg9 ;
-(long long)fuseCurrentDepth:(CVBufferRef)arg1 previousDepth:(CVBufferRef)arg2 intoOutputDepth:(CVBufferRef)arg3 currentConfidence:(CVBufferRef)arg4 previousConfidence:(CVBufferRef)arg5 intoOutputConfidence:(CVBufferRef)arg6 currentNormals:(CVBufferRef)arg7 previousNormals:(CVBufferRef)arg8 intoOutputNormals:(CVBufferRef)arg9 usingAlpha:(CVBufferRef)arg10 ;
-(id)processedDepthOutputDescriptor;
-(void)setPipelineParameters:(ADJasperColorPipelineParameters *)arg1 ;
-(long long)postProcessDepth:(CVBufferRef)arg1 depthOutput:(CVBufferRef)arg2 depthUnits:(unsigned long long)arg3 ;
-(id)processedNormalsOutputDescriptor;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 confidence:(CVBufferRef)arg2 normals:(CVBufferRef)arg3 depthOutput:(CVBufferRef)arg4 confidenceOutput:(CVBufferRef)arg5 normalsOutput:(CVBufferRef)arg6 normalsRequiredRotation:(long long)arg7 ;
-(long long)warpPreviousDepth:(CVBufferRef)arg1 intoCurrentDepth:(CVBufferRef)arg2 previousConfidence:(CVBufferRef)arg3 intoCurrentConfidence:(CVBufferRef)arg4 previousNormals:(CVBufferRef)arg5 intoCurrentNormals:(CVBufferRef)arg6 usingOpticalFlow:(CVBufferRef)arg7 ;
-(long long)postProcessConfidence:(CVBufferRef)arg1 confidenceOutput:(CVBufferRef)arg2 confidenceUnits:(unsigned long long)arg3 depthUnits:(unsigned long long)arg4 ;
-(id)processedConfidenceOutputDescriptor;
-(long long)warpAndFuseWithCurrDepth:(CVBufferRef)arg1 prevDepth:(CVBufferRef)arg2 currNormals:(CVBufferRef)arg3 prevNormals:(CVBufferRef)arg4 opticalFlow:(CVBufferRef)arg5 alphaMap:(CVBufferRef)arg6 depthOutput:(CVBufferRef)arg7 normalsOutput:(CVBufferRef)arg8 ;
@end

