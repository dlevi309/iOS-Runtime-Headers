/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CILensModelApply : CIFilter {

	CIImage* inputImage;
	CIImage* inputLensModelParams;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputLensModelParams; 
-(id)kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(CIImage *)inputLensModelParams;
-(void)setInputLensModelParams:(CIImage *)arg1 ;
@end

