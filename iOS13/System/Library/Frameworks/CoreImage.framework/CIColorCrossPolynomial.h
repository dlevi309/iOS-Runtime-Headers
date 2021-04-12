/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorCrossPolynomial : CIFilter {

	CIImage* inputImage;
	CIVector* inputRedCoefficients;
	CIVector* inputGreenCoefficients;
	CIVector* inputBlueCoefficients;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRedCoefficients; 
@property (nonatomic,retain) CIVector * inputGreenCoefficients; 
@property (nonatomic,retain) CIVector * inputBlueCoefficients; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentity;
-(CIVector *)inputRedCoefficients;
-(void)setInputRedCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputGreenCoefficients;
-(void)setInputGreenCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputBlueCoefficients;
-(void)setInputBlueCoefficients:(CIVector *)arg1 ;
@end

