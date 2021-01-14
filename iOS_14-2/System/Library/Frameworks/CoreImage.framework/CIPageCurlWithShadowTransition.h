/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPageCurlWithShadowTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputBacksideImage;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputRadius;
	NSNumber* inputShadowSize;
	NSNumber* inputShadowAmount;
	CIVector* inputShadowExtent;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIPageCurlWithShadowTransition;
-(id)_CIPageCurlNoShadowTransition;
@end

