/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIPhotoGrainHDR : CIFilter {

	CIImage* inputImage;
	NSNumber* inputISO;
	NSNumber* inputAmount;
	NSNumber* inputSeed;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputISO; 
@property (nonatomic,copy) NSNumber * inputAmount; 
@property (nonatomic,copy) NSNumber * inputSeed; 
+(id)customAttributes;
-(id)_interpolateGrainKernel;
-(id)_paddedTileKernel;
-(id)_grainBlendAndMixKernel;
-(void)setInputISO:(NSNumber *)arg1 ;
-(void)setInputSeed:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputISO;
-(id)outputImage;
-(NSNumber *)inputSeed;
-(CIImage *)inputImage;
@end

