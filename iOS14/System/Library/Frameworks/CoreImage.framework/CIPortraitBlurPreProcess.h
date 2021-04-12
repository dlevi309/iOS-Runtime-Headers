/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPortraitBlurPreProcess : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurmapImage;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurmapImage; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernelMetal;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(CIImage *)inputBlurmapImage;
-(void)setInputBlurmapImage:(CIImage *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

