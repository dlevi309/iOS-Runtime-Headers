/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIDroste : CIFilter {

	CIImage* inputImage;
	CIVector* inputInsetPoint0;
	CIVector* inputInsetPoint1;
	NSNumber* inputStrands;
	NSNumber* inputPeriodicity;
	NSNumber* inputRotation;
	NSNumber* inputZoom;

}
+(id)customAttributes;
-(id)_CIDroste;
-(id)outputImage;
@end

