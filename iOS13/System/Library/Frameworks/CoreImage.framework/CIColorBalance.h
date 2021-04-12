/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmth;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(NSNumber *)inputDamping;
-(void)setInputDamping:(NSNumber *)arg1 ;
@end

