/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoPearlColorInferenceDescriptor, ADPearlColorPipelineParameters;

@interface ADPearlColorPipeline : NSObject {

	ADNetworkProvider* _networkProvider;
	ADEspressoPearlColorInferenceDescriptor* _inferenceDesc;
	ADPearlColorPipelineParameters* _pipelineParameters;

}

@property (nonatomic,copy) ADPearlColorPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(id)init;
-(ADPearlColorPipelineParameters *)pipelineParameters;
-(id)inferenceDescriptor;
-(id)initWithParameters:(id)arg1 ;
-(void)setPipelineParameters:(ADPearlColorPipelineParameters *)arg1 ;
-(long long)adjustForEngine:(unsigned long long)arg1 ;
-(long long)filterDisparity:(CVBufferRef)arg1 ;
-(long long)postProcessDisparity:(CVBufferRef)arg1 output:(CVBufferRef)arg2 ;
@end

