/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIColorMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputGradientImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputGradientImage; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputGradientImage;
-(void)setInputGradientImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

