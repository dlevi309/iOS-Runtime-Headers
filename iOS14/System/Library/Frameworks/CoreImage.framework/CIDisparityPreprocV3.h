/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)preprocKernel;
-(id)preprocKernelNoAlpha;
-(CIImage *)inputAlphaImage;
-(void)setInputAlphaImage:(CIImage *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

