/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

@interface CIPortraitBlurCombiner : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) NSDictionary * inputTuningParameters; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputMatteImage;
-(id)_ourBlendKernelMetal;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(id)nonMetalKernel;
-(id)nonMetalKernelYCC;
-(id)_blendKernel:(BOOL)arg1 ;
-(CIImage *)inputBlurImage;
-(void)setInputBlurImage:(CIImage *)arg1 ;
@end

