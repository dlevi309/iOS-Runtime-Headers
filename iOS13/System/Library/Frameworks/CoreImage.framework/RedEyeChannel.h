/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RedEyeChannel : CIFilter {

	CIImage* inputImage;
	NSNumber* inputChannel;
	NSNumber* inputParam1;
	NSNumber* inputParam2;
	NSNumber* inputParam3;
	NSNumber* inputParam4;

}
-(id)outputImage;
-(id)filterNameForChannel:(int)arg1 ;
-(id)parameterNamesForChannel:(int)arg1 ;
@end

