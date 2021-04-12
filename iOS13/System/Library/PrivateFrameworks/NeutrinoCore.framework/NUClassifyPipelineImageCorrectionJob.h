/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {

	VNObservation* _observation;
	SCD_Struct_NU7 _imageSize;

}

@property (readonly) NUClassifyPipelineImageCorrectionRequest * classifyPipelineImageCorrectionRequest; 
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithClassifyPipelineImageCorrectionRequest:(id)arg1 ;
-(NUClassifyPipelineImageCorrectionRequest *)classifyPipelineImageCorrectionRequest;
-(id)detectClassifyPipelineImageCorrectionInBuffer:(CVBufferRef)arg1 error:(out id*)arg2 ;
@end

