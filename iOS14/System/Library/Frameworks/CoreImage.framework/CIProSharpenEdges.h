/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_CIEdgesPrep;
-(id)_CIFindEdges;
-(id)_CIConvertRGBtoY;
-(id)_CISharpenCombineEdges;
-(id)_CIBlur1;
-(id)_CIBlur2;
-(id)_CIBlur4;
-(id)outputImage;
@end

