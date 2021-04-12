/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_kernelMetal;
-(NSNumber *)inputLumaNoiseAmpl;
-(NSNumber *)inputUseMetal;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

