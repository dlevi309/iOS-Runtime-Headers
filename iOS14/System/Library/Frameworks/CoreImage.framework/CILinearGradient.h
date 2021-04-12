/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor;

@interface CILinearGradient : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputPoint0; 
@property (nonatomic,retain) CIVector * inputPoint1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(id)_kernel;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
-(CIVector *)inputPoint0;
-(CIVector *)inputPoint1;
-(id)outputImage;
-(void)setInputPoint0:(CIVector *)arg1 ;
-(void)setInputPoint1:(CIVector *)arg1 ;
@end

