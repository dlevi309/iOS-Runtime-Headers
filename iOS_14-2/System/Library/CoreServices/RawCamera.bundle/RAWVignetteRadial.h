/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RAWVignetteRadial : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVignetteK0;
	NSNumber* inputVignetteK1;
	NSNumber* inputVignetteK2;
	NSNumber* inputVignetteK3;
	NSNumber* inputVignetteK4;
	CIVector* inputVignetteCenter;
	id inputColorSpace;
	NSNumber* inputVignetteExecute;

}
+(id)customAttributes;
-(id)outputImage;
@end

