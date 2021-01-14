/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

