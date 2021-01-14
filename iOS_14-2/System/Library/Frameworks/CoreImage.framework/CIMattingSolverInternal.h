/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

