/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)kernel;
-(BOOL)_isIdentity;
-(id)outputImage;
@end

