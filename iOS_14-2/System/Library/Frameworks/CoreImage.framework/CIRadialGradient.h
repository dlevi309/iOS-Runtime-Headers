/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputRadius0;
	NSNumber* inputRadius1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius0; 
@property (nonatomic,retain) NSNumber * inputRadius1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(id)_kernel;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputRadius1;
-(void)setInputRadius0:(NSNumber *)arg1 ;
-(void)setInputRadius1:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius0;
@end

