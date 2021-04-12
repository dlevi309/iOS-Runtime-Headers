/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {

	opaqueCMSampleBufferRef _inferenceImage;
	opaqueCMSampleBufferRef _propagationImage;
	BOOL _generateSemanticSkinMatte;
	BOOL _generateSemanticSkyMatte;
	BOOL _generateLowResPersonSegmentationMask;
	BOOL _generateFaceObservations;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef inferenceImage;                //@synthesize inferenceImage=_inferenceImage - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef propagationImage; 
@property (assign,nonatomic) BOOL generateSemanticSkinMatte;                          //@synthesize generateSemanticSkinMatte=_generateSemanticSkinMatte - In the implementation block
@property (assign,nonatomic) BOOL generateSemanticSkyMatte;                           //@synthesize generateSemanticSkyMatte=_generateSemanticSkyMatte - In the implementation block
@property (assign,nonatomic) BOOL generateLowResPersonSegmentationMask;               //@synthesize generateLowResPersonSegmentationMask=_generateLowResPersonSegmentationMask - In the implementation block
@property (assign,nonatomic) BOOL generateFaceObservations;                           //@synthesize generateFaceObservations=_generateFaceObservations - In the implementation block
-(void)addInferenceImage:(opaqueCMSampleBufferRef)arg1 ;
-(void)addPropagationImage:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)propagationImage;
-(opaqueCMSampleBufferRef)inferenceImage;
-(BOOL)generateSemanticSkinMatte;
-(void)setGenerateSemanticSkinMatte:(BOOL)arg1 ;
-(BOOL)generateSemanticSkyMatte;
-(void)setGenerateSemanticSkyMatte:(BOOL)arg1 ;
-(BOOL)generateLowResPersonSegmentationMask;
-(void)setGenerateLowResPersonSegmentationMask:(BOOL)arg1 ;
-(BOOL)generateFaceObservations;
-(void)setGenerateFaceObservations:(BOOL)arg1 ;
-(void)dealloc;
@end

