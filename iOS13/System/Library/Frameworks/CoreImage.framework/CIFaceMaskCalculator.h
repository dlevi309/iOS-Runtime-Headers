/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, NSDictionary;

@interface CIFaceMaskCalculator : CIFilter {

	CIImage* inputImage;
	CIVector* inputFacesLeftEyeX;
	CIVector* inputFacesLeftEyeY;
	CIVector* inputFacesCenterX;
	CIVector* inputFacesCenterY;
	CIVector* inputFacesRightEyeX;
	CIVector* inputFacesRightEyeY;
	CIVector* inputFacesChinX;
	CIVector* inputFacesChinY;
	NSNumber* inputMaxBlur;
	NSNumber* inputFacesCapMultip;
	NSNumber* inputFacesMaxBlurOnEyes;
	NSNumber* inputFacesMaxBlurDistFromFocus;
	NSNumber* inputFacesLinearBlurGrowthM;
	NSNumber* inputFacesLinearBlurGrowthC;
	NSNumber* inputFacesEyeToEyebrowRatio;
	NSNumber* inputFacesDistToBlurScaling;
	NSNumber* inputFacesGainMultip;
	NSNumber* inputApertureScaling;
	NSDictionary* inputTuningParameters;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputFacesLeftEyeX; 
@property (nonatomic,retain) CIVector * inputFacesLeftEyeY; 
@property (nonatomic,retain) CIVector * inputFacesCenterX; 
@property (nonatomic,retain) CIVector * inputFacesCenterY; 
@property (nonatomic,retain) CIVector * inputFacesRightEyeX; 
@property (nonatomic,retain) CIVector * inputFacesRightEyeY; 
@property (nonatomic,retain) CIVector * inputFacesChinX; 
@property (nonatomic,retain) CIVector * inputFacesChinY; 
@property (nonatomic,copy) NSNumber * inputMaxBlur; 
@property (nonatomic,copy) NSNumber * inputFacesCapMultip; 
@property (nonatomic,copy) NSNumber * inputFacesMaxBlurOnEyes; 
@property (nonatomic,copy) NSNumber * inputFacesMaxBlurDistFromFocus; 
@property (nonatomic,copy) NSNumber * inputFacesLinearBlurGrowthM; 
@property (nonatomic,copy) NSNumber * inputFacesLinearBlurGrowthC; 
@property (nonatomic,copy) NSNumber * inputFacesEyeToEyebrowRatio; 
@property (nonatomic,copy) NSNumber * inputFacesDistToBlurScaling; 
@property (nonatomic,copy) NSNumber * inputFacesGainMultip; 
@property (nonatomic,copy) NSNumber * inputApertureScaling; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(CIVector *)inputFacesCenterX;
-(void)setInputFacesCenterX:(CIVector *)arg1 ;
-(CIVector *)inputFacesCenterY;
-(void)setInputFacesCenterY:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinX;
-(void)setInputFacesChinX:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinY;
-(void)setInputFacesChinY:(CIVector *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIVector *)inputFacesLeftEyeX;
-(void)setInputFacesLeftEyeX:(CIVector *)arg1 ;
-(CIVector *)inputFacesLeftEyeY;
-(void)setInputFacesLeftEyeY:(CIVector *)arg1 ;
-(CIVector *)inputFacesRightEyeX;
-(void)setInputFacesRightEyeX:(CIVector *)arg1 ;
-(CIVector *)inputFacesRightEyeY;
-(void)setInputFacesRightEyeY:(CIVector *)arg1 ;
-(id)metalKernel;
-(id)outputImage_V4;
-(NSNumber *)inputFacesCapMultip;
-(void)setInputFacesCapMultip:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesMaxBlurOnEyes;
-(void)setInputFacesMaxBlurOnEyes:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesMaxBlurDistFromFocus;
-(void)setInputFacesMaxBlurDistFromFocus:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesLinearBlurGrowthM;
-(void)setInputFacesLinearBlurGrowthM:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesLinearBlurGrowthC;
-(void)setInputFacesLinearBlurGrowthC:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesEyeToEyebrowRatio;
-(void)setInputFacesEyeToEyebrowRatio:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesDistToBlurScaling;
-(void)setInputFacesDistToBlurScaling:(NSNumber *)arg1 ;
-(NSNumber *)inputFacesGainMultip;
-(void)setInputFacesGainMultip:(NSNumber *)arg1 ;
@end

