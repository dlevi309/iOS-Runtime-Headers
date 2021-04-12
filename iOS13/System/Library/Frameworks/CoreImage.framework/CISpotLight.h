/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CISpotLight : CIFilter {

	CIImage* inputImage;
	CIVector* inputLightPosition;
	CIVector* inputLightPointsAt;
	NSNumber* inputBrightness;
	NSNumber* inputConcentration;
	CIColor* inputColor;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CISpotLight;
@end

