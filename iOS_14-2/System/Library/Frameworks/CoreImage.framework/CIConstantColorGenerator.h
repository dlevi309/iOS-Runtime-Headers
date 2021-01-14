/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIColor;

@interface CIConstantColorGenerator : CIFilter {

	CIColor* inputColor;

}

@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
@end

