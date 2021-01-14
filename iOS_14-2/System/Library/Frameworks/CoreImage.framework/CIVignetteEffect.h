/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputIntensity;
	NSNumber* inputFalloff;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
+(id)customAttributes;
-(id)_poskernel;
-(id)_negkernel;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(CIVector *)inputCenter;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputFalloff;
-(void)setInputFalloff:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

