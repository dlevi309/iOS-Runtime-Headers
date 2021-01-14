/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSArray, NSNumber, InpaintingExecutionContext;

@interface CIInpaintingFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputMaskImage;
	CIVector* inputMaskBoundingBox;
	NSArray* inputFaceBoundingBoxes;
	NSArray* inputInpaintingProcessingResolutions;
	NSNumber* inputInpaintingBlendingRadius;
	NSNumber* inputInpaintingMode;
	InpaintingExecutionContext* _executionContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) CIVector * inputMaskBoundingBox; 
@property (nonatomic,retain) NSArray * inputFaceBoundingBoxes; 
@property (nonatomic,retain) NSArray * inputInpaintingProcessingResolutions; 
@property (nonatomic,retain) NSNumber * inputInpaintingBlendingRadius; 
@property (nonatomic,retain) NSNumber * inputInpaintingMode; 
@property (getter=getLastProcessingResolution,readonly) int lastProcessingResolution; 
@property (getter=getLastExecutionTime,readonly) double lastExecutionTime; 
@property (readonly) InpaintingExecutionContext * executionContext;                                //@synthesize executionContext=_executionContext - In the implementation block
+(id)customAttributes;
+(id)getEspressoResources;
-(InpaintingExecutionContext *)executionContext;
-(id)init;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(BOOL)shouldFaceSpecificModelBeUsed;
-(id)getSelectedFacesInpaintingModelDescriptor;
-(int)getLastProcessingResolution;
-(id)getSelectedGeneralInpaintingModelDescriptor;
-(id)performSinglePassInpaintingWithParameters:(id)arg1 ;
-(id)performTilingPipelineInpaintingWithParameters:(id)arg1 ;
-(id)performMultiresolutionInpaintingWithParameters:(id)arg1 ;
-(id)performFullPipelineInpaintingWithParameters:(id)arg1 ;
-(CGRect)inputMaskBoundingBoxAsValidCGRect;
-(double)getLastExecutionTime;
-(CIVector *)inputMaskBoundingBox;
-(void)setInputMaskBoundingBox:(CIVector *)arg1 ;
-(NSArray *)inputFaceBoundingBoxes;
-(void)setInputFaceBoundingBoxes:(NSArray *)arg1 ;
-(NSArray *)inputInpaintingProcessingResolutions;
-(void)setInputInpaintingProcessingResolutions:(NSArray *)arg1 ;
-(NSNumber *)inputInpaintingMode;
-(NSNumber *)inputInpaintingBlendingRadius;
-(void)setInputInpaintingBlendingRadius:(NSNumber *)arg1 ;
-(void)setInputInpaintingMode:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)dealloc;
@end

