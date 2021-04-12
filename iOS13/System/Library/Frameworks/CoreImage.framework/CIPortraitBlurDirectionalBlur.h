/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPortraitBlurDirectionalBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputMaxBlur;
	NSNumber* inputHorizontalBlur;
	NSNumber* inputAntiAliasBlurStrength;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputMaxBlur; 
@property (nonatomic,copy) NSNumber * inputHorizontalBlur; 
@property (nonatomic,copy) NSNumber * inputAntiAliasBlurStrength; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputMaxBlur;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(id)_kernelMetal;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(NSNumber *)inputHorizontalBlur;
-(void)setInputHorizontalBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasBlurStrength;
-(void)setInputAntiAliasBlurStrength:(NSNumber *)arg1 ;
@end

