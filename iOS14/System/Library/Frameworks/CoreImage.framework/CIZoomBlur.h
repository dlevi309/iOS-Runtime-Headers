/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)_kernel;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)_kernelNew;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
@end

