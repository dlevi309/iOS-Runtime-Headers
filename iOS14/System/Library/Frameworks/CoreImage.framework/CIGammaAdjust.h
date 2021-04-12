/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGammaAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPower;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputPower; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputPower;
-(void)setInputPower:(NSNumber *)arg1 ;
@end

