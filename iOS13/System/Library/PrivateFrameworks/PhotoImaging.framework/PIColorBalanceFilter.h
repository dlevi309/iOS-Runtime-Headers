/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIColorBalanceFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _inputWarmTemp;
	NSNumber* _inputWarmTint;
	NSNumber* _inputStrength;
	NSNumber* _inputHasFace;
	NSNumber* _inputIsRaw;

}

@property (nonatomic,retain) CIImage * inputImage;                  //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSNumber * inputWarmTemp;              //@synthesize inputWarmTemp=_inputWarmTemp - In the implementation block
@property (nonatomic,retain) NSNumber * inputWarmTint;              //@synthesize inputWarmTint=_inputWarmTint - In the implementation block
@property (nonatomic,retain) NSNumber * inputStrength;              //@synthesize inputStrength=_inputStrength - In the implementation block
@property (nonatomic,retain) NSNumber * inputHasFace;               //@synthesize inputHasFace=_inputHasFace - In the implementation block
@property (nonatomic,retain) NSNumber * inputIsRaw;                 //@synthesize inputIsRaw=_inputIsRaw - In the implementation block
+(id)customAttributes;
+(CGColorSpaceRef)linearWideGamutColorSpace;
+(id)colorBalanceKernels;
+(id)gHDRtoPPKernel;
+(id)PPtogHDRKernel;
+(id)colorBalanceKernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)applyInputConversion:(id)arg1 ;
-(id)applyOutputConversion:(id)arg1 ;
-(NSNumber *)inputWarmTemp;
-(void)setInputWarmTemp:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmTint;
-(void)setInputWarmTint:(NSNumber *)arg1 ;
-(NSNumber *)inputHasFace;
-(void)setInputHasFace:(NSNumber *)arg1 ;
-(NSNumber *)inputIsRaw;
-(void)setInputIsRaw:(NSNumber *)arg1 ;
@end

