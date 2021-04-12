/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CILineOverlay : CIFilter {

	CIImage* inputImage;
	NSNumber* inputNRNoiseLevel;
	NSNumber* inputNRSharpness;
	NSNumber* inputEdgeIntensity;
	NSNumber* inputThreshold;
	NSNumber* inputContrast;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIComicNoiseReduction;
-(id)_CISobelEdges;
-(id)_CIColorControls;
@end

