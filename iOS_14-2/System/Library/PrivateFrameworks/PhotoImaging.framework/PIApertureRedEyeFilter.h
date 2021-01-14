/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray;

@interface PIApertureRedEyeFilter : CIFilter {

	CIImage* inputImage;
	NSArray* inputSpots;

}
-(id)outputImage;
@end

