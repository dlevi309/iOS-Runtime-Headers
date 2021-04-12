/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIPortraitBlurNoise : CIFilter {

	CIImage* inputImage;
	NSNumber* inputLumaNoiseAmpl;
	NSNumber* inputLumaNoiseModelCoeff;
	CIVector* inputExtent;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseAmpl; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseModelCoeff; 
@property (copy) CIVector * inputExtent; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)_kernelMetal;
-(NSNumber *)inputLumaNoiseAmpl;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
@end

