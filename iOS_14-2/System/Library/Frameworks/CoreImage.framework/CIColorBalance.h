/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CIColorBalance : CIFilter {

	CIImage* inputImage;
	CIColor* inputColor;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;
	NSNumber* inputDamping;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
@property (nonatomic,retain) NSNumber * inputDamping; 
+(id)customAttributes;
-(id)_kernel;
-(CIColor *)inputColor;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputColor:(CIColor *)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmth;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(NSNumber *)inputDamping;
-(void)setInputDamping:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

