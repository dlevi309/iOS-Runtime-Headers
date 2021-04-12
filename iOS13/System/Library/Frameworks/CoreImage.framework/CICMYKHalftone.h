/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CICMYKHalftone : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputWidth;
	NSNumber* inputAngle;
	NSNumber* inputSharpness;
	NSNumber* inputGCR;
	NSNumber* inputUCR;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CICMYK_convert;
-(id)_CIWhite;
-(id)_CICMYK_cyan;
-(id)_CICMYK_magenta;
-(id)_CICMYK_yellow;
-(id)_CICMYK_black;
@end

