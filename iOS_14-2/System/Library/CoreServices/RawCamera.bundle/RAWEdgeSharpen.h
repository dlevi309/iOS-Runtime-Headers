/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputPreSharpenAmount;
	NSNumber* inputPreSharpenBlurAmount;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 rect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

