/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PINeutralGrayWhiteBalanceFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _strength;
	NSNumber* _warmth;
	NSNumber* _y;
	NSNumber* _i;
	NSNumber* _q;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSNumber * strength;               //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) NSNumber * warmth;                 //@synthesize warmth=_warmth - In the implementation block
@property (y,nonatomic,retain) NSNumber * y;                    //@synthesize y=_y - In the implementation block
@property (i,nonatomic,retain) NSNumber * i;                    //@synthesize i=_i - In the implementation block
@property (q,nonatomic,retain) NSNumber * q;                    //@synthesize q=_q - In the implementation block
+(id)customAttributes;
+(id)colorBalanceKernels;
+(id)gHDRtoPPKernel;
+(id)PPtogHDRKernel;
+(id)RGBToYIQKernel;
+(id)YIQToRGBKernel;
+(id)whiteBalanceKernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setI:(NSNumber *)arg1 ;
-(NSNumber *)i;
-(NSNumber *)y;
-(NSNumber *)q;
-(void)setQ:(NSNumber *)arg1 ;
-(void)setStrength:(NSNumber *)arg1 ;
-(NSNumber *)strength;
-(void)setY:(NSNumber *)arg1 ;
-(id)applyInputConversion:(id)arg1 ;
-(id)applyOutputConversion:(id)arg1 ;
-(BOOL)isDefaultWarmth:(double)arg1 ;
-(NSNumber *)warmth;
-(void)setWarmth:(NSNumber *)arg1 ;
@end

