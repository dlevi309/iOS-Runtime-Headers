/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)_kernelNew;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
@end

