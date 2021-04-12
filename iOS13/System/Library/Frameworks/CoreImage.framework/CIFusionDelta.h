/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIFusionDelta : CIFilter {

	CIImage* inputImage;
	CIVector* inputAddBlur;
	CIVector* inputRemoveBlur;
	NSNumber* inputApertureScaling;
	NSNumber* inputMaxBlur;

}
+(id)customAttributes;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)kernel;
@end

