/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface CICircleGenerator : CIFilter {

	CIColor* inputColor;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputEdgeBlur;

}
+(id)customAttributes;
-(id)_CICircle;
-(id)outputImage;
@end

