/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, NSDictionary;

@interface CILensModelCalculator : CIFilter {

	CIImage* inputImage;
	CIImage* inputMinMaxImage;
	CIVector* inputOriginalSize;
	CIVector* inputFocusRect;
	NSNumber* inputSimulatedAperture;
	NSNumber* inputIntrinsicMatrixFocalLength;
	NSDictionary* inputTuningParameters;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMinMaxImage; 
@property (nonatomic,copy) CIVector * inputOriginalSize; 
@property (nonatomic,copy) CIVector * inputFocusRect; 
@property (nonatomic,copy) NSNumber * inputSimulatedAperture; 
@property (nonatomic,copy) NSNumber * inputIntrinsicMatrixFocalLength; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)kernel;
-(CIVector *)inputOriginalSize;
-(void)setInputOriginalSize:(CIVector *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIVector *)inputFocusRect;
-(void)setInputFocusRect:(CIVector *)arg1 ;
-(id)cpuParams;
-(CIImage *)inputMinMaxImage;
-(void)setInputMinMaxImage:(CIImage *)arg1 ;
-(NSNumber *)inputSimulatedAperture;
-(void)setInputSimulatedAperture:(NSNumber *)arg1 ;
-(NSNumber *)inputIntrinsicMatrixFocalLength;
-(void)setInputIntrinsicMatrixFocalLength:(NSNumber *)arg1 ;
@end

