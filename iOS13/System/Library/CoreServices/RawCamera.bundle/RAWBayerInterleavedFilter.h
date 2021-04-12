/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector;

@interface RAWBayerInterleavedFilter : RAWFilter {

	CIImage* inputImage00;
	CIImage* inputImage01;
	CIImage* inputImage10;
	CIImage* inputImage11;
	CIVector* inputExtent;

}
-(id)outputImage;
@end

