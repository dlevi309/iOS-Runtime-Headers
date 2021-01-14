/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIKaleidoscope : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCount;
	CIVector* inputCenter;
	NSNumber* inputAngle;

}
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CGRect)_outputExtent;
@end

