/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RAWSimpleLensCorrectionFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputDistortionScaleHalfMinorRadius;
	NSNumber* inputDistortionScaleMinorRadius;
	NSNumber* inputDistortionScaleMajorRadius;
	NSNumber* inputDistortionScaleMaxRadius;
	NSNumber* inputDraftMode;
	id inputColorSpace;
	NSNumber* inputFocalLength;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(CGPoint)mapPoint:(CGPoint)arg1 info:(id)arg2 ;
-(CGRect)distortionRegionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

