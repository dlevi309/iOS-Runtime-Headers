/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)outputImage;
@end

