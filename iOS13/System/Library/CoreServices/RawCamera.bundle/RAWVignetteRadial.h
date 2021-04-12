/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

