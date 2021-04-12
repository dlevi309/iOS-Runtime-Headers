/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CILensModelApplyV3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputLensModelImage;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputLensModelImage; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)kernel;
-(CIImage *)inputLensModelImage;
-(void)setInputLensModelImage:(CIImage *)arg1 ;
@end

