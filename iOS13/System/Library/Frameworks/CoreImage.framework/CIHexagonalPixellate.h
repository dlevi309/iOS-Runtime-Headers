/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIHexagonalPixellate : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIHexagonalPixellate;
@end

