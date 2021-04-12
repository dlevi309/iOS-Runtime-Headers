/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIProSharpenEdges : CIFilter {

	CIImage* inputImage;
	NSNumber* inputFalloff;
	NSNumber* inputSharpness;
	NSNumber* inputEdgeScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIEdgesPrep;
-(id)_CIFindEdges;
-(id)_CIConvertRGBtoY;
-(id)_CIBlur1;
-(id)_CIBlur2;
-(id)_CIBlur4;
-(id)_CISharpenCombineEdges;
@end

