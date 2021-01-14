/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSMutableArray;

@interface CIBokehBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputRingAmount;
	NSNumber* inputRingSize;
	NSNumber* inputSoftness;
	NSMutableArray* _recipe;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(void)dealloc;
@end

