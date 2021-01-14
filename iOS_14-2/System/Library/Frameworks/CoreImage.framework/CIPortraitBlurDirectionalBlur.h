/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_kernelMetal;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(NSNumber *)inputHorizontalBlur;
-(void)setInputHorizontalBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasBlurStrength;
-(void)setInputAntiAliasBlurStrength:(NSNumber *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputMaxBlur;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

