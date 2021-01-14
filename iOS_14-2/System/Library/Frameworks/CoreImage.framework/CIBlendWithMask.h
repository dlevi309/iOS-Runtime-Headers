/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIBlendWithMask : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;
	CIImage* inputMaskImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(float)_maskFillColorValue;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)_kernelB0;
-(id)outputImage;
-(CIImage *)inputImage;
@end

