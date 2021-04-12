/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

