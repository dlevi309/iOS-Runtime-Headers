/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, NSDictionary;

@interface CISegmentationFusion : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	CIVector* inputAddBlur;
	CIVector* inputRemoveBlur;
	NSNumber* inputApertureScaling;
	NSDictionary* inputTuningParameters;

}
+(id)customAttributes;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)kernel;
@end

