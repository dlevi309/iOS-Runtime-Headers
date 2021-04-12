/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)_finalResult;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputEpsilon;
-(id)_swizzleImageXXX1:(id)arg1 ;
-(id)_swizzleImageYYZ1:(id)arg1 ;
-(id)subtract:(id)arg1 minus:(id)arg2 ;
-(id)_fullFloatBoxFilter;
-(id)computeAB:(id)arg1 ;
-(id)_multiplyImagesKernel;
-(id)_boxFilter:(id)arg1 fullFloat:(BOOL)arg2 ;
-(id)_swizzleImageYZZ1:(id)arg1 ;
-(id)multiplyImages:(id)arg1 imageB:(id)arg2 ;
-(id)_computeABKernel;
-(id)_downsampledColorImage:(id)arg1 ;
-(id)_combineRGB_and_A;
-(id)_upsampleImage:(id)arg1 targetImageSize:(CGSize)arg2 ;
-(CIImage *)inputGuideImage;
-(void)setInputGuideImage:(CIImage *)arg1 ;
-(void)setInputEpsilon:(NSNumber *)arg1 ;
@end

