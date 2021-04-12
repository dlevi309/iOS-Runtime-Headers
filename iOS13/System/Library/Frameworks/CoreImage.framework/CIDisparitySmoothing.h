/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_customBoxBlur5Kernel;
-(id)outputImageMetal;
-(NSNumber *)inputNumIterations;
-(void)setInputNumIterations:(NSNumber *)arg1 ;
@end

