/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoMonocularInferenceDescriptor, ADImageDescriptor, ADMonocularPipelineParameters;

@interface ADMonocularPipeline : NSObject {

	long long _prioritization;
	ADNetworkProvider* _networkProvider;
	ADEspressoMonocularInferenceDescriptor* _inferenceDesc;
	ADImageDescriptor* _processedDepthDesc;
	BOOL _isDenseDepthInverse;
	ADMonocularPipelineParameters* _pipelineParameters;

}

@property (nonatomic,copy) ADMonocularPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(ADMonocularPipelineParameters *)pipelineParameters;
-(id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2 ;
-(id)inferenceDescriptor;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)processedDepthOutputDescriptor;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 depthOutput:(CVBufferRef)arg2 ;
-(void)setPipelineParameters:(ADMonocularPipelineParameters *)arg1 ;
@end

