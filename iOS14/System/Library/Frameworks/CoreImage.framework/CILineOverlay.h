/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_CIComicNoiseReduction;
-(id)_CISobelEdges;
-(id)_CIColorControls;
-(id)outputImage;
@end

