/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIImage, NSNumber;

@interface RadialFalloffFilter : CIFilter {

	CIVector* inputExtent;
	CIImage* inputCenter;
	NSNumber* inputFalloff;
	NSNumber* inputRadius;
	NSNumber* inputAnisotropic;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputAnisotropic; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputFalloff;
-(void)setInputFalloff:(NSNumber *)arg1 ;
-(NSNumber *)inputAnisotropic;
-(void)setInputAnisotropic:(NSNumber *)arg1 ;
@end

