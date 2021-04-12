/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMattingSolverInternal : CIFilter {

	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputPredicateImage;
	NSNumber* inputRadius;
	NSNumber* inputSubsampling;
	NSNumber* inputEPS;
	NSNumber* inputNumIterations;
	NSNumber* inputErosionKernelSize;
	NSNumber* inputUseDepthFilter;
	NSNumber* inputFGThresholdValue;
	NSNumber* inputBGThresholdValue;

}
+(id)customAttributes;
-(id)outputImage;
@end

