/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPhotoGrain : CIFilter {

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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(id)_interpolateGrainKernel;
-(id)_paddedTileKernel;
-(id)_grainBlendAndMixKernel;
-(NSNumber *)inputISO;
-(void)setInputISO:(NSNumber *)arg1 ;
-(NSNumber *)inputSeed;
-(void)setInputSeed:(NSNumber *)arg1 ;
@end

