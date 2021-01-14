/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)kernel;
-(BOOL)_isIdentity;
-(id)outputImage;
@end

