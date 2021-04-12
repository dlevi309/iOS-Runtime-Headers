/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWHueMagnet : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputHueMagMR;
	NSNumber* inputHueMagRY;
	NSNumber* inputHueMagYG;
	NSNumber* inputHueMagGC;
	NSNumber* inputHueMagCB;
	NSNumber* inputHueMagBM;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
@end

