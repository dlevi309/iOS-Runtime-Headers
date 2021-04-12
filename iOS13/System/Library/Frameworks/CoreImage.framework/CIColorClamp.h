/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorClamp : CIFilter {

	CIImage* inputImage;
	CIVector* inputMinComponents;
	CIVector* inputMaxComponents;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputMinComponents; 
@property (nonatomic,retain) CIVector * inputMaxComponents; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelAlphaPreserving;
-(CIVector *)inputMinComponents;
-(void)setInputMinComponents:(CIVector *)arg1 ;
-(CIVector *)inputMaxComponents;
-(void)setInputMaxComponents:(CIVector *)arg1 ;
@end

