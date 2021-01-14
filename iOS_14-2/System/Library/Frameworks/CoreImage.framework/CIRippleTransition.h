/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputShadingImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputWidth;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)_CIRippleTransition;
-(id)outputImage;
@end

