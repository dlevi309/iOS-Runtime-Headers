/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICheapBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPasses;
	NSNumber* inputSampling;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CICheapBlur;
-(id)_CILerp;
@end

