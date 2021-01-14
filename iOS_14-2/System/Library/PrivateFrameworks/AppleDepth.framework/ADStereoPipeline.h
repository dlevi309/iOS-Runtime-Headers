/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoStereoInferenceDescriptor, ADStereoPipelineParameters;

@interface ADStereoPipeline : NSObject {

	ADNetworkProvider* _networkProvider;
	ADEspressoStereoInferenceDescriptor* _inferenceDesc;
	long long _prioritization;
	BOOL _shouldPreProcessColorInputs;
	ADStereoPipelineParameters* _pipelineParameters;
	unsigned long long _stereoImagesAlignment;

}

@property (nonatomic,copy) ADStereoPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
@property (nonatomic,readonly) unsigned long long stereoImagesAlignment;                 //@synthesize stereoImagesAlignment=_stereoImagesAlignment - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreProcessColorInputs;                         //@synthesize shouldPreProcessColorInputs=_shouldPreProcessColorInputs - In the implementation block
-(ADStereoPipelineParameters *)pipelineParameters;
-(id)inferenceDescriptor;
-(id)initWithInputAlignment:(unsigned long long)arg1 andPrioritization:(long long)arg2 ;
-(void)setPipelineParameters:(ADStereoPipelineParameters *)arg1 ;
-(long long)adjustForEngine:(unsigned long long)arg1 ;
-(BOOL)shouldPreProcessColorInputs;
-(long long)preProcessColorInput:(CVBufferRef)arg1 toBuffer:(CVBufferRef)arg2 ;
-(void)convertRGBAFloat:(CVBufferRef)arg1 toPlanar:(CVBufferRef)arg2 ;
-(id)initWithInputAlignment:(unsigned long long)arg1 prioritization:(long long)arg2 andParameters:(id)arg3 ;
-(unsigned long long)stereoImagesAlignment;
@end

