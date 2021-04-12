/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIFocalPlaneNative : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	CIImage* inputLensModelCalculatorImage;
	NSNumber* inputAlphaThreshold;
	NSNumber* inputAmplitude;
	NSNumber* inputExponent;
	NSNumber* inputGamma;
	NSNumber* inputMinFactor;
	NSNumber* inputMaxFactor;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_focalPlanePreProcessorKernelPow2;
-(id)_focalPlanePreProcessorKernel;
@end

