/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)kernel;
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
@end

