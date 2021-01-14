/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISmartBlackAndWhite : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;
	NSNumber* inputNeutralGamma;
	NSNumber* inputTone;
	NSNumber* inputHue;
	NSNumber* inputGrain;
	NSNumber* inputSeed;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputStrength; 
@property (nonatomic,copy) NSNumber * inputNeutralGamma; 
@property (nonatomic,copy) NSNumber * inputTone; 
@property (nonatomic,copy) NSNumber * inputHue; 
@property (nonatomic,copy) NSNumber * inputGrain; 
@property (nonatomic,copy) NSNumber * inputSeed; 
@property (nonatomic,copy) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(void)setInputSeed:(NSNumber *)arg1 ;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(NSNumber *)inputTone;
-(NSNumber *)inputGrain;
-(float*)createHueArray;
-(void)getNonNormalizedSettings:(SCD_Struct_CI64*)arg1 ;
-(id)hueArrayImage:(float*)arg1 ;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(void)setInputTone:(NSNumber *)arg1 ;
-(void)setInputHue:(NSNumber *)arg1 ;
-(void)setInputGrain:(NSNumber *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputHue;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputSeed;
-(CIImage *)inputImage;
@end

