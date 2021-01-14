/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class NSData, NSNumber, CIImage;

@interface PILocalLightMapPrepareHDR : CIFilter {

	NSData* inputLightMap;
	NSNumber* inputLightMapWidth;
	NSNumber* inputLightMapHeight;
	CIImage* inputGuideImage;

}
+(id)customAttributes;
-(id)outputImage;
@end

