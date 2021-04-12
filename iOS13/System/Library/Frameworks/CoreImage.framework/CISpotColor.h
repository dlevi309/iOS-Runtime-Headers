/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CISpotColor : CIFilter {

	CIImage* inputImage;
	CIColor* inputCenterColor1;
	CIColor* inputReplacementColor1;
	NSNumber* inputCloseness1;
	NSNumber* inputContrast1;
	CIColor* inputCenterColor2;
	CIColor* inputReplacementColor2;
	NSNumber* inputCloseness2;
	NSNumber* inputContrast2;
	CIColor* inputCenterColor3;
	CIColor* inputReplacementColor3;
	NSNumber* inputCloseness3;
	NSNumber* inputContrast3;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CISpotColor;
@end

