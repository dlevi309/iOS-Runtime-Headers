/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoJasperColorInferenceDescriptor, ADImageDescriptor, ADJasperColorPipelineParameters;

@interface ADJasperColorPipeline : NSObject {

	long long _prioritization;
	ADNetworkProvider* _networkProvider;
	ADEspressoJasperColorInferenceDescriptor* _inferenceDesc;
	ADImageDescriptor* _processedDepthDesc;
	ADImageDescriptor* _processedConfDesc;
	ADImageDescriptor* _processedNormalsDesc;
	BOOL _isDenseDepthInverse;
	ADJasperColorPipelineParameters* _pipelineParameters;

}

@property (nonatomic,copy) ADJasperColorPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(ADJasperColorPipelineParameters *)pipelineParameters;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)inferenceDescriptor;
-(id)LKTTexturesDescriptor;
-(long long)projectJasperPoints:(id)arg1 cropTo:(CGRect)arg2 rotateBy:(long long)arg3 projectedPointsBuffer:(CVBufferRef)arg4 ;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 confidence:(CVBufferRef)arg2 depthOutput:(CVBufferRef)arg3 confidenceOutput:(CVBufferRef)arg4 ;
-(long long)warpAndFuseWithCurrDepth:(CVBufferRef)arg1 prevDepth:(CVBufferRef)arg2 opticalFlow:(CVBufferRef)arg3 alphaMap:(CVBufferRef)arg4 depthOutput:(CVBufferRef)arg5 ;
-(id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2 ;
-(id)processedDepthOutputDescriptor;
-(void)setPipelineParameters:(ADJasperColorPipelineParameters *)arg1 ;
-(id)processedNormalsOutputDescriptor;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 confidence:(CVBufferRef)arg2 normals:(CVBufferRef)arg3 depthOutput:(CVBufferRef)arg4 confidenceOutput:(CVBufferRef)arg5 normalsOutput:(CVBufferRef)arg6 normalsRequiredRotation:(long long)arg7 ;
-(long long)warpAndFuseWithCurrDepth:(CVBufferRef)arg1 prevDepth:(CVBufferRef)arg2 currNormals:(CVBufferRef)arg3 prevNormals:(CVBufferRef)arg4 opticalFlow:(CVBufferRef)arg5 alphaMap:(CVBufferRef)arg6 depthOutput:(CVBufferRef)arg7 normalsOutput:(CVBufferRef)arg8 ;
-(id)processedConfidenceOutputDescriptor;
@end

