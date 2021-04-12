/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface PILocalLightFilterHDR : CIFilter {

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
-(id)_shadowKernelHDR;
-(id)_polyKernelHDR;
@end

