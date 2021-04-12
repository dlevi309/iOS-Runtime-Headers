/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIDisparityPreprocV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputAlphaImage;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputAlphaImage; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)preprocKernel;
-(id)preprocKernelNoAlpha;
-(CIImage *)inputAlphaImage;
-(void)setInputAlphaImage:(CIImage *)arg1 ;
@end

