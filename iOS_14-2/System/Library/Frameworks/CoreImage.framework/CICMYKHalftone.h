/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_CIWhite;
-(id)_CICMYK_convert;
-(id)_CICMYK_cyan;
-(id)_CICMYK_magenta;
-(id)_CICMYK_yellow;
-(id)_CICMYK_black;
-(id)outputImage;
@end

