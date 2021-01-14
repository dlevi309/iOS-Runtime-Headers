/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDisparitySmoothing : CIFilter {

	CIImage* inputImage;
	NSNumber* inputNumIterations;

}

@property (retain) CIImage * inputImage; 
@property (copy) NSNumber * inputNumIterations; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_customBoxBlur5Kernel;
-(id)outputImageMetal;
-(NSNumber *)inputNumIterations;
-(void)setInputNumIterations:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

