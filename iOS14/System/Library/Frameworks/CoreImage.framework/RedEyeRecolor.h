/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(CIImage *)inputMask;
-(id)kernelRepair;
-(NSNumber *)inputChroma;
-(id)kernelRecovery;
-(void)setInputMask:(CIImage *)arg1 ;
-(NSNumber *)inputNoiseAmount;
-(void)setInputNoiseAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputRecovery;
-(void)setInputRecovery:(NSNumber *)arg1 ;
-(NSNumber *)inputWhiteCutoff;
-(void)setInputWhiteCutoff:(NSNumber *)arg1 ;
-(void)setInputChroma:(NSNumber *)arg1 ;
-(id)outputImage;
@end

