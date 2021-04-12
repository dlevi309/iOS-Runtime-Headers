/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface RedEyeRecolor : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	CIImage* inputMask;
	NSNumber* inputNoiseAmount;
	NSNumber* inputBrightness;
	NSNumber* inputRecovery;
	CIVector* inputExtent;
	NSNumber* inputWhiteCutoff;
	NSNumber* inputChroma;

}

@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputNoiseAmount; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputRecovery; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputWhiteCutoff; 
@property (nonatomic,retain) NSNumber * inputChroma; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(id)kernelRecovery;
-(id)kernelRepair;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(NSNumber *)inputNoiseAmount;
-(void)setInputNoiseAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputRecovery;
-(void)setInputRecovery:(NSNumber *)arg1 ;
-(NSNumber *)inputWhiteCutoff;
-(void)setInputWhiteCutoff:(NSNumber *)arg1 ;
-(NSNumber *)inputChroma;
-(void)setInputChroma:(NSNumber *)arg1 ;
@end

