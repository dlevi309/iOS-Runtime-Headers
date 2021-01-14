/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)i;
-(NSNumber *)q;
-(NSNumber *)strength;
-(void)setI:(NSNumber *)arg1 ;
-(void)setStrength:(NSNumber *)arg1 ;
-(void)setY:(NSNumber *)arg1 ;
-(NSNumber *)y;
-(void)setQ:(NSNumber *)arg1 ;
-(NSNumber *)warmth;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)applyInputConversion:(id)arg1 ;
-(id)applyOutputConversion:(id)arg1 ;
-(BOOL)isDefaultWarmth:(double)arg1 ;
-(void)setWarmth:(NSNumber *)arg1 ;
@end

