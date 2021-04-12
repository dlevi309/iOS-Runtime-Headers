/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIStretchCrop : CIFilter {

	CIImage* inputImage;
	CIVector* inputSize;
	NSNumber* inputCropAmount;
	NSNumber* inputCenterStretchAmount;

}
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
@end

