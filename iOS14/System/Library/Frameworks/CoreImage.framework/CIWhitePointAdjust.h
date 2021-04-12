/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter {

	CIImage* inputImage;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(id)_kernel;
-(CIColor *)inputColor;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

