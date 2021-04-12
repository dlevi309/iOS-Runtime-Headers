/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSize;
	NSNumber* inputSoften;
	NSNumber* inputAngle;
	CIColor* inputHighlightColor;
	CIColor* inputShadowColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSoften; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) CIColor * inputHighlightColor; 
@property (nonatomic,retain) CIColor * inputShadowColor; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputSize;
-(void)setInputSize:(NSNumber *)arg1 ;
-(id)_kernelC;
-(NSNumber *)inputSoften;
-(void)setInputSoften:(NSNumber *)arg1 ;
-(CIColor *)inputHighlightColor;
-(void)setInputHighlightColor:(CIColor *)arg1 ;
-(CIColor *)inputShadowColor;
-(void)setInputShadowColor:(CIColor *)arg1 ;
@end

