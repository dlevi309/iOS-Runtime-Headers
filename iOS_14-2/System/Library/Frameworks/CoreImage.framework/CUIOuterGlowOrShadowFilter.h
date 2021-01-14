/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIOuterGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSpread;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSpread; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(NSNumber *)inputSize;
-(CIVector *)inputOffset;
-(void)setInputOffset:(CIVector *)arg1 ;
-(NSNumber *)inputRange;
-(void)setInputRange:(NSNumber *)arg1 ;
-(NSNumber *)inputSpread;
-(void)setInputSpread:(NSNumber *)arg1 ;
-(id)_kernel;
-(CIColor *)inputColor;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(void)setInputColor:(CIColor *)arg1 ;
-(void)setInputSize:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

