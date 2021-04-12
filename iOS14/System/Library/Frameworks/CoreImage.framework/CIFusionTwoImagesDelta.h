/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIFusionTwoImagesDelta : CIFilter {

	CIImage* inputImage;
	CIImage* inputSecondaryImage;
	NSNumber* inputProtectStrength;
	NSNumber* inputApertureScaling;
	CIVector* inputAdditive;
	CIVector* inputSubtractive;
	NSNumber* inputMaxBlur;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputSecondaryImage; 
@property (retain) NSNumber * inputProtectStrength; 
@property (retain) NSNumber * inputApertureScaling; 
@property (retain) CIVector * inputAdditive; 
@property (retain) CIVector * inputSubtractive; 
@property (retain) NSNumber * inputMaxBlur; 
-(id)kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(CIImage *)inputSecondaryImage;
-(void)setInputSecondaryImage:(CIImage *)arg1 ;
-(NSNumber *)inputProtectStrength;
-(void)setInputProtectStrength:(NSNumber *)arg1 ;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(CIVector *)inputAdditive;
-(void)setInputAdditive:(CIVector *)arg1 ;
-(CIVector *)inputSubtractive;
-(void)setInputSubtractive:(CIVector *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

