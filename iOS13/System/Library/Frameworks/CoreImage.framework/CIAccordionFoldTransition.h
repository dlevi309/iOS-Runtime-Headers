/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIAccordionFoldTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputBottomHeight;
	NSNumber* inputNumberOfFolds;
	NSNumber* inputFoldShadowAmount;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputBottomHeight; 
@property (nonatomic,retain) NSNumber * inputNumberOfFolds; 
@property (nonatomic,retain) NSNumber * inputFoldShadowAmount; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(id)_kernelWarpS;
-(id)_kernelWarpT;
-(id)_kernelMix;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputBottomHeight;
-(void)setInputBottomHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputNumberOfFolds;
-(void)setInputNumberOfFolds:(NSNumber *)arg1 ;
-(NSNumber *)inputFoldShadowAmount;
-(void)setInputFoldShadowAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputTime;
-(void)setInputTime:(NSNumber *)arg1 ;
@end

