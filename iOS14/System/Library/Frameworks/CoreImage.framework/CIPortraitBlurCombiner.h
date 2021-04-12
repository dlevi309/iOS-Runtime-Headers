/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_ourBlendKernelMetal;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(id)nonMetalKernel;
-(id)nonMetalKernelYCC;
-(id)_blendKernel:(BOOL)arg1 ;
-(CIImage *)inputBlurImage;
-(void)setInputBlurImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMatteImage;
-(CIImage *)inputImage;
@end

