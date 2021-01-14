/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CISunbeamsGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputSunRadius;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputTime;

}
+(id)customAttributes;
-(id)_CISunbeams;
-(id)outputImage;
@end

