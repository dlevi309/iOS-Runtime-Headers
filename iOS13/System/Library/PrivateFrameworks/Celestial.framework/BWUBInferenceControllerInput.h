/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {

	opaqueCMSampleBufferRef _inferenceImage;
	opaqueCMSampleBufferRef _propagationImage;
	BOOL _generateSemanticSkinMatte;
	BOOL _generateLowResPersonSegmentationMask;
	BOOL _generateFaceObservations;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef inferenceImage;                //@synthesize inferenceImage=_inferenceImage - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef propagationImage; 
@property (assign,nonatomic) BOOL generateSemanticSkinMatte;                          //@synthesize generateSemanticSkinMatte=_generateSemanticSkinMatte - In the implementation block
@property (assign,nonatomic) BOOL generateLowResPersonSegmentationMask;               //@synthesize generateLowResPersonSegmentationMask=_generateLowResPersonSegmentationMask - In the implementation block
@property (assign,nonatomic) BOOL generateFaceObservations;                           //@synthesize generateFaceObservations=_generateFaceObservations - In the implementation block
-(void)dealloc;
-(opaqueCMSampleBufferRef)propagationImage;
-(void)addInferenceImage:(opaqueCMSampleBufferRef)arg1 ;
-(void)addPropagationImage:(opaqueCMSampleBufferRef)arg1 ;
-(void)setGenerateFaceObservations:(BOOL)arg1 ;
-(void)setGenerateSemanticSkinMatte:(BOOL)arg1 ;
-(void)setGenerateLowResPersonSegmentationMask:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)inferenceImage;
-(BOOL)generateSemanticSkinMatte;
-(BOOL)generateLowResPersonSegmentationMask;
-(BOOL)generateFaceObservations;
@end

