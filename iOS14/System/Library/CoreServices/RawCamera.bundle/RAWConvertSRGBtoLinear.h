/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage;

@interface RAWConvertSRGBtoLinear : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;

}
-(id)outputImage;
@end

