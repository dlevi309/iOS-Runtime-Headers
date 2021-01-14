/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWLTMFilter : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;
	NSNumber* inputShadowCutoff;
	NSNumber* inputHighlightCutoff;
	NSNumber* inputAmount;
	NSNumber* inputBlurRadius;
	id inputColorSpace;
	CIImage* tcImage;

}
+(id)customAttributes;
-(id)outputImage;
-(BOOL)makeToneCurveImage;
@end

