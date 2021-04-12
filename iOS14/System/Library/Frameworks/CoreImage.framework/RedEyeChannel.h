/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)filterNameForChannel:(int)arg1 ;
-(id)parameterNamesForChannel:(int)arg1 ;
-(id)outputImage;
@end

