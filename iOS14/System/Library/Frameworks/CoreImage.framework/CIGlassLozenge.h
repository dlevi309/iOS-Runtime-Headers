/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIGlassLozenge : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	NSNumber* inputRadius;
	NSNumber* inputRefraction;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CILozengeRefraction;
@end

