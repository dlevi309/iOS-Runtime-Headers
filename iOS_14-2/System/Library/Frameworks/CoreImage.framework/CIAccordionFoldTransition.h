/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)_kernelMix;
-(id)_kernelWarpS;
-(id)_kernelWarpT;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputBottomHeight;
-(void)setInputBottomHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputNumberOfFolds;
-(void)setInputNumberOfFolds:(NSNumber *)arg1 ;
-(NSNumber *)inputFoldShadowAmount;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputFoldShadowAmount:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

