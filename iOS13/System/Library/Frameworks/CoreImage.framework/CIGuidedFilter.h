/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGuidedFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputGuideImage;
	NSNumber* inputRadius;
	NSNumber* inputEpsilon;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputGuideImage; 
@property (copy) NSNumber * inputRadius; 
@property (copy) NSNumber * inputEpsilon; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)_fullFloatBoxFilter;
-(id)_multiplyImagesKernel;
-(id)_boxFilter:(id)arg1 fullFloat:(BOOL)arg2 ;
-(id)_swizzleImageXXX1:(id)arg1 ;
-(id)_swizzleImageYYZ1:(id)arg1 ;
-(id)_swizzleImageYZZ1:(id)arg1 ;
-(id)multiplyImages:(id)arg1 imageB:(id)arg2 ;
-(id)subtract:(id)arg1 minus:(id)arg2 ;
-(id)_computeABKernel;
-(id)_downsampledColorImage:(id)arg1 ;
-(id)_combineRGB_and_A;
-(id)computeAB:(id)arg1 ;
-(id)_upsampleImage:(id)arg1 targetImageSize:(CGSize)arg2 ;
-(id)_finalResult;
-(CIImage *)inputGuideImage;
-(void)setInputGuideImage:(CIImage *)arg1 ;
-(NSNumber *)inputEpsilon;
-(void)setInputEpsilon:(NSNumber *)arg1 ;
@end

