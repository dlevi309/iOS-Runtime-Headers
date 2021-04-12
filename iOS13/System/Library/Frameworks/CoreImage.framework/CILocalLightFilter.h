/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface CILocalLightFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputGuideImage;
	NSData* inputLightMap;
	CIImage* inputLightMapImage;
	NSNumber* inputLightMapWidth;
	NSNumber* inputLightMapHeight;
	NSNumber* inputLocalLight;
	NSNumber* inputSmartShadows;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_polyKernel;
-(id)_shadowKernel;
@end

