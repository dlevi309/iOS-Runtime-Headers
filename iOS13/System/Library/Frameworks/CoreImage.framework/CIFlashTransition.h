/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CIFlashTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputFadeThreshold;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputMaxStriationRadius; 
@property (nonatomic,retain) NSNumber * inputStriationStrength; 
@property (nonatomic,retain) NSNumber * inputStriationContrast; 
@property (nonatomic,retain) NSNumber * inputFadeThreshold; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputTime;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)_geomKernel;
-(id)_colorKernel;
-(NSNumber *)inputMaxStriationRadius;
-(void)setInputMaxStriationRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputStriationStrength;
-(void)setInputStriationStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputStriationContrast;
-(void)setInputStriationContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputFadeThreshold;
-(void)setInputFadeThreshold:(NSNumber *)arg1 ;
@end

