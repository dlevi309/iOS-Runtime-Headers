/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIDepthOfField : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	NSNumber* inputSaturation;
	NSNumber* inputUnsharpMaskRadius;
	NSNumber* inputUnsharpMaskIntensity;
	NSNumber* inputRadius;

}
+(id)customAttributes;
-(id)_CIAlphaNormalize;
-(id)_CITiltShift;
-(id)_DistanceColored;
-(id)outputImage;
@end

