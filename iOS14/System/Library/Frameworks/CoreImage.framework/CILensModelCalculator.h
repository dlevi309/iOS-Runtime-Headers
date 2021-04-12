/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputOriginalSize;
-(void)setInputOriginalSize:(CIVector *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIVector *)inputFocusRect;
-(void)setInputFocusRect:(CIVector *)arg1 ;
-(id)outputImage;
-(id)cpuParams;
-(id)mtlKernel;
-(CIImage *)inputImage;
-(CIImage *)inputMinMaxImage;
-(void)setInputMinMaxImage:(CIImage *)arg1 ;
-(NSNumber *)inputSimulatedAperture;
-(void)setInputSimulatedAperture:(NSNumber *)arg1 ;
-(NSNumber *)inputIntrinsicMatrixFocalLength;
-(void)setInputIntrinsicMatrixFocalLength:(NSNumber *)arg1 ;
@end

